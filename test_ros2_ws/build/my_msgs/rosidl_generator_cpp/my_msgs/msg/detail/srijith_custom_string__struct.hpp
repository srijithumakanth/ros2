// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_msgs:msg/SrijithCustomString.idl
// generated code does not contain a copyright notice

#ifndef MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__STRUCT_HPP_
#define MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__my_msgs__msg__SrijithCustomString __attribute__((deprecated))
#else
# define DEPRECATED__my_msgs__msg__SrijithCustomString __declspec(deprecated)
#endif

namespace my_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrijithCustomString_
{
  using Type = SrijithCustomString_<ContainerAllocator>;

  explicit SrijithCustomString_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_data = "";
    }
  }

  explicit SrijithCustomString_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : my_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->my_data = "";
    }
  }

  // field types and members
  using _my_data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _my_data_type my_data;

  // setters for named parameter idiom
  Type & set__my_data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->my_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_msgs::msg::SrijithCustomString_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_msgs::msg::SrijithCustomString_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::SrijithCustomString_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_msgs::msg::SrijithCustomString_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_msgs__msg__SrijithCustomString
    std::shared_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_msgs__msg__SrijithCustomString
    std::shared_ptr<my_msgs::msg::SrijithCustomString_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrijithCustomString_ & other) const
  {
    if (this->my_data != other.my_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrijithCustomString_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrijithCustomString_

// alias to use template instance with default allocator
using SrijithCustomString =
  my_msgs::msg::SrijithCustomString_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_msgs

#endif  // MY_MSGS__MSG__DETAIL__SRIJITH_CUSTOM_STRING__STRUCT_HPP_
