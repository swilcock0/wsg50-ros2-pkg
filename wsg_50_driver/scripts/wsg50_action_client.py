#!/usr/bin/env python3

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from wsg_50_common.action import Cmd
import time
import threading
import queue

class InteractiveWSG50Client(Node):
    def __init__(self):
        super().__init__('interactive_wsg50_client')
        self._action_client = ActionClient(self, Cmd, 'wsg_50_cmd')
        self.goal_active = False
        self.last_feedback_time = 0.0
        self.feedback_interval = 0.5  # Print feedback every 0.5 seconds
        self.command_queue = queue.Queue()
        self.running = True
        self.last_position = 0.0  # Track last known position

    def send_goal(self, mode, width, speed):
        if self.goal_active:
            self.get_logger().warning('Goal already active, please wait...')
            return

        goal_msg = Cmd.Goal()
        goal_msg.mode = mode
        goal_msg.width = width
        goal_msg.speed = speed

        mode_names = {0: 'MOVE', 1: 'GRASP', 2: 'RELEASE'}
        self.get_logger().info(f'Sending {mode_names[mode]} command: width={width}mm, speed={speed}mm/s')

        self._action_client.wait_for_server()
        self.goal_active = True
        
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, 
            feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            self.goal_active = False
            return

        self.get_logger().info('Goal accepted, executing...')
        self._goal_handle = goal_handle
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        status = future.result().status
        
        # Print final position - try result first, then fall back to last feedback
        if hasattr(result, 'position'):
            self.get_logger().info(f'Final position: {result.position:.2f}mm')
        elif hasattr(self, 'last_position'):
            self.get_logger().info(f'Final position: {self.last_position:.2f}mm')
        
        # Check if goal was canceled
        if status == 4:  # CANCELED
            self.get_logger().info('Goal was canceled')
        elif result.result:
            self.get_logger().info('✓ Goal completed successfully!')
        else:
            self.get_logger().info('✗ Goal failed!')
        
        self.goal_active = False

    def feedback_callback(self, feedback_msg):
        current_time = time.time()
        # Store the latest position for potential final display
        self.last_position = feedback_msg.feedback.position
        
        # Throttle feedback to avoid spam
        if current_time - self.last_feedback_time >= self.feedback_interval:
            feedback = feedback_msg.feedback
            self.get_logger().info(f'Current position: {feedback.position:.2f}mm')
            self.last_feedback_time = current_time

    def cancel_goal(self):
        if self.goal_active and hasattr(self, '_goal_handle'):
            self.get_logger().info('Canceling current goal...')
            cancel_future = self._goal_handle.cancel_goal_async()
            cancel_future.add_done_callback(self.cancel_response_callback)
        else:
            self.get_logger().info('No active goal to cancel')

    def cancel_response_callback(self, future):
        cancel_response = future.result()
        if cancel_response.return_code == 1:  # ACCEPT
            self.get_logger().info('Cancel request accepted')
        else:
            self.get_logger().info('Cancel request rejected')
        
        # Always reset the flag after cancel response
        self.goal_active = False

def input_thread(command_queue, running_flag):
    """Separate thread for handling user input"""
    while running_flag[0]:
        try:
            cmd = input("wsg50> ")
            command_queue.put(cmd)
        except (EOFError, KeyboardInterrupt):
            command_queue.put("quit")
            break

def main():
    rclpy.init()
    client = InteractiveWSG50Client()
    
    print("\n=== WSG-50 Interactive Action Client ===")
    print("Commands:")
    print("  move <width> <speed>    - Move to position")
    print("  grasp <width> <speed>   - Grasp object")
    print("  release <width> <speed> - Release object")
    print("  cancel                  - Cancel current action")
    print("  quit                    - Exit")
    print("\nWidth: 2.0-110.0 mm, Speed: 0.1-420.0 mm/s\n")

    # Start input thread
    running_flag = [True]
    input_thread_handle = threading.Thread(target=input_thread, args=(client.command_queue, running_flag))
    input_thread_handle.daemon = True
    input_thread_handle.start()

    while rclpy.ok() and client.running:
        try:
            # Handle ROS callbacks
            rclpy.spin_once(client, timeout_sec=0.01)
            
            # Check for user commands
            try:
                cmd_str = client.command_queue.get_nowait()
                cmd = cmd_str.strip().split()
                
                if not cmd:
                    continue
                    
                if cmd[0] == 'quit':
                    break
                elif cmd[0] == 'cancel':
                    client.cancel_goal()
                elif cmd[0] in ['move', 'grasp', 'release']:
                    if len(cmd) != 3:
                        print("Usage: {} <width> <speed>".format(cmd[0]))
                        continue
                    
                    try:
                        width = float(cmd[1])
                        speed = float(cmd[2])
                        
                        if not (2.0 <= width <= 110.0):
                            print("Width must be between 2.0 and 110.0 mm")
                            continue
                        if not (0.1 <= speed <= 420.0):
                            print("Speed must be between 0.1 and 420.0 mm/s")
                            continue
                        
                        mode = {'move': 0, 'grasp': 1, 'release': 2}[cmd[0]]
                        client.send_goal(mode, width, speed)
                    except ValueError:
                        print("Invalid number format")
                else:
                    print("Unknown command. Type 'quit' to exit.")
                    
            except queue.Empty:
                pass  # No command available, continue spinning
            
        except KeyboardInterrupt:
            break

    # Cleanup
    running_flag[0] = False
    client.running = False
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()