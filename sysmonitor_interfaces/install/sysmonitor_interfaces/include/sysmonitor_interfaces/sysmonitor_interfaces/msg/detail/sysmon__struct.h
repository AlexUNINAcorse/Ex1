// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice

#ifndef SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__STRUCT_H_
#define SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Sysmon in the package sysmonitor_interfaces.
typedef struct sysmonitor_interfaces__msg__Sysmon
{
  double cpu_usage;
  double cpu_temp;
  double ram_usage;
  double gpu_usage;
  double gpu_temp;
  double gpuram_usage;
} sysmonitor_interfaces__msg__Sysmon;

// Struct for a sequence of sysmonitor_interfaces__msg__Sysmon.
typedef struct sysmonitor_interfaces__msg__Sysmon__Sequence
{
  sysmonitor_interfaces__msg__Sysmon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sysmonitor_interfaces__msg__Sysmon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__STRUCT_H_
