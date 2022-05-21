#!/usr/bin/env python3
from pickle import TRUE
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64
from my_robot_interfaces.srv import ResetCounter


class NumberCounterNode(Node):
    def __init__(self):
        super().__init__("number_counter")

        self.counter_ = 0

        self.sub_ = self.create_subscription(
            Int64, "number", self.callback_number, 10)

        self.reset_counter_service_ = self.create_service(
            ResetCounter, "reset_counter", self.callback_reset_counter) 

        self.get_logger().info("number_counter has been started.")

    def callback_number(self, msg):
        self.counter_ += msg.data
        self.get_logger().info("Counter: " + str(self.counter_))

    def callback_reset_counter(self, request, response):
        if request.reset_value >= 0:
            self.counter_ = request.reset_value
            self.get_logger().warn("Counter: " + str(self.counter_))
            response.success = True
        else:
            response.success = False
        return response



def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
