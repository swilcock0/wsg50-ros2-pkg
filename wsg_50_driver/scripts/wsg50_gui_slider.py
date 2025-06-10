#!/usr/bin/env python3

import tkinter as tk
from tkinter import ttk
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from std_msgs.msg import Float64
import threading
import time

class WSG50GUI(Node):
    def __init__(self):
        super().__init__('wsg50_gui_slider')
        
        # Publishers
        self.move_pub = self.create_publisher(Point, 'wsg50/move', 10)
        self.position_pub = self.create_publisher(Float64, 'wsg50/move_position', 10)
        
        # GUI setup
        self.setup_gui()
        
        # Current values
        self.current_width = 55.0  # Start in middle
        self.current_speed = 100.0
        self.current_mode = 0  # Move mode
        
        # Follow mode variables
        self.follow_mode = False
        self.last_follow_command_time = 0.0
        self.follow_command_rate = 0.05  # Send command every 200ms
        self.follow_threshold = 1.0  # Only send if change > 1mm
        self.last_follow_width = 55.0
        
        self.get_logger().info('WSG-50 GUI Slider started')

    def setup_gui(self):
        self.root = tk.Tk()
        self.root.title("WSG-50 Gripper Control")
        self.root.geometry("450x350")
        
        # Main frame
        main_frame = ttk.Frame(self.root, padding="10")
        main_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))
        
        # Width control
        ttk.Label(main_frame, text="Gripper Width (mm):").grid(row=0, column=0, sticky=tk.W, pady=5)
        self.width_var = tk.DoubleVar(value=55.0)
        self.width_scale = ttk.Scale(
            main_frame, 
            from_=2.0, 
            to=110.0, 
            variable=self.width_var,
            orient=tk.HORIZONTAL,
            length=350,
            command=self.on_width_change
        )
        self.width_scale.grid(row=1, column=0, columnspan=2, sticky=(tk.W, tk.E), pady=5)
        
        self.width_label = ttk.Label(main_frame, text="55.0 mm")
        self.width_label.grid(row=2, column=0, sticky=tk.W)
        
        # Speed control
        ttk.Label(main_frame, text="Speed (mm/s):").grid(row=3, column=0, sticky=tk.W, pady=(15,5))
        self.speed_var = tk.DoubleVar(value=100.0)
        self.speed_scale = ttk.Scale(
            main_frame,
            from_=1.0,
            to=420.0,
            variable=self.speed_var,
            orient=tk.HORIZONTAL,
            length=350,
            command=self.on_speed_change
        )
        self.speed_scale.grid(row=4, column=0, columnspan=2, sticky=(tk.W, tk.E), pady=5)
        
        self.speed_label = ttk.Label(main_frame, text="100.0 mm/s")
        self.speed_label.grid(row=5, column=0, sticky=tk.W)
        
        # Mode selection
        ttk.Label(main_frame, text="Mode:").grid(row=6, column=0, sticky=tk.W, pady=(15,5))
        
        mode_frame = ttk.Frame(main_frame)
        mode_frame.grid(row=7, column=0, columnspan=2, sticky=(tk.W, tk.E), pady=5)
        
        self.mode_var = tk.IntVar(value=0)
        ttk.Radiobutton(mode_frame, text="Move", variable=self.mode_var, value=0).pack(side=tk.LEFT)
        ttk.Radiobutton(mode_frame, text="Grasp", variable=self.mode_var, value=1).pack(side=tk.LEFT, padx=10)
        ttk.Radiobutton(mode_frame, text="Release", variable=self.mode_var, value=2).pack(side=tk.LEFT)
        
        # Follow mode toggle
        follow_frame = ttk.Frame(main_frame)
        follow_frame.grid(row=8, column=0, columnspan=2, pady=10)
        
        self.follow_var = tk.BooleanVar()
        self.follow_checkbox = ttk.Checkbutton(
            follow_frame, 
            text="Follow Mode (continuously track slider)", 
            variable=self.follow_var,
            command=self.toggle_follow_mode
        )
        self.follow_checkbox.pack(side=tk.LEFT)
        
        self.follow_indicator = ttk.Label(follow_frame, text="●", foreground="red")
        self.follow_indicator.pack(side=tk.LEFT, padx=5)
        
        # Control buttons
        button_frame = ttk.Frame(main_frame)
        button_frame.grid(row=9, column=0, columnspan=2, pady=15)
        
        self.send_btn = ttk.Button(button_frame, text="Send Command", command=self.send_command)
        self.send_btn.pack(side=tk.LEFT, padx=5)
        
        self.quick_btn = ttk.Button(button_frame, text="Quick Move", command=self.quick_move)
        self.quick_btn.pack(side=tk.LEFT, padx=5)
        
        ttk.Button(button_frame, text="Close", command=self.close_app).pack(side=tk.LEFT, padx=5)
        
        # Status
        self.status_var = tk.StringVar(value="Ready")
        status_label = ttk.Label(main_frame, textvariable=self.status_var, font=('TkDefaultFont', 9))
        status_label.grid(row=10, column=0, columnspan=2, pady=10)
        
        # Configure grid weights
        main_frame.columnconfigure(0, weight=1)
        self.root.columnconfigure(0, weight=1)
        self.root.rowconfigure(0, weight=1)

    def on_width_change(self, value):
        width = float(value)
        self.width_label.config(text=f"{width:.1f} mm")
        self.current_width = width
        
        # Handle follow mode
        if self.follow_mode:
            self.handle_follow_command(width)

    def on_speed_change(self, value):
        speed = float(value)
        self.speed_label.config(text=f"{speed:.1f} mm/s")
        self.current_speed = speed

    def toggle_follow_mode(self):
        self.follow_mode = self.follow_var.get()
        
        if self.follow_mode:
            # Enable follow mode
            self.follow_indicator.config(foreground="green", text="●")
            self.send_btn.config(state="disabled")
            self.quick_btn.config(state="disabled")
            self.status_var.set("Follow mode ACTIVE - Move slider to control gripper")
            self.last_follow_width = self.width_var.get()
            self.get_logger().info("Follow mode ENABLED")
        else:
            # Disable follow mode
            self.follow_indicator.config(foreground="red", text="●")
            self.send_btn.config(state="normal")
            self.quick_btn.config(state="normal")
            self.status_var.set("Follow mode disabled - Use buttons to send commands")
            self.get_logger().info("Follow mode DISABLED")

    def handle_follow_command(self, width):
        current_time = time.time()
        
        # Rate limiting
        if current_time - self.last_follow_command_time < self.follow_command_rate:
            return
        
        # Threshold filtering - only send if change is significant
        if abs(width - self.last_follow_width) < self.follow_threshold:
            return
        
        # Send the follow command
        
        speed = 420.0  # Max speed in follow mode
        mode = 0  # Move mode
        
        # Send full command with mode
        msg = Point()
        msg.x = width
        msg.y = speed
        msg.z = float(mode)
        
        self.move_pub.publish(msg)
        # msg = Float64()
        # msg.data = width
        # self.position_pub.publish(msg)
        
        # Update tracking variables
        self.last_follow_command_time = current_time
        self.last_follow_width = width
        
        # Update status
        self.status_var.set(f"Following: {width:.1f}mm")
        self.get_logger().info(f"Follow command: {width:.1f}mm")

    def send_command(self):
        if self.follow_mode:
            return  # Don't send manual commands in follow mode
            
        width = self.width_var.get()
        speed = self.speed_var.get()
        mode = self.mode_var.get()
        
        # Send full command with mode
        msg = Point()
        msg.x = width
        msg.y = speed
        msg.z = float(mode)
        
        self.move_pub.publish(msg)
        
        mode_names = ["MOVE", "GRASP", "RELEASE"]
        self.status_var.set(f"Sent {mode_names[mode]} command: {width:.1f}mm at {speed:.1f}mm/s")
        self.get_logger().info(f"GUI command: {mode_names[mode]} to {width:.1f}mm at {speed:.1f}mm/s")

    def quick_move(self):
        if self.follow_mode:
            return  # Don't send manual commands in follow mode
            
        # Send simple position command (move mode with default speed)
        width = self.width_var.get()
        
        msg = Float64()
        msg.data = width
        
        self.position_pub.publish(msg)
        
        self.status_var.set(f"Quick move to {width:.1f}mm")
        self.get_logger().info(f"GUI quick move to {width:.1f}mm")

    def close_app(self):
        self.get_logger().info('Closing WSG-50 GUI')
        self.follow_mode = False  # Disable follow mode before closing
        self.root.quit()

    def run(self):
        # Start ROS spinning in a separate thread
        self.ros_thread = threading.Thread(target=self.ros_spin, daemon=True)
        self.ros_thread.start()
        
        # Run the GUI
        self.root.mainloop()

    def ros_spin(self):
        rclpy.spin(self)

def main():
    rclpy.init()
    
    try:
        gui = WSG50GUI()
        gui.run()
    except KeyboardInterrupt:
        pass
    finally:
        gui.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()