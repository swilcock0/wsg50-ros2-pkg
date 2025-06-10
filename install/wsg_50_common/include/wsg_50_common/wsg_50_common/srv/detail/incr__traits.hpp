// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wsg_50_common:srv/Incr.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__SRV__DETAIL__INCR__TRAITS_HPP_
#define WSG_50_COMMON__SRV__DETAIL__INCR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wsg_50_common/srv/detail/incr__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wsg_50_common
{

namespace srv
{

inline void to_flow_style_yaml(
  const Incr_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: increment
  {
    out << "increment: ";
    rosidl_generator_traits::value_to_yaml(msg.increment, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Incr_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: increment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "increment: ";
    rosidl_generator_traits::value_to_yaml(msg.increment, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Incr_Request & msg, bool use_flow_style = false)
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
  const wsg_50_common::srv::Incr_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  wsg_50_common::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wsg_50_common::srv::to_yaml() instead")]]
inline std::string to_yaml(const wsg_50_common::srv::Incr_Request & msg)
{
  return wsg_50_common::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wsg_50_common::srv::Incr_Request>()
{
  return "wsg_50_common::srv::Incr_Request";
}

template<>
inline const char * name<wsg_50_common::srv::Incr_Request>()
{
  return "wsg_50_common/srv/Incr_Request";
}

template<>
struct has_fixed_size<wsg_50_common::srv::Incr_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wsg_50_common::srv::Incr_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wsg_50_common::srv::Incr_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace wsg_50_common
{

namespace srv
{

inline void to_flow_style_yaml(
  const Incr_Response & msg,
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
  const Incr_Response & msg,
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

inline std::string to_yaml(const Incr_Response & msg, bool use_flow_style = false)
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
  const wsg_50_common::srv::Incr_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  wsg_50_common::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wsg_50_common::srv::to_yaml() instead")]]
inline std::string to_yaml(const wsg_50_common::srv::Incr_Response & msg)
{
  return wsg_50_common::srv::to_yaml(msg);
}

template<>
inline const char * data_type<wsg_50_common::srv::Incr_Response>()
{
  return "wsg_50_common::srv::Incr_Response";
}

template<>
inline const char * name<wsg_50_common::srv::Incr_Response>()
{
  return "wsg_50_common/srv/Incr_Response";
}

template<>
struct has_fixed_size<wsg_50_common::srv::Incr_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wsg_50_common::srv::Incr_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wsg_50_common::srv::Incr_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<wsg_50_common::srv::Incr>()
{
  return "wsg_50_common::srv::Incr";
}

template<>
inline const char * name<wsg_50_common::srv::Incr>()
{
  return "wsg_50_common/srv/Incr";
}

template<>
struct has_fixed_size<wsg_50_common::srv::Incr>
  : std::integral_constant<
    bool,
    has_fixed_size<wsg_50_common::srv::Incr_Request>::value &&
    has_fixed_size<wsg_50_common::srv::Incr_Response>::value
  >
{
};

template<>
struct has_bounded_size<wsg_50_common::srv::Incr>
  : std::integral_constant<
    bool,
    has_bounded_size<wsg_50_common::srv::Incr_Request>::value &&
    has_bounded_size<wsg_50_common::srv::Incr_Response>::value
  >
{
};

template<>
struct is_service<wsg_50_common::srv::Incr>
  : std::true_type
{
};

template<>
struct is_service_request<wsg_50_common::srv::Incr_Request>
  : std::true_type
{
};

template<>
struct is_service_response<wsg_50_common::srv::Incr_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // WSG_50_COMMON__SRV__DETAIL__INCR__TRAITS_HPP_
