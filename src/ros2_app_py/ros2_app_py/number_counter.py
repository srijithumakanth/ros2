#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64


class NumberCounterNode(Node):
    def __init__(self):
        super().__init__("number_counter")

        self.sub_ = self.create_subscription(
            Int64, "number", self.callback_number, 10)

        self.get_logger().info("number_counter has been started.")
        
        self.counter_ = 0

    def callback_number(self, msg):
        self.counter_ += msg.data
        self.get_logger().warn("Counter: " + str(self.counter_))


def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
