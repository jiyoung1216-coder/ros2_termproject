// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice
#include "ramen_interfaces/msg/detail/ramen_order__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ramen_type`
// Member `toppings`
// Member `sides`
// Member `payment_method`
// Member `currency`
#include "rosidl_runtime_c/string_functions.h"

bool
ramen_interfaces__msg__RamenOrder__init(ramen_interfaces__msg__RamenOrder * msg)
{
  if (!msg) {
    return false;
  }
  // table_number
  // ramen_type
  if (!rosidl_runtime_c__String__init(&msg->ramen_type)) {
    ramen_interfaces__msg__RamenOrder__fini(msg);
    return false;
  }
  // toppings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->toppings, 0)) {
    ramen_interfaces__msg__RamenOrder__fini(msg);
    return false;
  }
  // sides
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sides, 0)) {
    ramen_interfaces__msg__RamenOrder__fini(msg);
    return false;
  }
  // total_price
  // payment_method
  if (!rosidl_runtime_c__String__init(&msg->payment_method)) {
    ramen_interfaces__msg__RamenOrder__fini(msg);
    return false;
  }
  // pay_now
  // currency
  if (!rosidl_runtime_c__String__init(&msg->currency)) {
    ramen_interfaces__msg__RamenOrder__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__msg__RamenOrder__fini(ramen_interfaces__msg__RamenOrder * msg)
{
  if (!msg) {
    return;
  }
  // table_number
  // ramen_type
  rosidl_runtime_c__String__fini(&msg->ramen_type);
  // toppings
  rosidl_runtime_c__String__Sequence__fini(&msg->toppings);
  // sides
  rosidl_runtime_c__String__Sequence__fini(&msg->sides);
  // total_price
  // payment_method
  rosidl_runtime_c__String__fini(&msg->payment_method);
  // pay_now
  // currency
  rosidl_runtime_c__String__fini(&msg->currency);
}

bool
ramen_interfaces__msg__RamenOrder__are_equal(const ramen_interfaces__msg__RamenOrder * lhs, const ramen_interfaces__msg__RamenOrder * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // table_number
  if (lhs->table_number != rhs->table_number) {
    return false;
  }
  // ramen_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ramen_type), &(rhs->ramen_type)))
  {
    return false;
  }
  // toppings
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->toppings), &(rhs->toppings)))
  {
    return false;
  }
  // sides
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->sides), &(rhs->sides)))
  {
    return false;
  }
  // total_price
  if (lhs->total_price != rhs->total_price) {
    return false;
  }
  // payment_method
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->payment_method), &(rhs->payment_method)))
  {
    return false;
  }
  // pay_now
  if (lhs->pay_now != rhs->pay_now) {
    return false;
  }
  // currency
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->currency), &(rhs->currency)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__msg__RamenOrder__copy(
  const ramen_interfaces__msg__RamenOrder * input,
  ramen_interfaces__msg__RamenOrder * output)
{
  if (!input || !output) {
    return false;
  }
  // table_number
  output->table_number = input->table_number;
  // ramen_type
  if (!rosidl_runtime_c__String__copy(
      &(input->ramen_type), &(output->ramen_type)))
  {
    return false;
  }
  // toppings
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->toppings), &(output->toppings)))
  {
    return false;
  }
  // sides
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->sides), &(output->sides)))
  {
    return false;
  }
  // total_price
  output->total_price = input->total_price;
  // payment_method
  if (!rosidl_runtime_c__String__copy(
      &(input->payment_method), &(output->payment_method)))
  {
    return false;
  }
  // pay_now
  output->pay_now = input->pay_now;
  // currency
  if (!rosidl_runtime_c__String__copy(
      &(input->currency), &(output->currency)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__msg__RamenOrder *
ramen_interfaces__msg__RamenOrder__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__msg__RamenOrder * msg = (ramen_interfaces__msg__RamenOrder *)allocator.allocate(sizeof(ramen_interfaces__msg__RamenOrder), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__msg__RamenOrder));
  bool success = ramen_interfaces__msg__RamenOrder__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__msg__RamenOrder__destroy(ramen_interfaces__msg__RamenOrder * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__msg__RamenOrder__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__msg__RamenOrder__Sequence__init(ramen_interfaces__msg__RamenOrder__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__msg__RamenOrder * data = NULL;

  if (size) {
    data = (ramen_interfaces__msg__RamenOrder *)allocator.zero_allocate(size, sizeof(ramen_interfaces__msg__RamenOrder), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__msg__RamenOrder__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__msg__RamenOrder__fini(&data[i - 1]);
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
ramen_interfaces__msg__RamenOrder__Sequence__fini(ramen_interfaces__msg__RamenOrder__Sequence * array)
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
      ramen_interfaces__msg__RamenOrder__fini(&array->data[i]);
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

ramen_interfaces__msg__RamenOrder__Sequence *
ramen_interfaces__msg__RamenOrder__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__msg__RamenOrder__Sequence * array = (ramen_interfaces__msg__RamenOrder__Sequence *)allocator.allocate(sizeof(ramen_interfaces__msg__RamenOrder__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__msg__RamenOrder__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__msg__RamenOrder__Sequence__destroy(ramen_interfaces__msg__RamenOrder__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__msg__RamenOrder__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__msg__RamenOrder__Sequence__are_equal(const ramen_interfaces__msg__RamenOrder__Sequence * lhs, const ramen_interfaces__msg__RamenOrder__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__msg__RamenOrder__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__msg__RamenOrder__Sequence__copy(
  const ramen_interfaces__msg__RamenOrder__Sequence * input,
  ramen_interfaces__msg__RamenOrder__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__msg__RamenOrder);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__msg__RamenOrder * data =
      (ramen_interfaces__msg__RamenOrder *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__msg__RamenOrder__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__msg__RamenOrder__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__msg__RamenOrder__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
