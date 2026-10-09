#include <wsg_50_interface/wsg_ros_interface.hpp>
namespace wsg_50_interface
{

  WSG50HardwareInterface::WSG50HardwareInterface(): wsg_(), mode_(0){}

  WSG50HardwareInterface::~WSG50HardwareInterface(){}

  hardware_interface::CallbackReturn WSG50HardwareInterface::on_init(const hardware_interface::HardwareInfo & info)
  {
    // Check if the hardware interface is valid
    if (hardware_interface::SystemInterface::on_init(info) != hardware_interface::CallbackReturn::SUCCESS)
    {
      return hardware_interface::CallbackReturn::ERROR;
    }

    // Getting the gripper parameters
    wsg_.name_ = info.joints[0].name; 
    wsg_.ip_ = info.hardware_parameters.at("ip_address");
    wsg_.port_ = std::stoi(info.hardware_parameters.at("port"));
    wsg_.protocol_ = info.hardware_parameters.at("protocol");
    wsg_.rate_ = std::stod(info.hardware_parameters.at("rate"));
    wsg_.grasping_force_ = std::stod(info.hardware_parameters.at("grasping_force"));
    wsg_.goal_speed_ = std::stod(info.hardware_parameters.at("speed"));
    wsg_.finger_sensors_ = (info.hardware_parameters.at("finger_sensors") == "true");
    // A WSG grasp takes the expected part width and faults (Axis is blocked) on contact far
    // outside it, so a close grasps at the part's width rather than at the commanded goal.
    auto part_width = info.hardware_parameters.find("grasp_part_width");
    if (part_width != info.hardware_parameters.end()) {
      grasp_part_width_mm_ = std::stod(part_width->second);
    }
    RCLCPP_INFO(rclcpp::get_logger("WSG50HardwareInterface"), "Grasp part width: %.1f mm%s",
                grasp_part_width_mm_, grasp_part_width_mm_ > 0.0 ? "" : " (unset: grasp at the goal)");

    // Check the communication protocol
    if (wsg_.protocol_ == "udp")
    {
      wsg_.local_port_ = std::stoi(info.hardware_parameters.at("local_port"));
      RCLCPP_INFO(rclcpp::get_logger("WSG50HardwareInterface"), "\nGripper joint name: %s  \nGripper IP: %s  \nGripper port: %d \nGripper local port: %d \nGripper Protocol: UDP \nGripper rate: %f  \nGripper grasping force: %f\nFingers sensor: %s", wsg_.name_.c_str(), wsg_.ip_.c_str(), wsg_.port_, wsg_.local_port_, wsg_.rate_, wsg_.grasping_force_, wsg_.finger_sensors_ ? "Enabled" : "Disabled");
    }
    else
    {
      if(wsg_.protocol_ != "tcp")
      {
        RCLCPP_ERROR(rclcpp::get_logger("WSG50HardwareInterface"), "Invalid protocol specified. Use 'tcp' or 'udp'.");
        return hardware_interface::CallbackReturn::ERROR;
      }
      RCLCPP_INFO(rclcpp::get_logger("WSG50HardwareInterface"), "\nGripper joint name: %s  \nGripper IP: %s  \nGripper port: %d \nGripper Protocol: TCP \nGripper rate: %f  \nGripper grasping force: %f\nFingers sensor: %s", wsg_.name_.c_str(), wsg_.ip_.c_str(), wsg_.port_, wsg_.rate_, wsg_.grasping_force_, wsg_.finger_sensors_ ? "Enabled" : "Disabled");
    }
    return hardware_interface::CallbackReturn::SUCCESS;
  }

  hardware_interface::CallbackReturn WSG50HardwareInterface::on_activate(const rclcpp_lifecycle::State &)
  {
    RCLCPP_INFO(rclcpp::get_logger("WSG50HardwareInterface"), "Activating WSG50");
    if (wsg_.auto_update_thread_.joinable()) {  // leftover from a lost link (see on_error)
      wsg_.disconnect();
    } else if (cmd_is_connected()) {  // an earlier attempt connected but never started the thread
      cmd_disconnect();
    }

    try {
      if (!wsg_.connect()) {
        RCLCPP_ERROR(rclcpp::get_logger("WSG50HardwareInterface"), "Failed to connect to WSG-50");
        return hardware_interface::CallbackReturn::ERROR;
      }
      if (!wsg_.setup()) {
        RCLCPP_ERROR(rclcpp::get_logger("WSG50HardwareInterface"), "Failed to setup WSG-50");
        return hardware_interface::CallbackReturn::ERROR;
      }
    } catch (const std::exception &e) {
      RCLCPP_ERROR(rclcpp::get_logger("WSG50HardwareInterface"), "Exception in on_activate: %s", e.what());
      return hardware_interface::CallbackReturn::ERROR;
    }

    return hardware_interface::CallbackReturn::SUCCESS;
  }

  std::vector<hardware_interface::StateInterface> WSG50HardwareInterface::export_state_interfaces()
  {
    std::vector<hardware_interface::StateInterface> state_interfaces;
    state_interfaces.emplace_back(wsg_.name_, hardware_interface::HW_IF_POSITION, &wsg_.negative_width_);
    state_interfaces.emplace_back(wsg_.name_, hardware_interface::HW_IF_VELOCITY, &finger_speed_);
    state_interfaces.emplace_back(wsg_.name_, hardware_interface::HW_IF_EFFORT, &wsg_.force_);
    return state_interfaces;
  }

