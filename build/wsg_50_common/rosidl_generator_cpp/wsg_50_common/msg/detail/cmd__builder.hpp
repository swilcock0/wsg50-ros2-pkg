// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__CMD__BUILDER_HPP_
#define WSG_50_COMMON__MSG__DETAIL__CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wsg_50_common/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wsg_50_common
{

namespace msg
{

namespace builder
{

class Init_Cmd_speed
{
public:
  explicit Init_Cmd_speed(::wsg_50_common::msg::Cmd & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::msg::Cmd speed(::wsg_50_common::msg::Cmd::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::msg::Cmd msg_;
};

class Init_Cmd_pos
{
public:
  explicit Init_Cmd_pos(::wsg_50_common::msg::Cmd & msg)
  : msg_(msg)
  {}
  Init_Cmd_speed pos(::wsg_50_common::msg::Cmd::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_Cmd_speed(msg_);
  }

private:
  ::wsg_50_common::msg::Cmd msg_;
};

class Init_Cmd_mode
{
public:
  Init_Cmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cmd_pos mode(::wsg_50_common::msg::Cmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Cmd_pos(msg_);
  }

private:
  ::wsg_50_common::msg::Cmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::msg::Cmd>()
{
  return wsg_50_common::msg::builder::Init_Cmd_mode();
}

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__MSG__DETAIL__CMD__BUILDER_HPP_
