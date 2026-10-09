#ifndef WSG_50_HPP
#define WSG_50_HPP

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <thread>
#include <atomic>
#include <chrono>
#include <deque>
#include <limits>
#include <utility>


#include "wsg_50_driver/common.h"
#include "wsg_50_driver/cmd.h"
#include "wsg_50_driver/msg.h"
#include "wsg_50_driver/functions.h"

#include <rclcpp/rclcpp.hpp>



#define GRIPPER_MIN_OPEN 2.0 // unit: mm
#define GRIPPER_MAX_OPEN 110.0
#define GRIPPER_MIN_SPEED 0.0
#define GRIPPER_MAX_SPEED 420.0
#define GRIPPER_WIDTH_THRESHOLD 1.0


#define GRIPPER_MIN_OPEN 2.0
#define GRIPPER_MAX_OPEN 110.0


class WSG50Driver{
    public:
        std::string ip_, name_,protocol_;
        int port_,local_port_;
        double rate_;
        double grasping_force_;
        double width_ = 0.0, speed_ = 0.0, force_ = 0.0;
        double negative_width_ = 0.0;
        double goal_width_ = std::numeric_limits<double>::quiet_NaN();  // nothing sent until commanded
        double goal_speed_ = 0.0;
        bool finger_sensors_;
        std::thread auto_update_thread_;
        std::atomic<int> connected_{0};
        std::atomic<bool> link_lost_{false};  // set by read_thread when the link dies
        bool homed_ = false;                   // home once per process, not on every reconnect
        // WSG grasping state (0x41, auto-updated): 0 idle, 1 gripping, 2 no part found,
        // 3 part lost, 4 holding, 5 releasing, 6 positioning, 7 error.
        std::atomic<int> grasp_state_{0};
        // The speed channel (0x44) reads ~0 while the fingers move, so speed_ is differentiated
        // from the opening over the last SPEED_WINDOW_SEC of samples instead (full jaw, m/s).
        static constexpr double SPEED_WINDOW_SEC = 0.1;
        std::deque<std::pair<std::chrono::steady_clock::time_point, double>> width_samples_;


        WSG50Driver();
        ~WSG50Driver();

        // Connexion / déconnexion
        bool connect();
        bool setup();
        bool disconnect();

        // Commandes principales
        int cmd(double pos, double speed,int mode);
    
        void read_thread(int interval_ms);

    private:
        void requestGraspingState(int interval_ms);
        void updateSpeed(double width);
  
};



#endif