  std::vector<hardware_interface::CommandInterface> WSG50HardwareInterface::export_command_interfaces()
  {
    std::vector<hardware_interface::CommandInterface> command_interfaces;
    command_interfaces.emplace_back(wsg_.name_, hardware_interface::HW_IF_POSITION, &wsg_.goal_width_);
    return command_interfaces;
  }

  hardware_interface::return_type WSG50HardwareInterface::read(const rclcpp::Time & time, const rclcpp::Duration & period)
  {
    if (wsg_.link_lost_) {
      return hardware_interface::return_type::ERROR;  // -> on_error -> unconfigured
    }
    // Read made by the thread
    wsg_.negative_width_ = wsg_.width_/2.0;
    finger_speed_ = wsg_.speed_/2.0;
    return hardware_interface::return_type::OK;
  }

  hardware_interface::return_type WSG50HardwareInterface::write(const rclcpp::Time & time, const rclcpp::Duration & period)
  {
    if (std::isnan(wsg_.goal_width_) ||
        (!std::isnan(last_goal_position_) && std::abs(wsg_.goal_width_ - last_goal_position_) <= 1e-4))
    {
      return hardware_interface::return_type::OK;
    }

    const double goal_mm = wsg_.goal_width_ * 2.0 * 1000.0;  // per finger m -> full jaw mm
    const int state = wsg_.grasp_state_;
    // Gripping, no part found, part lost or holding: the grasp still owns the fingers until a
    // release, and the gripper refuses a move or a new grasp until then.
    const bool grasped = grasp_sent_ || (state >= 1 && state <= 4);
    double width_mm = goal_mm;

    if (grasp_part_width_mm_ > 0.0) {
      if (goal_mm < grasp_part_width_mm_) {
        if (grasped) {  // already closed on it; a second close goal changes nothing
          last_goal_position_ = wsg_.goal_width_;
          return hardware_interface::return_type::OK;
        }
        mode_ = 1;  // grasp
        width_mm = grasp_part_width_mm_;
      } else {
        mode_ = grasped ? 2 : 0;  // release if holding, else move
      }
    } else {
      // No part width: the old rule, close vs open against the last goal
      mode_ = (!std::isnan(last_goal_position_) && wsg_.goal_width_ < last_goal_position_) ? 1 : 2;
    }

    static const char * names[] = {"move", "grasp", "release"};
    RCLCPP_INFO(rclcpp::get_logger("WSG50HardwareInterface"), "Gripper %s to %.1f mm (goal %.1f mm, grasp state %d)",
                names[mode_], width_mm, goal_mm, state);
    if (wsg_.cmd(width_mm / 1000.0, wsg_.goal_speed_, mode_) != 0)
    {
      RCLCPP_ERROR(rclcpp::get_logger("WSG50HardwareInterface"), "Failed to send %s command", names[mode_]);
      return hardware_interface::return_type::ERROR;
    }
    grasp_sent_ = (mode_ == 1);
    last_goal_position_ = wsg_.goal_width_;
    return hardware_interface::return_type::OK;
  }
  hardware_interface::CallbackReturn WSG50HardwareInterface::on_deactivate(const rclcpp_lifecycle::State &)
  {
    RCLCPP_INFO(rclcpp::get_logger("WSG50HardwareInterface"), "Deactivating WSG50");
    try {
      if (!wsg_.disconnect()) {
        RCLCPP_ERROR(rclcpp::get_logger("WSG50HardwareInterface"), "Failed to disconnect from WSG-50");
        return hardware_interface::CallbackReturn::ERROR;
      }
    } catch (const std::exception &e) {
      RCLCPP_ERROR(rclcpp::get_logger("WSG50HardwareInterface"), "Exception in on_deactivate: %s", e.what());
      return hardware_interface::CallbackReturn::ERROR;
    }

    return hardware_interface::CallbackReturn::SUCCESS;
  }

  // A lost link (or failed command) lands here. The lifecycle default fails and finalizes the
  // component; succeeding leaves it unconfigured so configure -> activate reconnects it
  // (hw_reconnect.py). This runs in the control loop that also streams to the arm, so it only
  // flags the link: joining a read thread still blocked in recv() would stall that loop for up
  // to TCP_RCV_TIMEOUT_SEC. on_activate cleans up before reconnecting.
  hardware_interface::CallbackReturn WSG50HardwareInterface::on_error(const rclcpp_lifecycle::State &)
  {
    RCLCPP_WARN(rclcpp::get_logger("WSG50HardwareInterface"), "Gripper link lost; unconfigured, awaiting reconnect.");
    wsg_.connected_ = 0;
    return hardware_interface::CallbackReturn::SUCCESS;
  }

  #include "pluginlib/class_list_macros.hpp"
  PLUGINLIB_EXPORT_CLASS(wsg_50_interface::WSG50HardwareInterface, hardware_interface::SystemInterface)

}// namespace wsg_50_interface
