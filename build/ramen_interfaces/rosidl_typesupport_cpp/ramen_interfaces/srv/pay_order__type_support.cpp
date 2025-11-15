// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ramen_interfaces:srv/PayOrder.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ramen_interfaces/srv/detail/pay_order__functions.h"
#include "ramen_interfaces/srv/detail/pay_order__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ramen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayOrder_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayOrder_Request_type_support_ids_t;

static const _PayOrder_Request_type_support_ids_t _PayOrder_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayOrder_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayOrder_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayOrder_Request_type_support_symbol_names_t _PayOrder_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ramen_interfaces, srv, PayOrder_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ramen_interfaces, srv, PayOrder_Request)),
  }
};

typedef struct _PayOrder_Request_type_support_data_t
{
  void * data[2];
} _PayOrder_Request_type_support_data_t;

static _PayOrder_Request_type_support_data_t _PayOrder_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayOrder_Request_message_typesupport_map = {
  2,
  "ramen_interfaces",
  &_PayOrder_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PayOrder_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PayOrder_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayOrder_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayOrder_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ramen_interfaces__srv__PayOrder_Request__get_type_hash,
  &ramen_interfaces__srv__PayOrder_Request__get_type_description,
  &ramen_interfaces__srv__PayOrder_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ramen_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Request>()
{
  return &::ramen_interfaces::srv::rosidl_typesupport_cpp::PayOrder_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ramen_interfaces, srv, PayOrder_Request)() {
  return get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__functions.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ramen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayOrder_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayOrder_Response_type_support_ids_t;

static const _PayOrder_Response_type_support_ids_t _PayOrder_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayOrder_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayOrder_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayOrder_Response_type_support_symbol_names_t _PayOrder_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ramen_interfaces, srv, PayOrder_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ramen_interfaces, srv, PayOrder_Response)),
  }
};

typedef struct _PayOrder_Response_type_support_data_t
{
  void * data[2];
} _PayOrder_Response_type_support_data_t;

static _PayOrder_Response_type_support_data_t _PayOrder_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayOrder_Response_message_typesupport_map = {
  2,
  "ramen_interfaces",
  &_PayOrder_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PayOrder_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PayOrder_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayOrder_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayOrder_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ramen_interfaces__srv__PayOrder_Response__get_type_hash,
  &ramen_interfaces__srv__PayOrder_Response__get_type_description,
  &ramen_interfaces__srv__PayOrder_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ramen_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Response>()
{
  return &::ramen_interfaces::srv::rosidl_typesupport_cpp::PayOrder_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ramen_interfaces, srv, PayOrder_Response)() {
  return get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__functions.h"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ramen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayOrder_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayOrder_Event_type_support_ids_t;

static const _PayOrder_Event_type_support_ids_t _PayOrder_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayOrder_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayOrder_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayOrder_Event_type_support_symbol_names_t _PayOrder_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ramen_interfaces, srv, PayOrder_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ramen_interfaces, srv, PayOrder_Event)),
  }
};

typedef struct _PayOrder_Event_type_support_data_t
{
  void * data[2];
} _PayOrder_Event_type_support_data_t;

static _PayOrder_Event_type_support_data_t _PayOrder_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayOrder_Event_message_typesupport_map = {
  2,
  "ramen_interfaces",
  &_PayOrder_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PayOrder_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PayOrder_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayOrder_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayOrder_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ramen_interfaces__srv__PayOrder_Event__get_type_hash,
  &ramen_interfaces__srv__PayOrder_Event__get_type_description,
  &ramen_interfaces__srv__PayOrder_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ramen_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Event>()
{
  return &::ramen_interfaces::srv::rosidl_typesupport_cpp::PayOrder_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ramen_interfaces, srv, PayOrder_Event)() {
  return get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ramen_interfaces/srv/detail/pay_order__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ramen_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayOrder_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayOrder_type_support_ids_t;

static const _PayOrder_type_support_ids_t _PayOrder_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayOrder_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayOrder_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayOrder_type_support_symbol_names_t _PayOrder_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ramen_interfaces, srv, PayOrder)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ramen_interfaces, srv, PayOrder)),
  }
};

typedef struct _PayOrder_type_support_data_t
{
  void * data[2];
} _PayOrder_type_support_data_t;

static _PayOrder_type_support_data_t _PayOrder_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayOrder_service_typesupport_map = {
  2,
  "ramen_interfaces",
  &_PayOrder_service_typesupport_ids.typesupport_identifier[0],
  &_PayOrder_service_typesupport_symbol_names.symbol_name[0],
  &_PayOrder_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PayOrder_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayOrder_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ramen_interfaces::srv::PayOrder_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ramen_interfaces::srv::PayOrder>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ramen_interfaces::srv::PayOrder>,
  &ramen_interfaces__srv__PayOrder__get_type_hash,
  &ramen_interfaces__srv__PayOrder__get_type_description,
  &ramen_interfaces__srv__PayOrder__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ramen_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ramen_interfaces::srv::PayOrder>()
{
  return &::ramen_interfaces::srv::rosidl_typesupport_cpp::PayOrder_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ramen_interfaces, srv, PayOrder)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ramen_interfaces::srv::PayOrder>();
}

#ifdef __cplusplus
}
#endif
