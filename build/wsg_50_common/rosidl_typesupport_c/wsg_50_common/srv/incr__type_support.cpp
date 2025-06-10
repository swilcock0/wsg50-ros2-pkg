// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from wsg_50_common:srv/Incr.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "wsg_50_common/srv/detail/incr__struct.h"
#include "wsg_50_common/srv/detail/incr__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace wsg_50_common
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Incr_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Incr_Request_type_support_ids_t;

static const _Incr_Request_type_support_ids_t _Incr_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Incr_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Incr_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Incr_Request_type_support_symbol_names_t _Incr_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wsg_50_common, srv, Incr_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Incr_Request)),
  }
};

typedef struct _Incr_Request_type_support_data_t
{
  void * data[2];
} _Incr_Request_type_support_data_t;

static _Incr_Request_type_support_data_t _Incr_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Incr_Request_message_typesupport_map = {
  2,
  "wsg_50_common",
  &_Incr_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Incr_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Incr_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Incr_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Incr_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace wsg_50_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, wsg_50_common, srv, Incr_Request)() {
  return &::wsg_50_common::srv::rosidl_typesupport_c::Incr_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "wsg_50_common/srv/detail/incr__struct.h"
// already included above
// #include "wsg_50_common/srv/detail/incr__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace wsg_50_common
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Incr_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Incr_Response_type_support_ids_t;

static const _Incr_Response_type_support_ids_t _Incr_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Incr_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Incr_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Incr_Response_type_support_symbol_names_t _Incr_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wsg_50_common, srv, Incr_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Incr_Response)),
  }
};

typedef struct _Incr_Response_type_support_data_t
{
  void * data[2];
} _Incr_Response_type_support_data_t;

static _Incr_Response_type_support_data_t _Incr_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Incr_Response_message_typesupport_map = {
  2,
  "wsg_50_common",
  &_Incr_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Incr_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Incr_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Incr_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Incr_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace wsg_50_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, wsg_50_common, srv, Incr_Response)() {
  return &::wsg_50_common::srv::rosidl_typesupport_c::Incr_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "wsg_50_common/srv/detail/incr__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace wsg_50_common
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Incr_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Incr_type_support_ids_t;

static const _Incr_type_support_ids_t _Incr_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Incr_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Incr_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Incr_type_support_symbol_names_t _Incr_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wsg_50_common, srv, Incr)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wsg_50_common, srv, Incr)),
  }
};

typedef struct _Incr_type_support_data_t
{
  void * data[2];
} _Incr_type_support_data_t;

static _Incr_type_support_data_t _Incr_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Incr_service_typesupport_map = {
  2,
  "wsg_50_common",
  &_Incr_service_typesupport_ids.typesupport_identifier[0],
  &_Incr_service_typesupport_symbol_names.symbol_name[0],
  &_Incr_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Incr_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Incr_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace wsg_50_common

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, wsg_50_common, srv, Incr)() {
  return &::wsg_50_common::srv::rosidl_typesupport_c::Incr_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
