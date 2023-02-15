#ifndef __PLANNER__HPP__
#define __PLANNER__HPP__

#include <chrono>
#include <memeory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "scale_truck_msgs/"


class Planner : public rclcpp::Node
{
public:
    explicit Planner(const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions());
    virtual ~Planner();
    
private:
    rclcpp::Publisher<scale_truck_msgs::msg::Control>::SharePtr control_publisher_;
    rclcpp::PUblisher<scale_truck_msgs::msg::Gap>::SharedPtr gap_publisher_;
    rclcpp::Subscription<scale_truck_msgs::msg::Strategy>::SharedPtr strategy_subscriber_;
}

#endif
