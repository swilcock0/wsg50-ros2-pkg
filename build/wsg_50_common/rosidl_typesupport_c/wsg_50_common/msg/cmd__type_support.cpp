// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from wsg_50_common:msg/Cmd.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "wsg_50_common/msg/detail/cmd__struct.h"
#include "wsg_50_common/msg/detail/cmd__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace wsg_50_common
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Cmd_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Cmd_type_support_ids_t;

static const _Cmd_type_support_ids_t _Cmd_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Cmd_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Cmd_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Cmd_type_support_symbol_names_t _Cmd_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wsg_50_common, msg, Cmd)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, msg, Cmd)),
  }
};

typedef struct _Cmd_type_support_data_t
{
  void * data[2];
} _Cmd_type_support_data_t;

static _Cmd_type_support_data_t _Cmd_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Cmd_message_typesupport_map = {
  2,
  "wsg_50_common",
  &_Cmd_message_typesupport_ids.typesupport_identifier[0],
  &_Cmd_message_typesupport_symbol_names.symbol_name[0],
  &_Cmd_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Cmd_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Cmd_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace wsg_50_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, wsg_50_common, msg, Cmd)() {
  return &::wsg_50_common::msg::rosidl_typesupport_c::Cmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
