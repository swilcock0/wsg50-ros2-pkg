// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wsg_50_common:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__STATUS__STRUCT_HPP_
#define WSG_50_COMMON__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wsg_50_common__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__wsg_50_common__msg__Status __declspec(deprecated)
#endif

namespace wsg_50_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->object_grasped = false;
      this->width = 0.0f;
      this->speed = 0.0f;
      this->acc = 0.0f;
      this->force = 0.0f;
      this->force_finger0 = 0.0f;
      this->force_finger1 = 0.0f;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->object_grasped = false;
      this->width = 0.0f;
      this->speed = 0.0f;
      this->acc = 0.0f;
      this->force = 0.0f;
      this->force_finger0 = 0.0f;
      this->force_finger1 = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _object_grasped_type =
    bool;
  _object_grasped_type object_grasped;
  using _width_type =
    float;
  _width_type width;
  using _speed_type =
    float;
  _speed_type speed;
  using _acc_type =
    float;
  _acc_type acc;
  using _force_type =
    float;
  _force_type force;
  using _force_finger0_type =
    float;
  _force_finger0_type force_finger0;
  using _force_finger1_type =
    float;
  _force_finger1_type force_finger1;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__object_grasped(
    const bool & _arg)
  {
    this->object_grasped = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acc(
    const float & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__force(
    const float & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__force_finger0(
    const float & _arg)
  {
    this->force_finger0 = _arg;
    return *this;
  }
  Type & set__force_finger1(
    const float & _arg)
  {
    this->force_finger1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wsg_50_common::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const wsg_50_common::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wsg_50_common::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wsg_50_common::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wsg_50_common::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wsg_50_common::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wsg_50_common__msg__Status
    std::shared_ptr<wsg_50_common::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wsg_50_common__msg__Status
    std::shared_ptr<wsg_50_common::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->object_grasped != other.object_grasped) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->force_finger0 != other.force_finger0) {
      return false;
    }
    if (this->force_finger1 != other.force_finger1) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  wsg_50_common::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__MSG__DETAIL__STATUS__STRUCT_HPP_
