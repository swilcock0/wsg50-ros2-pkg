// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__CMD__TRAITS_HPP_
#define WSG_50_COMMON__MSG__DETAIL__CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wsg_50_common/msg/detail/cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wsg_50_common
{

namespace msg
{

inline void to_flow_style_yaml(
  const Cmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wsg_50_common

namespace rosidl_generator_traits
{

[[deprecated("use wsg_50_common::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wsg_50_common::msg::Cmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  wsg_50_common::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wsg_50_common::msg::to_yaml() instead")]]
inline std::string to_yaml(const wsg_50_common::msg::Cmd & msg)
{
  return wsg_50_common::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wsg_50_common::msg::Cmd>()
{
  return "wsg_50_common::msg::Cmd";
}

template<>
inline const char * name<wsg_50_common::msg::Cmd>()
{
  return "wsg_50_common/msg/Cmd";
}

template<>
struct has_fixed_size<wsg_50_common::msg::Cmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wsg_50_common::msg::Cmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wsg_50_common::msg::Cmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WSG_50_COMMON__MSG__DETAIL__CMD__TRAITS_HPP_
