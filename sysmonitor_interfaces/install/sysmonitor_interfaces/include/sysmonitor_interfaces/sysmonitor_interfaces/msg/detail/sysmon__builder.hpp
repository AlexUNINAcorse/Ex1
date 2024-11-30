// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice

#ifndef SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__BUILDER_HPP_
#define SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sysmonitor_interfaces/msg/detail/sysmon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sysmonitor_interfaces
{

namespace msg
{

namespace builder
{

class Init_Sysmon_gpuram_usage
{
public:
  explicit Init_Sysmon_gpuram_usage(::sysmonitor_interfaces::msg::Sysmon & msg)
  : msg_(msg)
  {}
  ::sysmonitor_interfaces::msg::Sysmon gpuram_usage(::sysmonitor_interfaces::msg::Sysmon::_gpuram_usage_type arg)
  {
    msg_.gpuram_usage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sysmonitor_interfaces::msg::Sysmon msg_;
};

class Init_Sysmon_gpu_temp
{
public:
  explicit Init_Sysmon_gpu_temp(::sysmonitor_interfaces::msg::Sysmon & msg)
  : msg_(msg)
  {}
  Init_Sysmon_gpuram_usage gpu_temp(::sysmonitor_interfaces::msg::Sysmon::_gpu_temp_type arg)
  {
    msg_.gpu_temp = std::move(arg);
    return Init_Sysmon_gpuram_usage(msg_);
  }

private:
  ::sysmonitor_interfaces::msg::Sysmon msg_;
};

class Init_Sysmon_gpu_usage
{
public:
  explicit Init_Sysmon_gpu_usage(::sysmonitor_interfaces::msg::Sysmon & msg)
  : msg_(msg)
  {}
  Init_Sysmon_gpu_temp gpu_usage(::sysmonitor_interfaces::msg::Sysmon::_gpu_usage_type arg)
  {
    msg_.gpu_usage = std::move(arg);
    return Init_Sysmon_gpu_temp(msg_);
  }

private:
  ::sysmonitor_interfaces::msg::Sysmon msg_;
};

class Init_Sysmon_ram_usage
{
public:
  explicit Init_Sysmon_ram_usage(::sysmonitor_interfaces::msg::Sysmon & msg)
  : msg_(msg)
  {}
  Init_Sysmon_gpu_usage ram_usage(::sysmonitor_interfaces::msg::Sysmon::_ram_usage_type arg)
  {
    msg_.ram_usage = std::move(arg);
    return Init_Sysmon_gpu_usage(msg_);
  }

private:
  ::sysmonitor_interfaces::msg::Sysmon msg_;
};

class Init_Sysmon_cpu_temp
{
public:
  explicit Init_Sysmon_cpu_temp(::sysmonitor_interfaces::msg::Sysmon & msg)
  : msg_(msg)
  {}
  Init_Sysmon_ram_usage cpu_temp(::sysmonitor_interfaces::msg::Sysmon::_cpu_temp_type arg)
  {
    msg_.cpu_temp = std::move(arg);
    return Init_Sysmon_ram_usage(msg_);
  }

private:
  ::sysmonitor_interfaces::msg::Sysmon msg_;
};

class Init_Sysmon_cpu_usage
{
public:
  Init_Sysmon_cpu_usage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sysmon_cpu_temp cpu_usage(::sysmonitor_interfaces::msg::Sysmon::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_Sysmon_cpu_temp(msg_);
  }

private:
  ::sysmonitor_interfaces::msg::Sysmon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sysmonitor_interfaces::msg::Sysmon>()
{
  return sysmonitor_interfaces::msg::builder::Init_Sysmon_cpu_usage();
}

}  // namespace sysmonitor_interfaces

#endif  // SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__BUILDER_HPP_
