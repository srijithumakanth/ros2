// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_msgs:msg/SrijithCustomString.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__BUILDER_HPP_
#define MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__BUILDER_HPP_

#include "my_msgs/msg/detail/srijith_custom_string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_msgs
{

namespace msg
{

namespace builder
{

class Init_SrijithCustomString_my_data
{
public:
  Init_SrijithCustomString_my_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_msgs::msg::SrijithCustomString my_data(::my_msgs::msg::SrijithCustomString::_my_data_type arg)
  {
    msg_.my_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_msgs::msg::SrijithCustomString msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_msgs::msg::SrijithCustomString>()
{
  return my_msgs::msg::builder::Init_SrijithCustomString_my_data();
}

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__BUILDER_HPP_
