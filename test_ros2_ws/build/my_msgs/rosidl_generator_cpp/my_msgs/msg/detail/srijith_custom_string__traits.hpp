// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_msgs:msg/SrijithCustomString.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__TRAITS_HPP_
#define MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__TRAITS_HPP_

#include "my_msgs/msg/detail/srijith_custom_string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_msgs::msg::SrijithCustomString>()
{
  return "my_msgs::msg::SrijithCustomString";
}

template<>
inline const char * name<my_msgs::msg::SrijithCustomString>()
{
  return "my_msgs/msg/SrijithCustomString";
}

template<>
struct has_fixed_size<my_msgs::msg::SrijithCustomString>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_msgs::msg::SrijithCustomString>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_msgs::msg::SrijithCustomString>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__TRAITS_HPP_
