// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice

#include "ramen_interfaces/msg/detail/cooked_ramen__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ramen_interfaces
const rosidl_type_hash_t *
ramen_interfaces__msg__CookedRamen__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x78, 0xd2, 0xe2, 0xa9, 0xa5, 0x43, 0xb9,
      0xc7, 0x3a, 0x42, 0xc1, 0x02, 0xd4, 0xce, 0x27,
      0xb8, 0x0a, 0xfb, 0x45, 0x14, 0x61, 0x8d, 0x47,
      0x17, 0xa9, 0x20, 0xee, 0x7d, 0x6a, 0x23, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ramen_interfaces/msg/detail/ramen_order__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ramen_interfaces__msg__RamenOrder__EXPECTED_HASH = {1, {
    0x01, 0x96, 0x60, 0xaa, 0x27, 0x05, 0xe5, 0x07,
    0xe7, 0x26, 0x1d, 0x2f, 0x1b, 0x10, 0xed, 0xb7,
    0xb5, 0x60, 0x75, 0x57, 0x53, 0x4e, 0xb2, 0x50,
    0x8a, 0x5a, 0x3f, 0x4d, 0x43, 0x00, 0xb6, 0x7b,
  }};
#endif

static char ramen_interfaces__msg__CookedRamen__TYPE_NAME[] = "ramen_interfaces/msg/CookedRamen";
static char ramen_interfaces__msg__RamenOrder__TYPE_NAME[] = "ramen_interfaces/msg/RamenOrder";

// Define type names, field names, and default values
static char ramen_interfaces__msg__CookedRamen__FIELD_NAME__order[] = "order";
static char ramen_interfaces__msg__CookedRamen__FIELD_NAME__cook_status[] = "cook_status";

static rosidl_runtime_c__type_description__Field ramen_interfaces__msg__CookedRamen__FIELDS[] = {
  {
    {ramen_interfaces__msg__CookedRamen__FIELD_NAME__order, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ramen_interfaces__msg__RamenOrder__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ramen_interfaces__msg__CookedRamen__FIELD_NAME__cook_status, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ramen_interfaces__msg__CookedRamen__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ramen_interfaces__msg__RamenOrder__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ramen_interfaces__msg__CookedRamen__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ramen_interfaces__msg__CookedRamen__TYPE_NAME, 32, 32},
      {ramen_interfaces__msg__CookedRamen__FIELDS, 2, 2},
    },
    {ramen_interfaces__msg__CookedRamen__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ramen_interfaces__msg__RamenOrder__EXPECTED_HASH, ramen_interfaces__msg__RamenOrder__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ramen_interfaces__msg__RamenOrder__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# msg/CookedRamen.msg\n"
  "ramen_interfaces/RamenOrder order     # \\xec\\x9b\\x90\\xeb\\xb3\\xb8 \\xec\\xa3\\xbc\\xeb\\xac\\xb8 \\xec\\xa0\\x95\\xeb\\xb3\\xb4\n"
  "string cook_status                  # \\xec\\xa1\\xb0\\xeb\\xa6\\xac \\xec\\x83\\x81\\xed\\x83\\x9c\n"
  "                                    # \"perfect\" (o)\n"
  "                                    # \"undercooked\" (x)\n"
  "                                    # \"overcooked\" (x)\n"
  "                                    # \"missing_topping\" (x)\n"
  "                                    # \"missing_side\" (x)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ramen_interfaces__msg__CookedRamen__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ramen_interfaces__msg__CookedRamen__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 395, 395},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ramen_interfaces__msg__CookedRamen__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ramen_interfaces__msg__CookedRamen__get_individual_type_description_source(NULL),
    sources[1] = *ramen_interfaces__msg__RamenOrder__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
