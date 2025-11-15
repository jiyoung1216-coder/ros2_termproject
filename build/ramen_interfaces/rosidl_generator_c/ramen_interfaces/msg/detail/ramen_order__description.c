// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice

#include "ramen_interfaces/msg/detail/ramen_order__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ramen_interfaces
const rosidl_type_hash_t *
ramen_interfaces__msg__RamenOrder__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0x96, 0x60, 0xaa, 0x27, 0x05, 0xe5, 0x07,
      0xe7, 0x26, 0x1d, 0x2f, 0x1b, 0x10, 0xed, 0xb7,
      0xb5, 0x60, 0x75, 0x57, 0x53, 0x4e, 0xb2, 0x50,
      0x8a, 0x5a, 0x3f, 0x4d, 0x43, 0x00, 0xb6, 0x7b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ramen_interfaces__msg__RamenOrder__TYPE_NAME[] = "ramen_interfaces/msg/RamenOrder";

// Define type names, field names, and default values
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__table_number[] = "table_number";
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__ramen_type[] = "ramen_type";
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__toppings[] = "toppings";
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__sides[] = "sides";
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__total_price[] = "total_price";
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__payment_method[] = "payment_method";
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__pay_now[] = "pay_now";
static char ramen_interfaces__msg__RamenOrder__FIELD_NAME__currency[] = "currency";

static rosidl_runtime_c__type_description__Field ramen_interfaces__msg__RamenOrder__FIELDS[] = {
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__table_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__ramen_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__toppings, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__sides, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__total_price, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__payment_method, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__pay_now, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__RamenOrder__FIELD_NAME__currency, 8, 8},
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
ramen_interfaces__msg__RamenOrder__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ramen_interfaces__msg__RamenOrder__TYPE_NAME, 31, 31},
      {ramen_interfaces__msg__RamenOrder__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 table_number\n"
  "string ramen_type\n"
  "string[] toppings\n"
  "string[] sides\n"
  "int32 total_price\n"
  "string payment_method\n"
  "bool pay_now\n"
  "string currency";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ramen_interfaces__msg__RamenOrder__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ramen_interfaces__msg__RamenOrder__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 139, 139},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ramen_interfaces__msg__RamenOrder__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ramen_interfaces__msg__RamenOrder__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
