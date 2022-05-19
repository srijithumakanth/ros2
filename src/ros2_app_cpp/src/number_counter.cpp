#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int64.hpp"

class NumberCounterNode : public rclcpp::Node // MODIFY NAME
{
public:
    NumberCounterNode() : Node("number_counter"), counter_(0)
    {
        number_subscriber_ = this->create_subscription<std_msgs::msg::Int64>(
            "number", 10, std::bind(&NumberCounterNode::callbackNumber, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "number_counter has been started.");
    }

private:
    void callbackNumber(const std_msgs::msg::Int64::SharedPtr msg)
    {
        counter_ += msg->data;
        RCLCPP_WARN(this->get_logger(), "Counter: %d", counter_);
    }
    
    int counter_;
    rclcpp::Subscription<std_msgs::msg::Int64>::SharedPtr number_subscriber_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberCounterNode>(); 
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
