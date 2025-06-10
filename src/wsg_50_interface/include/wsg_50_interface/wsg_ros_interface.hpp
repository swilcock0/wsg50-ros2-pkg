#ifndef WSG_50_INTERFACE_HPP
#define WSG_50_INTERFACE_HPP
#include "rclcpp/rclcpp.hpp"


#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_info.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"

#include <string.h>

#include <class_loader/class_loader.hpp>


#include "wsg_50_interface/wsg_50.hpp"

namespace wsg_50_interface
{

class WSG50HardwareInterface : public hardware_interface::SystemInterface
{
public:
  WSG50HardwareInterface();
  ~WSG50HardwareInterface() override;

  hardware_interface::CallbackReturn on_init(const hardware_interface::HardwareInfo & info) override;
  hardware_interface::CallbackReturn on_activate(const rclcpp_lifecycle::State &) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::return_type read(const rclcpp::Time & time, const rclcpp::Duration & period) override;
  hardware_interface::return_type write(const rclcpp::Time & time, const rclcpp::Duration & period) override;

  hardware_interface::CallbackReturn on_deactivate(const rclcpp_lifecycle::State &) override;



private:
  WSG50Driver wsg_;
  std::string joint_name_;
  double last_goal_position_ = std::numeric_limits<double>::quiet_NaN();
  double last_goal_speed_ = std::numeric_limits<double>::quiet_NaN();
  int mode_;
};
}

#endif  // WSG_50_INTERFACE_HPP

