// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_msgs:msg/SrijithCustomString.idl
// generated code does not contain a copyright notice
#include "my_msgs/msg/detail/srijith_custom_string__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_msgs/msg/detail/srijith_custom_string__struct.h"
#include "my_msgs/msg/detail/srijith_custom_string__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // my_data
#include "rosidl_runtime_c/string_functions.h"  // my_data

// forward declare type support functions


using _SrijithCustomString__ros_msg_type = my_msgs__msg__SrijithCustomString;

static bool _SrijithCustomString__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SrijithCustomString__ros_msg_type * ros_message = static_cast<const _SrijithCustomString__ros_msg_type *>(untyped_ros_message);
  // Field name: my_data
  {
    const rosidl_runtime_c__String * str = &ros_message->my_data;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SrijithCustomString__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SrijithCustomString__ros_msg_type * ros_message = static_cast<_SrijithCustomString__ros_msg_type *>(untyped_ros_message);
  // Field name: my_data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->my_data.data) {
      rosidl_runtime_c__String__init(&ros_message->my_data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->my_data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'my_data'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msgs
size_t get_serialized_size_my_msgs__msg__SrijithCustomString(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SrijithCustomString__ros_msg_type * ros_message = static_cast<const _SrijithCustomString__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name my_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->my_data.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SrijithCustomString__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_msgs__msg__SrijithCustomString(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_msgs
size_t max_serialized_size_my_msgs__msg__SrijithCustomString(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: my_data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SrijithCustomString__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_msgs__msg__SrijithCustomString(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SrijithCustomString = {
  "my_msgs::msg",
  "SrijithCustomString",
  _SrijithCustomString__cdr_serialize,
  _SrijithCustomString__cdr_deserialize,
  _SrijithCustomString__get_serialized_size,
  _SrijithCustomString__max_serialized_size
};

static rosidl_message_type_support_t _SrijithCustomString__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SrijithCustomString,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_msgs, msg, SrijithCustomString)() {
  return &_SrijithCustomString__type_support;
}

#if defined(__cplusplus)
}
#endif
