// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wsg_50_common:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__MOVE__STRUCT_HPP_
#define WSG_50_COMMON__SRV__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wsg_50_common__srv__Move_Request __attribute__((deprecated))
#else
# define DEPRECATED__wsg_50_common__srv__Move_Request __declspec(deprecated)
#endif

namespace wsg_50_common
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Request_
{
  using Type = Move_Request_<ContainerAllocator>;

  explicit Move_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
      this->speed = 0.0f;
    }
  }

  explicit Move_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    float;
  _width_type width;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
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

  // constant declarations

  // pointer types
  using RawPtr =
    wsg_50_common::srv::Move_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const wsg_50_common::srv::Move_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Move_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Move_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wsg_50_common__srv__Move_Request
    std::shared_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wsg_50_common__srv__Move_Request
    std::shared_ptr<wsg_50_common::srv::Move_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Request_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Request_

// alias to use template instance with default allocator
using Move_Request =
  wsg_50_common::srv::Move_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wsg_50_common


#ifndef _WIN32
# define DEPRECATED__wsg_50_common__srv__Move_Response __attribute__((deprecated))
#else
# define DEPRECATED__wsg_50_common__srv__Move_Response __declspec(deprecated)
#endif

namespace wsg_50_common
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Move_Response_
{
  using Type = Move_Response_<ContainerAllocator>;

  explicit Move_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  explicit Move_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  // field types and members
  using _error_type =
    uint8_t;
  _error_type error;

  // setters for named parameter idiom
  Type & set__error(
    const uint8_t & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wsg_50_common::srv::Move_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const wsg_50_common::srv::Move_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Move_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Move_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wsg_50_common__srv__Move_Response
    std::shared_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wsg_50_common__srv__Move_Response
    std::shared_ptr<wsg_50_common::srv::Move_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_Response_

// alias to use template instance with default allocator
using Move_Response =
  wsg_50_common::srv::Move_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wsg_50_common

namespace wsg_50_common
{

namespace srv
{

struct Move
{
  using Request = wsg_50_common::srv::Move_Request;
  using Response = wsg_50_common::srv::Move_Response;
};

}  // namespace srv

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__SRV__DETAIL__MOVE__STRUCT_HPP_
