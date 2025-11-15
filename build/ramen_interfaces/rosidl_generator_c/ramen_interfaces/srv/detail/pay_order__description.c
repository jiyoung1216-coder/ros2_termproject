// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ramen_interfaces:srv/PayOrder.idl
// generated code does not contain a copyright notice

#include "ramen_interfaces/srv/detail/pay_order__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ramen_interfaces
const rosidl_type_hash_t *
ramen_interfaces__srv__PayOrder__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x13, 0xa6, 0x81, 0x91, 0x46, 0x71, 0xa0,
      0x36, 0xf9, 0xa5, 0x13, 0x7e, 0x9c, 0xcf, 0x1d,
      0x62, 0xb2, 0xf8, 0xf6, 0xd6, 0xd5, 0x03, 0x1e,
      0x21, 0xf7, 0xea, 0x18, 0x3f, 0x33, 0xf1, 0xf2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ramen_interfaces
const rosidl_type_hash_t *
ramen_interfaces__srv__PayOrder_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x88, 0x3a, 0x4b, 0xbc, 0x2e, 0x3a, 0x3d,
      0x08, 0xb0, 0xf4, 0x20, 0x5a, 0x04, 0xf2, 0xa8,
      0xdd, 0x3b, 0xec, 0x47, 0x4b, 0xfd, 0xf2, 0x14,
      0x0e, 0x76, 0xc7, 0x81, 0xf6, 0x54, 0x8e, 0x1a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ramen_interfaces
const rosidl_type_hash_t *
ramen_interfaces__srv__PayOrder_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6d, 0xec, 0xae, 0xce, 0xae, 0x08, 0x4a, 0xe7,
      0xd3, 0xd6, 0x52, 0x60, 0xfb, 0xac, 0x7d, 0xe9,
      0xc1, 0x87, 0xd6, 0x0e, 0xf8, 0x18, 0x60, 0xb0,
      0xea, 0x8b, 0xa2, 0xf6, 0x8a, 0xec, 0xd8, 0xd8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ramen_interfaces
const rosidl_type_hash_t *
ramen_interfaces__srv__PayOrder_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0xb8, 0x2d, 0xca, 0x62, 0x09, 0x85, 0xb3,
      0x4e, 0x87, 0x59, 0x66, 0xcf, 0xef, 0x95, 0xde,
      0x94, 0xe4, 0x05, 0xa6, 0xfd, 0x7c, 0xb3, 0x11,
      0x75, 0x66, 0x5c, 0x92, 0x65, 0xdc, 0xac, 0x20,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ramen_interfaces__srv__PayOrder__TYPE_NAME[] = "ramen_interfaces/srv/PayOrder";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ramen_interfaces__srv__PayOrder_Event__TYPE_NAME[] = "ramen_interfaces/srv/PayOrder_Event";
