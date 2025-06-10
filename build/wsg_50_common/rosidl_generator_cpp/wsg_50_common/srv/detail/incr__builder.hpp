// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wsg_50_common:srv/Incr.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__INCR__BUILDER_HPP_
#define WSG_50_COMMON__SRV__DETAIL__INCR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wsg_50_common/srv/detail/incr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wsg_50_common
{

namespace srv
{

namespace builder
{

class Init_Incr_Request_increment
{
public:
  explicit Init_Incr_Request_increment(::wsg_50_common::srv::Incr_Request & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::srv::Incr_Request increment(::wsg_50_common::srv::Incr_Request::_increment_type arg)
  {
    msg_.increment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::srv::Incr_Request msg_;
};

class Init_Incr_Request_direction
{
public:
  Init_Incr_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Incr_Request_increment direction(::wsg_50_common::srv::Incr_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Incr_Request_increment(msg_);
  }

private:
  ::wsg_50_common::srv::Incr_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::srv::Incr_Request>()
{
  return wsg_50_common::srv::builder::Init_Incr_Request_direction();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace srv
{

namespace builder
{

class Init_Incr_Response_error
{
public:
  Init_Incr_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wsg_50_common::srv::Incr_Response error(::wsg_50_common::srv::Incr_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::srv::Incr_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::srv::Incr_Response>()
{
  return wsg_50_common::srv::builder::Init_Incr_Response_error();
}

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__SRV__DETAIL__INCR__BUILDER_HPP_
