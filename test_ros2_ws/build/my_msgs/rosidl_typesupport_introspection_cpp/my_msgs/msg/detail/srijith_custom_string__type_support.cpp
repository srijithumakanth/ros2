// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_msgs:msg/SrijithCustomString.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_msgs/msg/detail/srijith_custom_string__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SrijithCustomString_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_msgs::msg::SrijithCustomString(_init);
}

void SrijithCustomString_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_msgs::msg::SrijithCustomString *>(message_memory);
  typed_message->~SrijithCustomString();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SrijithCustomString_message_member_array[1] = {
  {
    "my_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_msgs::msg::SrijithCustomString, my_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SrijithCustomString_message_members = {
  "my_msgs::msg",  // message namespace
  "SrijithCustomString",  // message name
  1,  // number of fields
  sizeof(my_msgs::msg::SrijithCustomString),
  SrijithCustomString_message_member_array,  // message members
  SrijithCustomString_init_function,  // function to initialize message memory (memory has to be allocated)
  SrijithCustomString_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SrijithCustomString_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SrijithCustomString_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_msgs::msg::SrijithCustomString>()
{
  return &::my_msgs::msg::rosidl_typesupport_introspection_cpp::SrijithCustomString_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_msgs, msg, SrijithCustomString)() {
  return &::my_msgs::msg::rosidl_typesupport_introspection_cpp::SrijithCustomString_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