static char ramen_interfaces__srv__PayOrder_Request__TYPE_NAME[] = "ramen_interfaces/srv/PayOrder_Request";
static char ramen_interfaces__srv__PayOrder_Response__TYPE_NAME[] = "ramen_interfaces/srv/PayOrder_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ramen_interfaces__srv__PayOrder__FIELD_NAME__request_message[] = "request_message";
static char ramen_interfaces__srv__PayOrder__FIELD_NAME__response_message[] = "response_message";
static char ramen_interfaces__srv__PayOrder__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ramen_interfaces__srv__PayOrder__FIELDS[] = {
  {
    {ramen_interfaces__srv__PayOrder__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ramen_interfaces__srv__PayOrder_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ramen_interfaces__srv__PayOrder_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ramen_interfaces__srv__PayOrder_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ramen_interfaces__srv__PayOrder__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ramen_interfaces__srv__PayOrder__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ramen_interfaces__srv__PayOrder__TYPE_NAME, 29, 29},
      {ramen_interfaces__srv__PayOrder__FIELDS, 3, 3},
    },
    {ramen_interfaces__srv__PayOrder__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ramen_interfaces__srv__PayOrder_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ramen_interfaces__srv__PayOrder_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ramen_interfaces__srv__PayOrder_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__table_number[] = "table_number";
static char ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__ramen_type[] = "ramen_type";
static char ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__toppings[] = "toppings";
static char ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__sides[] = "sides";

static rosidl_runtime_c__type_description__Field ramen_interfaces__srv__PayOrder_Request__FIELDS[] = {
  {
    {ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__table_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__ramen_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__toppings, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Request__FIELD_NAME__sides, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ramen_interfaces__srv__PayOrder_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ramen_interfaces__srv__PayOrder_Request__TYPE_NAME, 37, 37},
      {ramen_interfaces__srv__PayOrder_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ramen_interfaces__srv__PayOrder_Response__FIELD_NAME__success[] = "success";
static char ramen_interfaces__srv__PayOrder_Response__FIELD_NAME__total_price[] = "total_price";
static char ramen_interfaces__srv__PayOrder_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ramen_interfaces__srv__PayOrder_Response__FIELDS[] = {
  {
    {ramen_interfaces__srv__PayOrder_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Response__FIELD_NAME__total_price, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ramen_interfaces__srv__PayOrder_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ramen_interfaces__srv__PayOrder_Response__TYPE_NAME, 38, 38},
      {ramen_interfaces__srv__PayOrder_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ramen_interfaces__srv__PayOrder_Event__FIELD_NAME__info[] = "info";
static char ramen_interfaces__srv__PayOrder_Event__FIELD_NAME__request[] = "request";
static char ramen_interfaces__srv__PayOrder_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ramen_interfaces__srv__PayOrder_Event__FIELDS[] = {
  {
    {ramen_interfaces__srv__PayOrder_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ramen_interfaces__srv__PayOrder_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ramen_interfaces__srv__PayOrder_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ramen_interfaces__srv__PayOrder_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__srv__PayOrder_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ramen_interfaces__srv__PayOrder_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ramen_interfaces__srv__PayOrder_Event__TYPE_NAME, 35, 35},
      {ramen_interfaces__srv__PayOrder_Event__FIELDS, 3, 3},
    },
    {ramen_interfaces__srv__PayOrder_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ramen_interfaces__srv__PayOrder_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ramen_interfaces__srv__PayOrder_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request: \\xec\\x86\\x90\\xeb\\x8b\\x98\\xec\\x9d\\xb4 \\xec\\xa3\\xbc\\xeb\\xac\\xb8\\xed\\x95\\x9c \\xeb\\xa9\\x94\\xeb\\x89\\xb4 \\xeb\\x82\\xb4\\xec\\x97\\xad\n"
  "int32 table_number    # \\xed\\x85\\x8c\\xec\\x9d\\xb4\\xeb\\xb8\\x94 \\xeb\\xb2\\x88\\xed\\x98\\xb8\n"
  "string ramen_type     # \\xeb\\x9d\\xbc\\xeb\\xa9\\xb4 \\xec\\xa2\\x85\\xeb\\xa5\\x98 (\\xec\\x98\\x88: \"\\xec\\x8b\\xa0\\xeb\\x9d\\xbc\\xeb\\xa9\\xb4\")\n"
  "string[] toppings     # \\xed\\x86\\xa0\\xed\\x95\\x91 \\xeb\\xa6\\xac\\xec\\x8a\\xa4\\xed\\x8a\\xb8 (\\xec\\x98\\x88: [\"\\xec\\xb9\\x98\\xec\\xa6\\x88\", \"\\xeb\\x96\\xa1\"])\n"
  "string[] sides        # \\xec\\x82\\xac\\xec\\x9d\\xb4\\xeb\\x93\\x9c \\xeb\\xa6\\xac\\xec\\x8a\\xa4\\xed\\x8a\\xb8 (\\xec\\x98\\x88: [\"\\xea\\xb9\\x80\\xeb\\xb0\\xa5\"])\n"
  "---\n"
  "# Response: \\xec\\xb9\\xb4\\xec\\x9a\\xb4\\xed\\x84\\xb0(\\xec\\x84\\x9c\\xeb\\xb2\\x84)\\xec\\x9d\\x98 \\xec\\xb2\\x98\\xeb\\xa6\\xac \\xea\\xb2\\xb0\\xea\\xb3\\xbc\n"
  "bool success          # \\xea\\xb2\\xb0\\xec\\xa0\\x9c \\xec\\x8a\\xb9\\xec\\x9d\\xb8 \\xec\\x97\\xac\\xeb\\xb6\\x80 (True/False)\n"
  "int32 total_price     # \\xea\\xb3\\x84\\xec\\x82\\xb0\\xeb\\x90\\x9c \\xec\\xb4\\x9d \\xea\\xb2\\xb0\\xec\\xa0\\x9c \\xea\\xb8\\x88\\xec\\x95\\xa1\n"
  "string message        # \\xea\\xb2\\xb0\\xea\\xb3\\xbc \\xeb\\xa9\\x94\\xec\\x8b\\x9c\\xec\\xa7\\x80 (\\xec\\x98\\x88: \"\\xea\\xb2\\xb0\\xec\\xa0\\x9c \\xec\\x8a\\xb9\\xec\\x9d\\xb8 \\xec\\x99\\x84\\xeb\\xa3\\x8c\" \\xeb\\x98\\x90\\xeb\\x8a\\x94 \"\\xec\\x9e\\x94\\xec\\x95\\xa1 \\xeb\\xb6\\x80\\xec\\xa1\\xb1\")";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ramen_interfaces__srv__PayOrder__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ramen_interfaces__srv__PayOrder__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 359, 359},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ramen_interfaces__srv__PayOrder_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ramen_interfaces__srv__PayOrder_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ramen_interfaces__srv__PayOrder_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ramen_interfaces__srv__PayOrder_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ramen_interfaces__srv__PayOrder_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ramen_interfaces__srv__PayOrder_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ramen_interfaces__srv__PayOrder__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ramen_interfaces__srv__PayOrder__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ramen_interfaces__srv__PayOrder_Event__get_individual_type_description_source(NULL);
    sources[3] = *ramen_interfaces__srv__PayOrder_Request__get_individual_type_description_source(NULL);
    sources[4] = *ramen_interfaces__srv__PayOrder_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ramen_interfaces__srv__PayOrder_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ramen_interfaces__srv__PayOrder_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ramen_interfaces__srv__PayOrder_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ramen_interfaces__srv__PayOrder_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ramen_interfaces__srv__PayOrder_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ramen_interfaces__srv__PayOrder_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ramen_interfaces__srv__PayOrder_Request__get_individual_type_description_source(NULL);
    sources[3] = *ramen_interfaces__srv__PayOrder_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
