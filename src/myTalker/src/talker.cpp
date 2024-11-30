#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

class Talker : public rclcpp::Node {
public:
    Talker()
    : Node("talker")
    {
        publisher_ = this->create_publisher<std_msgs::msg::Float64>("/test", 10);
        subscription_ = this->create_subscription<std_msgs::msg::Float64>(
            "/system_topic", 10, std::bind(&Talker::topic_callback, this, std::placeholders::_1));
    }

private:
    void topic_callback(const std_msgs::msg::Float64::SharedPtr msg)
    {
        auto message = std_msgs::msg::Float64();
        message.data = (msg->data > 0) ? 1.0 : 0.0;  // Example logic
        publisher_->publish(message);
        RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", message.data);
    }

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Talker>());
    rclcpp::shutdown();
    return 0;
}

