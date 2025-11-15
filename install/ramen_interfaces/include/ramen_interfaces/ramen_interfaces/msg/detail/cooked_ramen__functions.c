// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice
#include "ramen_interfaces/msg/detail/cooked_ramen__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `order`
#include "ramen_interfaces/msg/detail/ramen_order__functions.h"
// Member `cook_status`
#include "rosidl_runtime_c/string_functions.h"

bool
ramen_interfaces__msg__CookedRamen__init(ramen_interfaces__msg__CookedRamen * msg)
{
  if (!msg) {
    return false;
  }
  // order
  if (!ramen_interfaces__msg__RamenOrder__init(&msg->order)) {
    ramen_interfaces__msg__CookedRamen__fini(msg);
    return false;
  }
  // cook_status
  if (!rosidl_runtime_c__String__init(&msg->cook_status)) {
    ramen_interfaces__msg__CookedRamen__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__msg__CookedRamen__fini(ramen_interfaces__msg__CookedRamen * msg)
{
  if (!msg) {
    return;
  }
  // order
  ramen_interfaces__msg__RamenOrder__fini(&msg->order);
  // cook_status
  rosidl_runtime_c__String__fini(&msg->cook_status);
}

bool
ramen_interfaces__msg__CookedRamen__are_equal(const ramen_interfaces__msg__CookedRamen * lhs, const ramen_interfaces__msg__CookedRamen * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (!ramen_interfaces__msg__RamenOrder__are_equal(
      &(lhs->order), &(rhs->order)))
  {
    return false;
  }
  // cook_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cook_status), &(rhs->cook_status)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__msg__CookedRamen__copy(
  const ramen_interfaces__msg__CookedRamen * input,
  ramen_interfaces__msg__CookedRamen * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  if (!ramen_interfaces__msg__RamenOrder__copy(
      &(input->order), &(output->order)))
  {
    return false;
  }
  // cook_status
  if (!rosidl_runtime_c__String__copy(
      &(input->cook_status), &(output->cook_status)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__msg__CookedRamen *
ramen_interfaces__msg__CookedRamen__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__msg__CookedRamen * msg = (ramen_interfaces__msg__CookedRamen *)allocator.allocate(sizeof(ramen_interfaces__msg__CookedRamen), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__msg__CookedRamen));
  bool success = ramen_interfaces__msg__CookedRamen__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__msg__CookedRamen__destroy(ramen_interfaces__msg__CookedRamen * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__msg__CookedRamen__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__msg__CookedRamen__Sequence__init(ramen_interfaces__msg__CookedRamen__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__msg__CookedRamen * data = NULL;

  if (size) {
    data = (ramen_interfaces__msg__CookedRamen *)allocator.zero_allocate(size, sizeof(ramen_interfaces__msg__CookedRamen), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__msg__CookedRamen__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__msg__CookedRamen__fini(&data[i - 1]);
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
ramen_interfaces__msg__CookedRamen__Sequence__fini(ramen_interfaces__msg__CookedRamen__Sequence * array)
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
      ramen_interfaces__msg__CookedRamen__fini(&array->data[i]);
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

ramen_interfaces__msg__CookedRamen__Sequence *
ramen_interfaces__msg__CookedRamen__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__msg__CookedRamen__Sequence * array = (ramen_interfaces__msg__CookedRamen__Sequence *)allocator.allocate(sizeof(ramen_interfaces__msg__CookedRamen__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__msg__CookedRamen__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__msg__CookedRamen__Sequence__destroy(ramen_interfaces__msg__CookedRamen__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__msg__CookedRamen__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__msg__CookedRamen__Sequence__are_equal(const ramen_interfaces__msg__CookedRamen__Sequence * lhs, const ramen_interfaces__msg__CookedRamen__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__msg__CookedRamen__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__msg__CookedRamen__Sequence__copy(
  const ramen_interfaces__msg__CookedRamen__Sequence * input,
  ramen_interfaces__msg__CookedRamen__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__msg__CookedRamen);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__msg__CookedRamen * data =
      (ramen_interfaces__msg__CookedRamen *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__msg__CookedRamen__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__msg__CookedRamen__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__msg__CookedRamen__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
