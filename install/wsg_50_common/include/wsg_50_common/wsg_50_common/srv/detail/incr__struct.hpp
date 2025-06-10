// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wsg_50_common:srv/Incr.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__INCR__STRUCT_HPP_
#define WSG_50_COMMON__SRV__DETAIL__INCR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wsg_50_common__srv__Incr_Request __attribute__((deprecated))
#else
# define DEPRECATED__wsg_50_common__srv__Incr_Request __declspec(deprecated)
#endif

namespace wsg_50_common
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Incr_Request_
{
  using Type = Incr_Request_<ContainerAllocator>;

  explicit Incr_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->increment = 0.0f;
    }
  }

  explicit Incr_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->increment = 0.0f;
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _increment_type =
    float;
  _increment_type increment;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__increment(
    const float & _arg)
  {
    this->increment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wsg_50_common::srv::Incr_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const wsg_50_common::srv::Incr_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Incr_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Incr_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wsg_50_common__srv__Incr_Request
    std::shared_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wsg_50_common__srv__Incr_Request
    std::shared_ptr<wsg_50_common::srv::Incr_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Incr_Request_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->increment != other.increment) {
      return false;
    }
    return true;
  }
  bool operator!=(const Incr_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Incr_Request_

// alias to use template instance with default allocator
using Incr_Request =
  wsg_50_common::srv::Incr_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wsg_50_common


#ifndef _WIN32
# define DEPRECATED__wsg_50_common__srv__Incr_Response __attribute__((deprecated))
#else
# define DEPRECATED__wsg_50_common__srv__Incr_Response __declspec(deprecated)
#endif

namespace wsg_50_common
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Incr_Response_
{
  using Type = Incr_Response_<ContainerAllocator>;

  explicit Incr_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  explicit Incr_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    wsg_50_common::srv::Incr_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const wsg_50_common::srv::Incr_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Incr_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wsg_50_common::srv::Incr_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wsg_50_common__srv__Incr_Response
    std::shared_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wsg_50_common__srv__Incr_Response
    std::shared_ptr<wsg_50_common::srv::Incr_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Incr_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Incr_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Incr_Response_

// alias to use template instance with default allocator
using Incr_Response =
  wsg_50_common::srv::Incr_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wsg_50_common

namespace wsg_50_common
{

namespace srv
{

struct Incr
{
  using Request = wsg_50_common::srv::Incr_Request;
  using Response = wsg_50_common::srv::Incr_Response;
};

}  // namespace srv

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__SRV__DETAIL__INCR__STRUCT_HPP_
