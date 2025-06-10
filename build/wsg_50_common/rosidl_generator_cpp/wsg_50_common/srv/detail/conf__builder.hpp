// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wsg_50_common:srv/Conf.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__CONF__BUILDER_HPP_
#define WSG_50_COMMON__SRV__DETAIL__CONF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wsg_50_common/srv/detail/conf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wsg_50_common
{

namespace srv
{

namespace builder
{

class Init_Conf_Request_val
{
public:
  Init_Conf_Request_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wsg_50_common::srv::Conf_Request val(::wsg_50_common::srv::Conf_Request::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::srv::Conf_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::srv::Conf_Request>()
{
  return wsg_50_common::srv::builder::Init_Conf_Request_val();
}

}  // namespace wsg_50_common


namespace wsg_50_common
{

namespace srv
{

namespace builder
{

class Init_Conf_Response_error
{
public:
  Init_Conf_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::wsg_50_common::srv::Conf_Response error(::wsg_50_common::srv::Conf_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wsg_50_common::srv::Conf_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::wsg_50_common::srv::Conf_Response>()
{
  return wsg_50_common::srv::builder::Init_Conf_Response_error();
}

}  // namespace wsg_50_common

#endif  // WSG_50_COMMON__SRV__DETAIL__CONF__BUILDER_HPP_
