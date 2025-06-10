// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wsg_50_common:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WSG_50_COMMON__MSG__DETAIL__STATUS__TRAITS_HPP_
#define WSG_50_COMMON__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wsg_50_common/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wsg_50_common
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: object_grasped
  {
    out << "object_grasped: ";
    rosidl_generator_traits::value_to_yaml(msg.object_grasped, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << ", ";
  }

  // member: force_finger0
  {
    out << "force_finger0: ";
    rosidl_generator_traits::value_to_yaml(msg.force_finger0, out);
    out << ", ";
  }

  // member: force_finger1
  {
    out << "force_finger1: ";
    rosidl_generator_traits::value_to_yaml(msg.force_finger1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: object_grasped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_grasped: ";
    rosidl_generator_traits::value_to_yaml(msg.object_grasped, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
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

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }

  // member: force_finger0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_finger0: ";
    rosidl_generator_traits::value_to_yaml(msg.force_finger0, out);
    out << "\n";
  }

  // member: force_finger1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_finger1: ";
    rosidl_generator_traits::value_to_yaml(msg.force_finger1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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
  const wsg_50_common::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  wsg_50_common::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wsg_50_common::msg::to_yaml() instead")]]
inline std::string to_yaml(const wsg_50_common::msg::Status & msg)
{
  return wsg_50_common::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wsg_50_common::msg::Status>()
{
  return "wsg_50_common::msg::Status";
}

template<>
inline const char * name<wsg_50_common::msg::Status>()
{
  return "wsg_50_common/msg/Status";
}

template<>
struct has_fixed_size<wsg_50_common::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wsg_50_common::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wsg_50_common::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WSG_50_COMMON__MSG__DETAIL__STATUS__TRAITS_HPP_
