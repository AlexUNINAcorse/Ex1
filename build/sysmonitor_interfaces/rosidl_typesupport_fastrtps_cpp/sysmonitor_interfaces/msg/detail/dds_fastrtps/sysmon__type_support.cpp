// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice
#include "sysmonitor_interfaces/msg/detail/sysmon__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sysmonitor_interfaces/msg/detail/sysmon__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sysmonitor_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sysmonitor_interfaces
cdr_serialize(
  const sysmonitor_interfaces::msg::Sysmon & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cpu_usage
  cdr << ros_message.cpu_usage;
  // Member: cpu_temp
  cdr << ros_message.cpu_temp;
  // Member: ram_usage
  cdr << ros_message.ram_usage;
  // Member: gpu_usage
  cdr << ros_message.gpu_usage;
  // Member: gpu_temp
  cdr << ros_message.gpu_temp;
  // Member: gpuram_usage
  cdr << ros_message.gpuram_usage;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sysmonitor_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sysmonitor_interfaces::msg::Sysmon & ros_message)
{
  // Member: cpu_usage
  cdr >> ros_message.cpu_usage;

  // Member: cpu_temp
  cdr >> ros_message.cpu_temp;

  // Member: ram_usage
  cdr >> ros_message.ram_usage;

  // Member: gpu_usage
  cdr >> ros_message.gpu_usage;

  // Member: gpu_temp
  cdr >> ros_message.gpu_temp;

  // Member: gpuram_usage
  cdr >> ros_message.gpuram_usage;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sysmonitor_interfaces
get_serialized_size(
  const sysmonitor_interfaces::msg::Sysmon & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cpu_usage
  {
    size_t item_size = sizeof(ros_message.cpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cpu_temp
  {
    size_t item_size = sizeof(ros_message.cpu_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ram_usage
  {
    size_t item_size = sizeof(ros_message.ram_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gpu_usage
  {
    size_t item_size = sizeof(ros_message.gpu_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gpu_temp
  {
    size_t item_size = sizeof(ros_message.gpu_temp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gpuram_usage
  {
    size_t item_size = sizeof(ros_message.gpuram_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sysmonitor_interfaces
max_serialized_size_Sysmon(
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


  // Member: cpu_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cpu_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ram_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gpu_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gpu_temp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gpuram_usage
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
    using DataType = sysmonitor_interfaces::msg::Sysmon;
    is_plain =
      (
      offsetof(DataType, gpuram_usage) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Sysmon__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sysmonitor_interfaces::msg::Sysmon *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sysmon__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sysmonitor_interfaces::msg::Sysmon *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sysmon__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sysmonitor_interfaces::msg::Sysmon *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sysmon__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Sysmon(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Sysmon__callbacks = {
  "sysmonitor_interfaces::msg",
  "Sysmon",
  _Sysmon__cdr_serialize,
  _Sysmon__cdr_deserialize,
  _Sysmon__get_serialized_size,
  _Sysmon__max_serialized_size
};

static rosidl_message_type_support_t _Sysmon__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Sysmon__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sysmonitor_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sysmonitor_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sysmonitor_interfaces::msg::Sysmon>()
{
  return &sysmonitor_interfaces::msg::typesupport_fastrtps_cpp::_Sysmon__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sysmonitor_interfaces, msg, Sysmon)() {
  return &sysmonitor_interfaces::msg::typesupport_fastrtps_cpp::_Sysmon__handle;
}

#ifdef __cplusplus
}
#endif
