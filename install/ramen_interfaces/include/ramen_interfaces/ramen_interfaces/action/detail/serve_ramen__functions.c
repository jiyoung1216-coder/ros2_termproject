// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ramen_interfaces:action/ServeRamen.idl
// generated code does not contain a copyright notice
#include "ramen_interfaces/action/detail/serve_ramen__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `food_to_serve`
#include "ramen_interfaces/msg/detail/cooked_ramen__functions.h"

bool
ramen_interfaces__action__ServeRamen_Goal__init(ramen_interfaces__action__ServeRamen_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // food_to_serve
  if (!ramen_interfaces__msg__CookedRamen__init(&msg->food_to_serve)) {
    ramen_interfaces__action__ServeRamen_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__ServeRamen_Goal__fini(ramen_interfaces__action__ServeRamen_Goal * msg)
{
  if (!msg) {
    return;
  }
  // food_to_serve
  ramen_interfaces__msg__CookedRamen__fini(&msg->food_to_serve);
}

bool
ramen_interfaces__action__ServeRamen_Goal__are_equal(const ramen_interfaces__action__ServeRamen_Goal * lhs, const ramen_interfaces__action__ServeRamen_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // food_to_serve
  if (!ramen_interfaces__msg__CookedRamen__are_equal(
      &(lhs->food_to_serve), &(rhs->food_to_serve)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_Goal__copy(
  const ramen_interfaces__action__ServeRamen_Goal * input,
  ramen_interfaces__action__ServeRamen_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // food_to_serve
  if (!ramen_interfaces__msg__CookedRamen__copy(
      &(input->food_to_serve), &(output->food_to_serve)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__ServeRamen_Goal *
ramen_interfaces__action__ServeRamen_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Goal * msg = (ramen_interfaces__action__ServeRamen_Goal *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_Goal));
  bool success = ramen_interfaces__action__ServeRamen_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_Goal__destroy(ramen_interfaces__action__ServeRamen_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_Goal__Sequence__init(ramen_interfaces__action__ServeRamen_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Goal * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_Goal *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_Goal__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_Goal__Sequence__fini(ramen_interfaces__action__ServeRamen_Goal__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_Goal__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_Goal__Sequence *
ramen_interfaces__action__ServeRamen_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Goal__Sequence * array = (ramen_interfaces__action__ServeRamen_Goal__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_Goal__Sequence__destroy(ramen_interfaces__action__ServeRamen_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_Goal__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_Goal__Sequence * lhs, const ramen_interfaces__action__ServeRamen_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_Goal__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_Goal__Sequence * input,
  ramen_interfaces__action__ServeRamen_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_Goal * data =
      (ramen_interfaces__action__ServeRamen_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ramen_interfaces__action__ServeRamen_Result__init(ramen_interfaces__action__ServeRamen_Result * msg)
{
  if (!msg) {
    return false;
  }
  // delivery_success
  return true;
}

void
ramen_interfaces__action__ServeRamen_Result__fini(ramen_interfaces__action__ServeRamen_Result * msg)
{
  if (!msg) {
    return;
  }
  // delivery_success
}

bool
ramen_interfaces__action__ServeRamen_Result__are_equal(const ramen_interfaces__action__ServeRamen_Result * lhs, const ramen_interfaces__action__ServeRamen_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // delivery_success
  if (lhs->delivery_success != rhs->delivery_success) {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_Result__copy(
  const ramen_interfaces__action__ServeRamen_Result * input,
  ramen_interfaces__action__ServeRamen_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // delivery_success
  output->delivery_success = input->delivery_success;
  return true;
}

ramen_interfaces__action__ServeRamen_Result *
ramen_interfaces__action__ServeRamen_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Result * msg = (ramen_interfaces__action__ServeRamen_Result *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_Result));
  bool success = ramen_interfaces__action__ServeRamen_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_Result__destroy(ramen_interfaces__action__ServeRamen_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_Result__Sequence__init(ramen_interfaces__action__ServeRamen_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Result * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_Result *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_Result__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_Result__Sequence__fini(ramen_interfaces__action__ServeRamen_Result__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_Result__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_Result__Sequence *
ramen_interfaces__action__ServeRamen_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Result__Sequence * array = (ramen_interfaces__action__ServeRamen_Result__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_Result__Sequence__destroy(ramen_interfaces__action__ServeRamen_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_Result__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_Result__Sequence * lhs, const ramen_interfaces__action__ServeRamen_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_Result__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_Result__Sequence * input,
  ramen_interfaces__action__ServeRamen_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_Result * data =
      (ramen_interfaces__action__ServeRamen_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
ramen_interfaces__action__ServeRamen_Feedback__init(ramen_interfaces__action__ServeRamen_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_x
  // current_y
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    ramen_interfaces__action__ServeRamen_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__ServeRamen_Feedback__fini(ramen_interfaces__action__ServeRamen_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_x
  // current_y
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
ramen_interfaces__action__ServeRamen_Feedback__are_equal(const ramen_interfaces__action__ServeRamen_Feedback * lhs, const ramen_interfaces__action__ServeRamen_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_x
  if (lhs->current_x != rhs->current_x) {
    return false;
  }
  // current_y
  if (lhs->current_y != rhs->current_y) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_Feedback__copy(
  const ramen_interfaces__action__ServeRamen_Feedback * input,
  ramen_interfaces__action__ServeRamen_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_x
  output->current_x = input->current_x;
  // current_y
  output->current_y = input->current_y;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__ServeRamen_Feedback *
ramen_interfaces__action__ServeRamen_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Feedback * msg = (ramen_interfaces__action__ServeRamen_Feedback *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_Feedback));
  bool success = ramen_interfaces__action__ServeRamen_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_Feedback__destroy(ramen_interfaces__action__ServeRamen_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_Feedback__Sequence__init(ramen_interfaces__action__ServeRamen_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Feedback * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_Feedback *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_Feedback__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_Feedback__Sequence__fini(ramen_interfaces__action__ServeRamen_Feedback__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_Feedback__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_Feedback__Sequence *
ramen_interfaces__action__ServeRamen_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_Feedback__Sequence * array = (ramen_interfaces__action__ServeRamen_Feedback__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_Feedback__Sequence__destroy(ramen_interfaces__action__ServeRamen_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_Feedback__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_Feedback__Sequence * lhs, const ramen_interfaces__action__ServeRamen_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_Feedback__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_Feedback__Sequence * input,
  ramen_interfaces__action__ServeRamen_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_Feedback * data =
      (ramen_interfaces__action__ServeRamen_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_Feedback__copy(
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
// #include "ramen_interfaces/action/detail/serve_ramen__functions.h"

bool
ramen_interfaces__action__ServeRamen_SendGoal_Request__init(ramen_interfaces__action__ServeRamen_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ramen_interfaces__action__ServeRamen_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ramen_interfaces__action__ServeRamen_Goal__init(&msg->goal)) {
    ramen_interfaces__action__ServeRamen_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__ServeRamen_SendGoal_Request__fini(ramen_interfaces__action__ServeRamen_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ramen_interfaces__action__ServeRamen_Goal__fini(&msg->goal);
}

bool
ramen_interfaces__action__ServeRamen_SendGoal_Request__are_equal(const ramen_interfaces__action__ServeRamen_SendGoal_Request * lhs, const ramen_interfaces__action__ServeRamen_SendGoal_Request * rhs)
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
  if (!ramen_interfaces__action__ServeRamen_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_SendGoal_Request__copy(
  const ramen_interfaces__action__ServeRamen_SendGoal_Request * input,
  ramen_interfaces__action__ServeRamen_SendGoal_Request * output)
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
  if (!ramen_interfaces__action__ServeRamen_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__ServeRamen_SendGoal_Request *
ramen_interfaces__action__ServeRamen_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_SendGoal_Request * msg = (ramen_interfaces__action__ServeRamen_SendGoal_Request *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Request));
  bool success = ramen_interfaces__action__ServeRamen_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_SendGoal_Request__destroy(ramen_interfaces__action__ServeRamen_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__init(ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_SendGoal_Request * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_SendGoal_Request__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__fini(ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_SendGoal_Request__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence *
ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * array = (ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__destroy(ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * lhs, const ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * input,
  ramen_interfaces__action__ServeRamen_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_SendGoal_Request * data =
      (ramen_interfaces__action__ServeRamen_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_SendGoal_Request__copy(
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
ramen_interfaces__action__ServeRamen_SendGoal_Response__init(ramen_interfaces__action__ServeRamen_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ramen_interfaces__action__ServeRamen_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__ServeRamen_SendGoal_Response__fini(ramen_interfaces__action__ServeRamen_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ramen_interfaces__action__ServeRamen_SendGoal_Response__are_equal(const ramen_interfaces__action__ServeRamen_SendGoal_Response * lhs, const ramen_interfaces__action__ServeRamen_SendGoal_Response * rhs)
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
ramen_interfaces__action__ServeRamen_SendGoal_Response__copy(
  const ramen_interfaces__action__ServeRamen_SendGoal_Response * input,
  ramen_interfaces__action__ServeRamen_SendGoal_Response * output)
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

ramen_interfaces__action__ServeRamen_SendGoal_Response *
ramen_interfaces__action__ServeRamen_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_SendGoal_Response * msg = (ramen_interfaces__action__ServeRamen_SendGoal_Response *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Response));
  bool success = ramen_interfaces__action__ServeRamen_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_SendGoal_Response__destroy(ramen_interfaces__action__ServeRamen_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__init(ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_SendGoal_Response * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_SendGoal_Response__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__fini(ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_SendGoal_Response__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence *
ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * array = (ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__destroy(ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * lhs, const ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * input,
  ramen_interfaces__action__ServeRamen_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_SendGoal_Response * data =
      (ramen_interfaces__action__ServeRamen_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_SendGoal_Response__copy(
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
ramen_interfaces__action__ServeRamen_GetResult_Request__init(ramen_interfaces__action__ServeRamen_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ramen_interfaces__action__ServeRamen_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__ServeRamen_GetResult_Request__fini(ramen_interfaces__action__ServeRamen_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ramen_interfaces__action__ServeRamen_GetResult_Request__are_equal(const ramen_interfaces__action__ServeRamen_GetResult_Request * lhs, const ramen_interfaces__action__ServeRamen_GetResult_Request * rhs)
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
ramen_interfaces__action__ServeRamen_GetResult_Request__copy(
  const ramen_interfaces__action__ServeRamen_GetResult_Request * input,
  ramen_interfaces__action__ServeRamen_GetResult_Request * output)
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

ramen_interfaces__action__ServeRamen_GetResult_Request *
ramen_interfaces__action__ServeRamen_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_GetResult_Request * msg = (ramen_interfaces__action__ServeRamen_GetResult_Request *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_GetResult_Request));
  bool success = ramen_interfaces__action__ServeRamen_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_GetResult_Request__destroy(ramen_interfaces__action__ServeRamen_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__init(ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_GetResult_Request * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_GetResult_Request *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_GetResult_Request__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__fini(ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_GetResult_Request__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence *
ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * array = (ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__destroy(ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * lhs, const ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * input,
  ramen_interfaces__action__ServeRamen_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_GetResult_Request * data =
      (ramen_interfaces__action__ServeRamen_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_GetResult_Request__copy(
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
// #include "ramen_interfaces/action/detail/serve_ramen__functions.h"

bool
ramen_interfaces__action__ServeRamen_GetResult_Response__init(ramen_interfaces__action__ServeRamen_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ramen_interfaces__action__ServeRamen_Result__init(&msg->result)) {
    ramen_interfaces__action__ServeRamen_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__ServeRamen_GetResult_Response__fini(ramen_interfaces__action__ServeRamen_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ramen_interfaces__action__ServeRamen_Result__fini(&msg->result);
}

bool
ramen_interfaces__action__ServeRamen_GetResult_Response__are_equal(const ramen_interfaces__action__ServeRamen_GetResult_Response * lhs, const ramen_interfaces__action__ServeRamen_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ramen_interfaces__action__ServeRamen_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_GetResult_Response__copy(
  const ramen_interfaces__action__ServeRamen_GetResult_Response * input,
  ramen_interfaces__action__ServeRamen_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ramen_interfaces__action__ServeRamen_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__ServeRamen_GetResult_Response *
ramen_interfaces__action__ServeRamen_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_GetResult_Response * msg = (ramen_interfaces__action__ServeRamen_GetResult_Response *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_GetResult_Response));
  bool success = ramen_interfaces__action__ServeRamen_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_GetResult_Response__destroy(ramen_interfaces__action__ServeRamen_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__init(ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_GetResult_Response * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_GetResult_Response *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_GetResult_Response__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__fini(ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_GetResult_Response__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence *
ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * array = (ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__destroy(ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * lhs, const ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * input,
  ramen_interfaces__action__ServeRamen_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_GetResult_Response * data =
      (ramen_interfaces__action__ServeRamen_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_GetResult_Response__copy(
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
// #include "ramen_interfaces/action/detail/serve_ramen__functions.h"

bool
ramen_interfaces__action__ServeRamen_FeedbackMessage__init(ramen_interfaces__action__ServeRamen_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ramen_interfaces__action__ServeRamen_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ramen_interfaces__action__ServeRamen_Feedback__init(&msg->feedback)) {
    ramen_interfaces__action__ServeRamen_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__action__ServeRamen_FeedbackMessage__fini(ramen_interfaces__action__ServeRamen_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ramen_interfaces__action__ServeRamen_Feedback__fini(&msg->feedback);
}

bool
ramen_interfaces__action__ServeRamen_FeedbackMessage__are_equal(const ramen_interfaces__action__ServeRamen_FeedbackMessage * lhs, const ramen_interfaces__action__ServeRamen_FeedbackMessage * rhs)
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
  if (!ramen_interfaces__action__ServeRamen_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_FeedbackMessage__copy(
  const ramen_interfaces__action__ServeRamen_FeedbackMessage * input,
  ramen_interfaces__action__ServeRamen_FeedbackMessage * output)
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
  if (!ramen_interfaces__action__ServeRamen_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__action__ServeRamen_FeedbackMessage *
ramen_interfaces__action__ServeRamen_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_FeedbackMessage * msg = (ramen_interfaces__action__ServeRamen_FeedbackMessage *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__action__ServeRamen_FeedbackMessage));
  bool success = ramen_interfaces__action__ServeRamen_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__action__ServeRamen_FeedbackMessage__destroy(ramen_interfaces__action__ServeRamen_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__action__ServeRamen_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__init(ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_FeedbackMessage * data = NULL;

  if (size) {
    data = (ramen_interfaces__action__ServeRamen_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ramen_interfaces__action__ServeRamen_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__action__ServeRamen_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__action__ServeRamen_FeedbackMessage__fini(&data[i - 1]);
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
ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__fini(ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * array)
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
      ramen_interfaces__action__ServeRamen_FeedbackMessage__fini(&array->data[i]);
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

ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence *
ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * array = (ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__destroy(ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__are_equal(const ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * lhs, const ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence__copy(
  const ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * input,
  ramen_interfaces__action__ServeRamen_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__action__ServeRamen_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__action__ServeRamen_FeedbackMessage * data =
      (ramen_interfaces__action__ServeRamen_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__action__ServeRamen_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__action__ServeRamen_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__action__ServeRamen_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
