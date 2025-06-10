// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wsg_50_common:srv/Move.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__MOVE__BUILDER_HPP_
#define WSG_50_COMMON__SRV__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wsg_50_common/srv/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wsg_50_common
{

namespace srv
{

namespace builder
{

class Init_Move_Request_speed
{
public:
  explicit Init_Move_Request_speed(::wsg_50_common::srv::Move_Request & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::srv::Move_Request speed(::wsg_50_common::srv::Move_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::srv::Move_Request msg_;
};

class Init_Move_Request_width
{
public:
  Init_Move_Request_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Request_speed width(::wsg_50_common::srv::Move_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Move_Request_speed(msg_);
  }

private:
  ::wsg_50_common::srv::Move_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::srv::Move_Request>()
{
  return wsg_50_common::srv::builder::Init_Move_Request_width();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace srv
{

namespace builder
{

class Init_Move_Response_error
{
public:
  Init_Move_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wsg_50_common::srv::Move_Response error(::wsg_50_common::srv::Move_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::srv::Move_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::srv::Move_Response>()
{
  return wsg_50_common::srv::builder::Init_Move_Response_error();
}

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__SRV__DETAIL__MOVE__BUILDER_HPP_
