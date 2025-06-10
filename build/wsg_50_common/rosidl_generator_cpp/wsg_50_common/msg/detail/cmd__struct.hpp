// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__CMD__STRUCT_HPP_
#define WSG_50_COMMON__MSG__DETAIL__CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wsg_50_common__msg__Cmd __attribute__((deprecated))
#else
# define DEPRECATED__wsg_50_common__msg__Cmd __declspec(deprecated)
#endif

namespace wsg_50_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cmd_
{
  using Type = Cmd_<ContainerAllocator>;

  explicit Cmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->pos = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit Cmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->pos = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _pos_type =
    float;
  _pos_type pos;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__pos(
    const float & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wsg_50_common::msg::Cmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const wsg_50_common::msg::Cmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::msg::Cmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::msg::Cmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wsg_50_common__msg__Cmd
    std::shared_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wsg_50_common__msg__Cmd
    std::shared_ptr<wsg_50_common::msg::Cmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cmd_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cmd_

// alias to use template instance with default allocator
using Cmd =
  wsg_50_common::msg::Cmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__MSG__DETAIL__CMD__STRUCT_HPP_
