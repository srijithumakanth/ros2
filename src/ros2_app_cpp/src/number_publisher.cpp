#include "rclcpp/rclcpp.hpp"
#include "string"
#include "std_msgs/msg/int64.hpp"

// Publisher Node class publicly inherits from rclpp::Node
class NumberPublisherNode : public rclcpp::Node
{
public:
    // Constructor of this class is itself node object initialization
    NumberPublisherNode(): Node("number_publisher"), number_(2)
    {
        number_timer_ = this->create_wall_timer(std::chrono::seconds(1), 
                                                std::bind(&NumberPublisherNode::publishNumber, this));

        number_publisher_ = this->create_publisher<std_msgs::msg::Int64>("number", 10);
       
        RCLCPP_INFO(this->get_logger(), "number_publisher has been started.");
    }

private:
    
    void publishNumber()
    {
        auto msg = std_msgs::msg::Int64();
        msg.data = number_;
        number_publisher_->publish(msg);
    }

    int number_;

    // Everyhing in ROS2 is a shared pointer ===>>>
    // Declare the ROS2 timer. 
    // Use "SharedPtr" --> using rclcpp::TimerBase::SharedPtr = std::shared_ptr<rclcpp::TimerBase>
    rclcpp::TimerBase::SharedPtr number_timer_;

    rclcpp::Publisher<std_msgs::msg::Int64>::SharedPtr number_publisher_;
};

int main(int argc, char **argv)
{
    // Initialize ROS2 communications
    rclcpp::init(argc, argv);

    // Create a ROS2 C++ node using shared pointer.
    // This particular node is not linked to this excecutable. We can have multiple nodes.  
    auto node = std::make_shared<NumberPublisherNode>();

    // Keep the node alive. Like ROS1 , here we need to specify what nodes to keep alive.
    rclcpp::spin(node);

    // Shutdown ROS2 communications
    rclcpp::shutdown();
    // After this the node object gets automatically destroyed.
    // As well everything created from that node object.

    return 0;
}