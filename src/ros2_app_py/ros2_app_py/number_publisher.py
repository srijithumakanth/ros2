#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

# Number Publisher Class inherits Node object
class NumberPublisherNode(Node):

    # Constructor of Number Publisher Node class
    def __init__(self):

        # Constructor of the rclpy.node Node object [super()--> because it is inherited]
        super().__init__("number_publisher")

        self.number_ = 4

        self.pub_ = self.create_publisher(Int64, "number", 10)

        '''Unlike ROS1 rospy.rate -> ROS2 does not use rates. Everything is based on timers.
        The timer here is created right inside the node class for the node usng self.
        As ROS2 initializes, the timer automatically starts and keeps spinning as long as the ROS2 comms does not shutdown. '''
        self.number_timer_ = self.create_timer(0.5, self.publish_number)
        
        # self --> because our class is now a rclpy.node Node object.
        self.get_logger().info("number_publisher has been started!")

    def print_number(self):
        self.get_logger().info(str(self.number_))

    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.pub_.publish(msg)


def main(args=None):
    # Initialize ROS2 communications
    rclpy.init(args=args)
   
    # ROS2 node is now the NumberPublisherNode class
    node = NumberPublisherNode() 
   
    # Keep the node alive. Like ROS1 , here we need to specify what nodes to keep alive.
    rclpy.spin(node)


    # Shutdown ROS2 communications
    rclpy.shutdown()
    # After this the node object gets automatically destroyed.
    # As well everything created from that node object.


if __name__=='__main__':
    main()