// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wsg_50_common:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__STATUS__BUILDER_HPP_
#define WSG_50_COMMON__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wsg_50_common/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wsg_50_common
{

namespace msg
{

namespace builder
{

class Init_Status_force_finger1
{
public:
  explicit Init_Status_force_finger1(::wsg_50_common::msg::Status & msg)
  : msg_(msg)
  {}
  ::wsg_50_common::msg::Status force_finger1(::wsg_50_common::msg::Status::_force_finger1_type arg)
  {
    msg_.force_finger1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

class Init_Status_force_finger0
{
public:
  explicit Init_Status_force_finger0(::wsg_50_common::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_force_finger1 force_finger0(::wsg_50_common::msg::Status::_force_finger0_type arg)
  {
    msg_.force_finger0 = std::move(arg);
    return Init_Status_force_finger1(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

class Init_Status_force
{
public:
  explicit Init_Status_force(::wsg_50_common::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_force_finger0 force(::wsg_50_common::msg::Status::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_Status_force_finger0(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

class Init_Status_acc
{
public:
  explicit Init_Status_acc(::wsg_50_common::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_force acc(::wsg_50_common::msg::Status::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_Status_force(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

class Init_Status_speed
{
public:
  explicit Init_Status_speed(::wsg_50_common::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_acc speed(::wsg_50_common::msg::Status::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Status_acc(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

class Init_Status_width
{
public:
  explicit Init_Status_width(::wsg_50_common::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_speed width(::wsg_50_common::msg::Status::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Status_speed(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

class Init_Status_object_grasped
{
public:
  explicit Init_Status_object_grasped(::wsg_50_common::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_width object_grasped(::wsg_50_common::msg::Status::_object_grasped_type arg)
  {
    msg_.object_grasped = std::move(arg);
    return Init_Status_width(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

class Init_Status_status
{
public:
  Init_Status_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_object_grasped status(::wsg_50_common::msg::Status::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Status_object_grasped(msg_);
  }

private:
  ::wsg_50_common::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::msg::Status>()
{
  return wsg_50_common::msg::builder::Init_Status_status();
}

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__MSG__DETAIL__STATUS__BUILDER_HPP_
