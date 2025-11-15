// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ramen_interfaces:action/RequestRemake.idl
// generated code does not contain a copyright notice
#include "ramen_interfaces/action/detail/request_remake__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bad_food`
#include "ramen_interfaces/msg/detail/cooked_ramen__functions.h"

bool
ramen_interfaces__action__RequestRemake_Goal__init(ramen_interfaces__action__RequestRemake_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // bad_food
  if (!ramen_interfaces__msg__CookedRamen__init(&msg->bad_food)) {
    ramen_interfaces__action__RequestRemake_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_Goal__fini(ramen_interfaces__action__RequestRemake_Goal * msg)
{
  if (!msg) {
    return;
  }
  // bad_food
  ramen_interfaces__msg__CookedRamen__fini(&msg->bad_food);
}

bool
ramen_interfaces__action__RequestRemake_Goal__are_equal(const ramen_interfaces__action__RequestRemake_Goal * lhs, const ramen_interfaces__action__RequestRemake_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bad_food
  if (!ramen_interfaces__msg__CookedRamen__are_equal(
      &(lhs->bad_food), &(rhs->bad_food)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_Goal__copy(
  const ramen_interfaces__action__RequestRemake_Goal * input,
  ramen_interfaces__action__RequestRemake_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // bad_food
  if (!ramen_interfaces__msg__CookedRamen__copy(
      &(input->bad_food), &(output->bad_food)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_Goal *
ramen_interfaces__action__RequestRemake_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Goal * msg = (ramen_interfaces__action__RequestRemake_Goal *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_Goal));
  bool success = ramen_interfaces__action__RequestRemake_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_Goal__destroy(ramen_interfaces__action__RequestRemake_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_Goal__Sequence__init(ramen_interfaces__action__RequestRemake_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Goal * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_Goal *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_Goal__Sequence__fini(ramen_interfaces__action__RequestRemake_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_Goal__Sequence *
ramen_interfaces__action__RequestRemake_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Goal__Sequence * array = (ramen_interfaces__action__RequestRemake_Goal__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_Goal__Sequence__destroy(ramen_interfaces__action__RequestRemake_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_Goal__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_Goal__Sequence * lhs, const ramen_interfaces__action__RequestRemake_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_Goal__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_Goal__Sequence * input,
  ramen_interfaces__action__RequestRemake_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_Goal * data =
      (ramen_interfaces__action__RequestRemake_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `new_food`
// already included above
// #include "ramen_interfaces/msg/detail/cooked_ramen__functions.h"

bool
ramen_interfaces__action__RequestRemake_Result__init(ramen_interfaces__action__RequestRemake_Result * msg)
{
  if (!msg) {
    return false;
  }
  // new_food
  if (!ramen_interfaces__msg__CookedRamen__init(&msg->new_food)) {
    ramen_interfaces__action__RequestRemake_Result__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_Result__fini(ramen_interfaces__action__RequestRemake_Result * msg)
{
  if (!msg) {
    return;
  }
  // new_food
  ramen_interfaces__msg__CookedRamen__fini(&msg->new_food);
}

bool
ramen_interfaces__action__RequestRemake_Result__are_equal(const ramen_interfaces__action__RequestRemake_Result * lhs, const ramen_interfaces__action__RequestRemake_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_food
  if (!ramen_interfaces__msg__CookedRamen__are_equal(
      &(lhs->new_food), &(rhs->new_food)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_Result__copy(
  const ramen_interfaces__action__RequestRemake_Result * input,
  ramen_interfaces__action__RequestRemake_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // new_food
  if (!ramen_interfaces__msg__CookedRamen__copy(
      &(input->new_food), &(output->new_food)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_Result *
ramen_interfaces__action__RequestRemake_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Result * msg = (ramen_interfaces__action__RequestRemake_Result *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_Result));
  bool success = ramen_interfaces__action__RequestRemake_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_Result__destroy(ramen_interfaces__action__RequestRemake_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_Result__Sequence__init(ramen_interfaces__action__RequestRemake_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Result * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_Result *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_Result__Sequence__fini(ramen_interfaces__action__RequestRemake_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_Result__Sequence *
ramen_interfaces__action__RequestRemake_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Result__Sequence * array = (ramen_interfaces__action__RequestRemake_Result__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_Result__Sequence__destroy(ramen_interfaces__action__RequestRemake_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_Result__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_Result__Sequence * lhs, const ramen_interfaces__action__RequestRemake_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_Result__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_Result__Sequence * input,
  ramen_interfaces__action__RequestRemake_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_Result * data =
      (ramen_interfaces__action__RequestRemake_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `progress`
#include "rosidl_runtime_c/string_functions.h"

bool
ramen_interfaces__action__RequestRemake_Feedback__init(ramen_interfaces__action__RequestRemake_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // progress
  if (!rosidl_runtime_c__String__init(&msg->progress)) {
    ramen_interfaces__action__RequestRemake_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_Feedback__fini(ramen_interfaces__action__RequestRemake_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // progress
  rosidl_runtime_c__String__fini(&msg->progress);
}

bool
ramen_interfaces__action__RequestRemake_Feedback__are_equal(const ramen_interfaces__action__RequestRemake_Feedback * lhs, const ramen_interfaces__action__RequestRemake_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // progress
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->progress), &(rhs->progress)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_Feedback__copy(
  const ramen_interfaces__action__RequestRemake_Feedback * input,
  ramen_interfaces__action__RequestRemake_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // progress
  if (!rosidl_runtime_c__String__copy(
      &(input->progress), &(output->progress)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_Feedback *
ramen_interfaces__action__RequestRemake_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Feedback * msg = (ramen_interfaces__action__RequestRemake_Feedback *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_Feedback));
  bool success = ramen_interfaces__action__RequestRemake_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_Feedback__destroy(ramen_interfaces__action__RequestRemake_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_Feedback__Sequence__init(ramen_interfaces__action__RequestRemake_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Feedback * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_Feedback *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_Feedback__Sequence__fini(ramen_interfaces__action__RequestRemake_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_Feedback__Sequence *
ramen_interfaces__action__RequestRemake_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_Feedback__Sequence * array = (ramen_interfaces__action__RequestRemake_Feedback__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_Feedback__Sequence__destroy(ramen_interfaces__action__RequestRemake_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_Feedback__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_Feedback__Sequence * lhs, const ramen_interfaces__action__RequestRemake_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_Feedback__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_Feedback__Sequence * input,
  ramen_interfaces__action__RequestRemake_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_Feedback * data =
      (ramen_interfaces__action__RequestRemake_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ramen_interfaces/action/detail/request_remake__functions.h"

bool
ramen_interfaces__action__RequestRemake_SendGoal_Request__init(ramen_interfaces__action__RequestRemake_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ramen_interfaces__action__RequestRemake_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ramen_interfaces__action__RequestRemake_Goal__init(&msg->goal)) {
    ramen_interfaces__action__RequestRemake_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Request__fini(ramen_interfaces__action__RequestRemake_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ramen_interfaces__action__RequestRemake_Goal__fini(&msg->goal);
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Request__are_equal(const ramen_interfaces__action__RequestRemake_SendGoal_Request * lhs, const ramen_interfaces__action__RequestRemake_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ramen_interfaces__action__RequestRemake_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Request__copy(
  const ramen_interfaces__action__RequestRemake_SendGoal_Request * input,
  ramen_interfaces__action__RequestRemake_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ramen_interfaces__action__RequestRemake_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_SendGoal_Request *
ramen_interfaces__action__RequestRemake_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Request * msg = (ramen_interfaces__action__RequestRemake_SendGoal_Request *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Request));
  bool success = ramen_interfaces__action__RequestRemake_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Request__destroy(ramen_interfaces__action__RequestRemake_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__init(ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Request * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__fini(ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence *
ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * array = (ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__destroy(ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * lhs, const ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * input,
  ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_SendGoal_Request * data =
      (ramen_interfaces__action__RequestRemake_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ramen_interfaces__action__RequestRemake_SendGoal_Response__init(ramen_interfaces__action__RequestRemake_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ramen_interfaces__action__RequestRemake_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Response__fini(ramen_interfaces__action__RequestRemake_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Response__are_equal(const ramen_interfaces__action__RequestRemake_SendGoal_Response * lhs, const ramen_interfaces__action__RequestRemake_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Response__copy(
  const ramen_interfaces__action__RequestRemake_SendGoal_Response * input,
  ramen_interfaces__action__RequestRemake_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_SendGoal_Response *
ramen_interfaces__action__RequestRemake_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Response * msg = (ramen_interfaces__action__RequestRemake_SendGoal_Response *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Response));
  bool success = ramen_interfaces__action__RequestRemake_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Response__destroy(ramen_interfaces__action__RequestRemake_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__init(ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Response * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__fini(ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence *
ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * array = (ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__destroy(ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * lhs, const ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * input,
  ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_SendGoal_Response * data =
      (ramen_interfaces__action__RequestRemake_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ramen_interfaces/action/detail/request_remake__functions.h"

bool
ramen_interfaces__action__RequestRemake_SendGoal_Event__init(ramen_interfaces__action__RequestRemake_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(ramen_interfaces__action__RequestRemake_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Event__are_equal(const ramen_interfaces__action__RequestRemake_SendGoal_Event * lhs, const ramen_interfaces__action__RequestRemake_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Event__copy(
  const ramen_interfaces__action__RequestRemake_SendGoal_Event * input,
  ramen_interfaces__action__RequestRemake_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ramen_interfaces__action__RequestRemake_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ramen_interfaces__action__RequestRemake_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_SendGoal_Event *
ramen_interfaces__action__RequestRemake_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Event * msg = (ramen_interfaces__action__RequestRemake_SendGoal_Event *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Event));
  bool success = ramen_interfaces__action__RequestRemake_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Event__destroy(ramen_interfaces__action__RequestRemake_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__init(ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Event * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_SendGoal_Event *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__fini(ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence *
ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * array = (ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__destroy(ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * lhs, const ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * input,
  ramen_interfaces__action__RequestRemake_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_SendGoal_Event * data =
      (ramen_interfaces__action__RequestRemake_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ramen_interfaces__action__RequestRemake_GetResult_Request__init(ramen_interfaces__action__RequestRemake_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ramen_interfaces__action__RequestRemake_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Request__fini(ramen_interfaces__action__RequestRemake_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Request__are_equal(const ramen_interfaces__action__RequestRemake_GetResult_Request * lhs, const ramen_interfaces__action__RequestRemake_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Request__copy(
  const ramen_interfaces__action__RequestRemake_GetResult_Request * input,
  ramen_interfaces__action__RequestRemake_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_GetResult_Request *
ramen_interfaces__action__RequestRemake_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Request * msg = (ramen_interfaces__action__RequestRemake_GetResult_Request *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_GetResult_Request));
  bool success = ramen_interfaces__action__RequestRemake_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Request__destroy(ramen_interfaces__action__RequestRemake_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__init(ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Request * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_GetResult_Request *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__fini(ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence *
ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * array = (ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__destroy(ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * lhs, const ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * input,
  ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_GetResult_Request * data =
      (ramen_interfaces__action__RequestRemake_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ramen_interfaces/action/detail/request_remake__functions.h"

bool
ramen_interfaces__action__RequestRemake_GetResult_Response__init(ramen_interfaces__action__RequestRemake_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ramen_interfaces__action__RequestRemake_Result__init(&msg->result)) {
    ramen_interfaces__action__RequestRemake_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Response__fini(ramen_interfaces__action__RequestRemake_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ramen_interfaces__action__RequestRemake_Result__fini(&msg->result);
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Response__are_equal(const ramen_interfaces__action__RequestRemake_GetResult_Response * lhs, const ramen_interfaces__action__RequestRemake_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ramen_interfaces__action__RequestRemake_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Response__copy(
  const ramen_interfaces__action__RequestRemake_GetResult_Response * input,
  ramen_interfaces__action__RequestRemake_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ramen_interfaces__action__RequestRemake_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_GetResult_Response *
ramen_interfaces__action__RequestRemake_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Response * msg = (ramen_interfaces__action__RequestRemake_GetResult_Response *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_GetResult_Response));
  bool success = ramen_interfaces__action__RequestRemake_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Response__destroy(ramen_interfaces__action__RequestRemake_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__init(ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Response * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_GetResult_Response *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__fini(ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence *
ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * array = (ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__destroy(ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * lhs, const ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * input,
  ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_GetResult_Response * data =
      (ramen_interfaces__action__RequestRemake_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ramen_interfaces/action/detail/request_remake__functions.h"

bool
ramen_interfaces__action__RequestRemake_GetResult_Event__init(ramen_interfaces__action__RequestRemake_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ramen_interfaces__action__RequestRemake_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__init(&msg->request, 0)) {
    ramen_interfaces__action__RequestRemake_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__init(&msg->response, 0)) {
    ramen_interfaces__action__RequestRemake_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Event__fini(ramen_interfaces__action__RequestRemake_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__fini(&msg->request);
  // response
  ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__fini(&msg->response);
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Event__are_equal(const ramen_interfaces__action__RequestRemake_GetResult_Event * lhs, const ramen_interfaces__action__RequestRemake_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Event__copy(
  const ramen_interfaces__action__RequestRemake_GetResult_Event * input,
  ramen_interfaces__action__RequestRemake_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ramen_interfaces__action__RequestRemake_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ramen_interfaces__action__RequestRemake_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_GetResult_Event *
ramen_interfaces__action__RequestRemake_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Event * msg = (ramen_interfaces__action__RequestRemake_GetResult_Event *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_GetResult_Event));
  bool success = ramen_interfaces__action__RequestRemake_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Event__destroy(ramen_interfaces__action__RequestRemake_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__init(ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Event * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_GetResult_Event *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__fini(ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence *
ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * array = (ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__destroy(ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * lhs, const ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * input,
  ramen_interfaces__action__RequestRemake_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_GetResult_Event * data =
      (ramen_interfaces__action__RequestRemake_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ramen_interfaces/action/detail/request_remake__functions.h"

bool
ramen_interfaces__action__RequestRemake_FeedbackMessage__init(ramen_interfaces__action__RequestRemake_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ramen_interfaces__action__RequestRemake_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ramen_interfaces__action__RequestRemake_Feedback__init(&msg->feedback)) {
    ramen_interfaces__action__RequestRemake_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__RequestRemake_FeedbackMessage__fini(ramen_interfaces__action__RequestRemake_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ramen_interfaces__action__RequestRemake_Feedback__fini(&msg->feedback);
}

bool
ramen_interfaces__action__RequestRemake_FeedbackMessage__are_equal(const ramen_interfaces__action__RequestRemake_FeedbackMessage * lhs, const ramen_interfaces__action__RequestRemake_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ramen_interfaces__action__RequestRemake_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_FeedbackMessage__copy(
  const ramen_interfaces__action__RequestRemake_FeedbackMessage * input,
  ramen_interfaces__action__RequestRemake_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ramen_interfaces__action__RequestRemake_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__RequestRemake_FeedbackMessage *
ramen_interfaces__action__RequestRemake_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_FeedbackMessage * msg = (ramen_interfaces__action__RequestRemake_FeedbackMessage *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__RequestRemake_FeedbackMessage));
  bool success = ramen_interfaces__action__RequestRemake_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__RequestRemake_FeedbackMessage__destroy(ramen_interfaces__action__RequestRemake_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__RequestRemake_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__init(ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_FeedbackMessage * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__RequestRemake_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__RequestRemake_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__RequestRemake_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__RequestRemake_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__fini(ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ramen_interfaces__action__RequestRemake_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence *
ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * array = (ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__destroy(ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__are_equal(const ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * lhs, const ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence__copy(
  const ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * input,
  ramen_interfaces__action__RequestRemake_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__RequestRemake_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__RequestRemake_FeedbackMessage * data =
      (ramen_interfaces__action__RequestRemake_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__RequestRemake_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__RequestRemake_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__RequestRemake_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
