// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice

#ifndef SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__TRAITS_HPP_
#define SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sysmonitor_interfaces/msg/detail/sysmon__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sysmonitor_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Sysmon & msg,
  std::ostream & out)
{
  out << "{";
  // member: cpu_usage
  {
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << ", ";
  }

  // member: cpu_temp
  {
    out << "cpu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temp, out);
    out << ", ";
  }

  // member: ram_usage
  {
    out << "ram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_usage, out);
    out << ", ";
  }

  // member: gpu_usage
  {
    out << "gpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu_usage, out);
    out << ", ";
  }

  // member: gpu_temp
  {
    out << "gpu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu_temp, out);
    out << ", ";
  }

  // member: gpuram_usage
  {
    out << "gpuram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.gpuram_usage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Sysmon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << "\n";
  }

  // member: cpu_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_temp, out);
    out << "\n";
  }

  // member: ram_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_usage, out);
    out << "\n";
  }

  // member: gpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu_usage, out);
    out << "\n";
  }

  // member: gpu_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpu_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.gpu_temp, out);
    out << "\n";
  }

  // member: gpuram_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpuram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.gpuram_usage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Sysmon & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sysmonitor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sysmonitor_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sysmonitor_interfaces::msg::Sysmon & msg,
  std::ostream & out, size_t indentation = 0)
{
  sysmonitor_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sysmonitor_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sysmonitor_interfaces::msg::Sysmon & msg)
{
  return sysmonitor_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sysmonitor_interfaces::msg::Sysmon>()
{
  return "sysmonitor_interfaces::msg::Sysmon";
}

template<>
inline const char * name<sysmonitor_interfaces::msg::Sysmon>()
{
  return "sysmonitor_interfaces/msg/Sysmon";
}

template<>
struct has_fixed_size<sysmonitor_interfaces::msg::Sysmon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sysmonitor_interfaces::msg::Sysmon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sysmonitor_interfaces::msg::Sysmon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__TRAITS_HPP_
