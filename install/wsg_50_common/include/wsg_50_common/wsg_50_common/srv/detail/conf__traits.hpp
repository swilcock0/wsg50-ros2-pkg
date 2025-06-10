// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wsg_50_common:srv/Conf.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__CONF__TRAITS_HPP_
#define WSG_50_COMMON__SRV__DETAIL__CONF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wsg_50_common/srv/detail/conf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wsg_50_common
{

namespace srv
{

inline void to_flow_style_yaml(
  const Conf_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Conf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Conf_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wsg_50_common

namespace rosidl_generator_traits
{

[[deprecated("use wsg_50_common::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wsg_50_common::srv::Conf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wsg_50_common::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wsg_50_common::srv::to_yaml() instead")]]
inline std::string to_yaml(const wsg_50_common::srv::Conf_Request & msg)
{
  return wsg_50_common::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wsg_50_common::srv::Conf_Request>()
{
  return "wsg_50_common::srv::Conf_Request";
}

template<>
inline const char * name<wsg_50_common::srv::Conf_Request>()
{
  return "wsg_50_common/srv/Conf_Request";
}

template<>
struct has_fixed_size<wsg_50_common::srv::Conf_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wsg_50_common::srv::Conf_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wsg_50_common::srv::Conf_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wsg_50_common
{

namespace srv
{

inline void to_flow_style_yaml(
  const Conf_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Conf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Conf_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace wsg_50_common

namespace rosidl_generator_traits
{

[[deprecated("use wsg_50_common::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wsg_50_common::srv::Conf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wsg_50_common::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wsg_50_common::srv::to_yaml() instead")]]
inline std::string to_yaml(const wsg_50_common::srv::Conf_Response & msg)
{
  return wsg_50_common::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wsg_50_common::srv::Conf_Response>()
{
  return "wsg_50_common::srv::Conf_Response";
}

template<>
inline const char * name<wsg_50_common::srv::Conf_Response>()
{
  return "wsg_50_common/srv/Conf_Response";
}

template<>
struct has_fixed_size<wsg_50_common::srv::Conf_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wsg_50_common::srv::Conf_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wsg_50_common::srv::Conf_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wsg_50_common::srv::Conf>()
{
  return "wsg_50_common::srv::Conf";
}

template<>
inline const char * name<wsg_50_common::srv::Conf>()
{
  return "wsg_50_common/srv/Conf";
}

template<>
struct has_fixed_size<wsg_50_common::srv::Conf>
  : std::integral_constant<
    bool,
    has_fixed_size<wsg_50_common::srv::Conf_Request>::value &&
    has_fixed_size<wsg_50_common::srv::Conf_Response>::value
  >
{
};

template<>
struct has_bounded_size<wsg_50_common::srv::Conf>
  : std::integral_constant<
    bool,
    has_bounded_size<wsg_50_common::srv::Conf_Request>::value &&
    has_bounded_size<wsg_50_common::srv::Conf_Response>::value
  >
{
};

template<>
struct is_service<wsg_50_common::srv::Conf>
  : std::true_type
{
};

template<>
struct is_service_request<wsg_50_common::srv::Conf_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wsg_50_common::srv::Conf_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WSG_50_COMMON__SRV__DETAIL__CONF__TRAITS_HPP_
