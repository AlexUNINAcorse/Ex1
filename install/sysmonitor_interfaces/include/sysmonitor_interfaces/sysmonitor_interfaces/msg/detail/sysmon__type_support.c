// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sysmonitor_interfaces/msg/detail/sysmon__rosidl_typesupport_introspection_c.h"
#include "sysmonitor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sysmonitor_interfaces/msg/detail/sysmon__functions.h"
#include "sysmonitor_interfaces/msg/detail/sysmon__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sysmonitor_interfaces__msg__Sysmon__init(message_memory);
}

void sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_fini_function(void * message_memory)
{
  sysmonitor_interfaces__msg__Sysmon__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_member_array[6] = {
  {
    "cpu_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sysmonitor_interfaces__msg__Sysmon, cpu_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sysmonitor_interfaces__msg__Sysmon, cpu_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ram_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sysmonitor_interfaces__msg__Sysmon, ram_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpu_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sysmonitor_interfaces__msg__Sysmon, gpu_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpu_temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sysmonitor_interfaces__msg__Sysmon, gpu_temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpuram_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sysmonitor_interfaces__msg__Sysmon, gpuram_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_members = {
  "sysmonitor_interfaces__msg",  // message namespace
  "Sysmon",  // message name
  6,  // number of fields
  sizeof(sysmonitor_interfaces__msg__Sysmon),
  sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_member_array,  // message members
  sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_init_function,  // function to initialize message memory (memory has to be allocated)
  sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_type_support_handle = {
  0,
  &sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sysmonitor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sysmonitor_interfaces, msg, Sysmon)() {
  if (!sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_type_support_handle.typesupport_identifier) {
    sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sysmonitor_interfaces__msg__Sysmon__rosidl_typesupport_introspection_c__Sysmon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
