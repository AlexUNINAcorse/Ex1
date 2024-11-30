// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice
#include "sysmonitor_interfaces/msg/detail/sysmon__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sysmonitor_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sysmonitor_interfaces/msg/detail/sysmon__struct.h"
#include "sysmonitor_interfaces/msg/detail/sysmon__functions.h"
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


// forward declare type support functions


using _Sysmon__ros_msg_type = sysmonitor_interfaces__msg__Sysmon;

static bool _Sysmon__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Sysmon__ros_msg_type * ros_message = static_cast<const _Sysmon__ros_msg_type *>(untyped_ros_message);
  // Field name: cpu_usage
  {
    cdr << ros_message->cpu_usage;
  }

  // Field name: cpu_temp
  {
    cdr << ros_message->cpu_temp;
  }

  // Field name: ram_usage
  {
    cdr << ros_message->ram_usage;
  }

  // Field name: gpu_usage
  {
    cdr << ros_message->gpu_usage;
  }

  // Field name: gpu_temp
  {
    cdr << ros_message->gpu_temp;
  }

  // Field name: gpuram_usage
  {
    cdr << ros_message->gpuram_usage;
  }

  return true;
}

static bool _Sysmon__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Sysmon__ros_msg_type * ros_message = static_cast<_Sysmon__ros_msg_type *>(untyped_ros_message);
  // Field name: cpu_usage
  {
    cdr >> ros_message->cpu_usage;
  }

  // Field name: cpu_temp
  {
    cdr >> ros_message->cpu_temp;
  }

  // Field name: ram_usage
  {
    cdr >> ros_message->ram_usage;
  }

  // Field name: gpu_usage
  {
    cdr >> ros_message->gpu_usage;
  }

  // Field name: gpu_temp
  {
    cdr >> ros_message->gpu_temp;
  }

  // Field name: gpuram_usage
  {
    cdr >> ros_message->gpuram_usage;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sysmonitor_interfaces
size_t get_serialized_size_sysmonitor_interfaces__msg__Sysmon(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Sysmon__ros_msg_type * ros_message = static_cast<const _Sysmon__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cpu_usage
  {
    size_t item_size = sizeof(ros_message->cpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_temp
  {
    size_t item_size = sizeof(ros_message->cpu_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ram_usage
  {
    size_t item_size = sizeof(ros_message->ram_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpu_usage
  {
    size_t item_size = sizeof(ros_message->gpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpu_temp
  {
    size_t item_size = sizeof(ros_message->gpu_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpuram_usage
  {
    size_t item_size = sizeof(ros_message->gpuram_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sysmon__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sysmonitor_interfaces__msg__Sysmon(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sysmonitor_interfaces
size_t max_serialized_size_sysmonitor_interfaces__msg__Sysmon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cpu_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cpu_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ram_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpu_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpu_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gpuram_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sysmonitor_interfaces__msg__Sysmon;
    is_plain =
      (
      offsetof(DataType, gpuram_usage) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Sysmon__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sysmonitor_interfaces__msg__Sysmon(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Sysmon = {
  "sysmonitor_interfaces::msg",
  "Sysmon",
  _Sysmon__cdr_serialize,
  _Sysmon__cdr_deserialize,
  _Sysmon__get_serialized_size,
  _Sysmon__max_serialized_size
};

static rosidl_message_type_support_t _Sysmon__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Sysmon,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sysmonitor_interfaces, msg, Sysmon)() {
  return &_Sysmon__type_support;
}

#if defined(__cplusplus)
}
#endif
