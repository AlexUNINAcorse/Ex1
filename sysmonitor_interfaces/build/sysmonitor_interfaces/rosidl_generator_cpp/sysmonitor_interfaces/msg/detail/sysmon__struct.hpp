// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sysmonitor_interfaces:msg/Sysmon.idl
// generated code does not contain a copyright notice

#ifndef SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__STRUCT_HPP_
#define SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sysmonitor_interfaces__msg__Sysmon __attribute__((deprecated))
#else
# define DEPRECATED__sysmonitor_interfaces__msg__Sysmon __declspec(deprecated)
#endif

namespace sysmonitor_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sysmon_
{
  using Type = Sysmon_<ContainerAllocator>;

  explicit Sysmon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->cpu_temp = 0.0;
      this->ram_usage = 0.0;
      this->gpu_usage = 0.0;
      this->gpu_temp = 0.0;
      this->gpuram_usage = 0.0;
    }
  }

  explicit Sysmon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->cpu_temp = 0.0;
      this->ram_usage = 0.0;
      this->gpu_usage = 0.0;
      this->gpu_temp = 0.0;
      this->gpuram_usage = 0.0;
    }
  }

  // field types and members
  using _cpu_usage_type =
    double;
  _cpu_usage_type cpu_usage;
  using _cpu_temp_type =
    double;
  _cpu_temp_type cpu_temp;
  using _ram_usage_type =
    double;
  _ram_usage_type ram_usage;
  using _gpu_usage_type =
    double;
  _gpu_usage_type gpu_usage;
  using _gpu_temp_type =
    double;
  _gpu_temp_type gpu_temp;
  using _gpuram_usage_type =
    double;
  _gpuram_usage_type gpuram_usage;

  // setters for named parameter idiom
  Type & set__cpu_usage(
    const double & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__cpu_temp(
    const double & _arg)
  {
    this->cpu_temp = _arg;
    return *this;
  }
  Type & set__ram_usage(
    const double & _arg)
  {
    this->ram_usage = _arg;
    return *this;
  }
  Type & set__gpu_usage(
    const double & _arg)
  {
    this->gpu_usage = _arg;
    return *this;
  }
  Type & set__gpu_temp(
    const double & _arg)
  {
    this->gpu_temp = _arg;
    return *this;
  }
  Type & set__gpuram_usage(
    const double & _arg)
  {
    this->gpuram_usage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator> *;
  using ConstRawPtr =
    const sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sysmonitor_interfaces__msg__Sysmon
    std::shared_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sysmonitor_interfaces__msg__Sysmon
    std::shared_ptr<sysmonitor_interfaces::msg::Sysmon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sysmon_ & other) const
  {
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->cpu_temp != other.cpu_temp) {
      return false;
    }
    if (this->ram_usage != other.ram_usage) {
      return false;
    }
    if (this->gpu_usage != other.gpu_usage) {
      return false;
    }
    if (this->gpu_temp != other.gpu_temp) {
      return false;
    }
    if (this->gpuram_usage != other.gpuram_usage) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sysmon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sysmon_

// alias to use template instance with default allocator
using Sysmon =
  sysmonitor_interfaces::msg::Sysmon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sysmonitor_interfaces

#endif  // SYSMONITOR_INTERFACES__MSG__DETAIL__SYSMON__STRUCT_HPP_
