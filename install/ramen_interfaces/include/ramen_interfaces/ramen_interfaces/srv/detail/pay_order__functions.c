// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ramen_interfaces:srv/PayOrder.idl
// generated code does not contain a copyright notice
#include "ramen_interfaces/srv/detail/pay_order__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ramen_type`
// Member `toppings`
// Member `sides`
#include "rosidl_runtime_c/string_functions.h"

bool
ramen_interfaces__srv__PayOrder_Request__init(ramen_interfaces__srv__PayOrder_Request * msg)
{
  if (!msg) {
    return false;
  }
  // table_number
  // ramen_type
  if (!rosidl_runtime_c__String__init(&msg->ramen_type)) {
    ramen_interfaces__srv__PayOrder_Request__fini(msg);
    return false;
  }
  // toppings
  if (!rosidl_runtime_c__String__Sequence__init(&msg->toppings, 0)) {
    ramen_interfaces__srv__PayOrder_Request__fini(msg);
    return false;
  }
  // sides
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sides, 0)) {
    ramen_interfaces__srv__PayOrder_Request__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__srv__PayOrder_Request__fini(ramen_interfaces__srv__PayOrder_Request * msg)
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
}

bool
ramen_interfaces__srv__PayOrder_Request__are_equal(const ramen_interfaces__srv__PayOrder_Request * lhs, const ramen_interfaces__srv__PayOrder_Request * rhs)
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
  return true;
}

bool
ramen_interfaces__srv__PayOrder_Request__copy(
  const ramen_interfaces__srv__PayOrder_Request * input,
  ramen_interfaces__srv__PayOrder_Request * output)
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
  return true;
}

ramen_interfaces__srv__PayOrder_Request *
ramen_interfaces__srv__PayOrder_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Request * msg = (ramen_interfaces__srv__PayOrder_Request *)allocator.allocate(sizeof(ramen_interfaces__srv__PayOrder_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__srv__PayOrder_Request));
  bool success = ramen_interfaces__srv__PayOrder_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__srv__PayOrder_Request__destroy(ramen_interfaces__srv__PayOrder_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__srv__PayOrder_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__srv__PayOrder_Request__Sequence__init(ramen_interfaces__srv__PayOrder_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Request * data = NULL;

  if (size) {
    data = (ramen_interfaces__srv__PayOrder_Request *)allocator.zero_allocate(size, sizeof(ramen_interfaces__srv__PayOrder_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__srv__PayOrder_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__srv__PayOrder_Request__fini(&data[i - 1]);
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
ramen_interfaces__srv__PayOrder_Request__Sequence__fini(ramen_interfaces__srv__PayOrder_Request__Sequence * array)
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
      ramen_interfaces__srv__PayOrder_Request__fini(&array->data[i]);
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

ramen_interfaces__srv__PayOrder_Request__Sequence *
ramen_interfaces__srv__PayOrder_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Request__Sequence * array = (ramen_interfaces__srv__PayOrder_Request__Sequence *)allocator.allocate(sizeof(ramen_interfaces__srv__PayOrder_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__srv__PayOrder_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__srv__PayOrder_Request__Sequence__destroy(ramen_interfaces__srv__PayOrder_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__srv__PayOrder_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__srv__PayOrder_Request__Sequence__are_equal(const ramen_interfaces__srv__PayOrder_Request__Sequence * lhs, const ramen_interfaces__srv__PayOrder_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__srv__PayOrder_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__srv__PayOrder_Request__Sequence__copy(
  const ramen_interfaces__srv__PayOrder_Request__Sequence * input,
  ramen_interfaces__srv__PayOrder_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__srv__PayOrder_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__srv__PayOrder_Request * data =
      (ramen_interfaces__srv__PayOrder_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__srv__PayOrder_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__srv__PayOrder_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__srv__PayOrder_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ramen_interfaces__srv__PayOrder_Response__init(ramen_interfaces__srv__PayOrder_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // total_price
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ramen_interfaces__srv__PayOrder_Response__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__srv__PayOrder_Response__fini(ramen_interfaces__srv__PayOrder_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // total_price
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ramen_interfaces__srv__PayOrder_Response__are_equal(const ramen_interfaces__srv__PayOrder_Response * lhs, const ramen_interfaces__srv__PayOrder_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // total_price
  if (lhs->total_price != rhs->total_price) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__srv__PayOrder_Response__copy(
  const ramen_interfaces__srv__PayOrder_Response * input,
  ramen_interfaces__srv__PayOrder_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // total_price
  output->total_price = input->total_price;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__srv__PayOrder_Response *
ramen_interfaces__srv__PayOrder_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Response * msg = (ramen_interfaces__srv__PayOrder_Response *)allocator.allocate(sizeof(ramen_interfaces__srv__PayOrder_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__srv__PayOrder_Response));
  bool success = ramen_interfaces__srv__PayOrder_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__srv__PayOrder_Response__destroy(ramen_interfaces__srv__PayOrder_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__srv__PayOrder_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__srv__PayOrder_Response__Sequence__init(ramen_interfaces__srv__PayOrder_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Response * data = NULL;

  if (size) {
    data = (ramen_interfaces__srv__PayOrder_Response *)allocator.zero_allocate(size, sizeof(ramen_interfaces__srv__PayOrder_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__srv__PayOrder_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__srv__PayOrder_Response__fini(&data[i - 1]);
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
ramen_interfaces__srv__PayOrder_Response__Sequence__fini(ramen_interfaces__srv__PayOrder_Response__Sequence * array)
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
      ramen_interfaces__srv__PayOrder_Response__fini(&array->data[i]);
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

ramen_interfaces__srv__PayOrder_Response__Sequence *
ramen_interfaces__srv__PayOrder_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Response__Sequence * array = (ramen_interfaces__srv__PayOrder_Response__Sequence *)allocator.allocate(sizeof(ramen_interfaces__srv__PayOrder_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__srv__PayOrder_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__srv__PayOrder_Response__Sequence__destroy(ramen_interfaces__srv__PayOrder_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__srv__PayOrder_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__srv__PayOrder_Response__Sequence__are_equal(const ramen_interfaces__srv__PayOrder_Response__Sequence * lhs, const ramen_interfaces__srv__PayOrder_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__srv__PayOrder_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__srv__PayOrder_Response__Sequence__copy(
  const ramen_interfaces__srv__PayOrder_Response__Sequence * input,
  ramen_interfaces__srv__PayOrder_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__srv__PayOrder_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__srv__PayOrder_Response * data =
      (ramen_interfaces__srv__PayOrder_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__srv__PayOrder_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__srv__PayOrder_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__srv__PayOrder_Response__copy(
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
// #include "ramen_interfaces/srv/detail/pay_order__functions.h"

bool
ramen_interfaces__srv__PayOrder_Event__init(ramen_interfaces__srv__PayOrder_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ramen_interfaces__srv__PayOrder_Event__fini(msg);
    return false;
  }
  // request
  if (!ramen_interfaces__srv__PayOrder_Request__Sequence__init(&msg->request, 0)) {
    ramen_interfaces__srv__PayOrder_Event__fini(msg);
    return false;
  }
  // response
  if (!ramen_interfaces__srv__PayOrder_Response__Sequence__init(&msg->response, 0)) {
    ramen_interfaces__srv__PayOrder_Event__fini(msg);
    return false;
  }
  return true;
}

void
ramen_interfaces__srv__PayOrder_Event__fini(ramen_interfaces__srv__PayOrder_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ramen_interfaces__srv__PayOrder_Request__Sequence__fini(&msg->request);
  // response
  ramen_interfaces__srv__PayOrder_Response__Sequence__fini(&msg->response);
}

bool
ramen_interfaces__srv__PayOrder_Event__are_equal(const ramen_interfaces__srv__PayOrder_Event * lhs, const ramen_interfaces__srv__PayOrder_Event * rhs)
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
  if (!ramen_interfaces__srv__PayOrder_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ramen_interfaces__srv__PayOrder_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ramen_interfaces__srv__PayOrder_Event__copy(
  const ramen_interfaces__srv__PayOrder_Event * input,
  ramen_interfaces__srv__PayOrder_Event * output)
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
  if (!ramen_interfaces__srv__PayOrder_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ramen_interfaces__srv__PayOrder_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ramen_interfaces__srv__PayOrder_Event *
ramen_interfaces__srv__PayOrder_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Event * msg = (ramen_interfaces__srv__PayOrder_Event *)allocator.allocate(sizeof(ramen_interfaces__srv__PayOrder_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ramen_interfaces__srv__PayOrder_Event));
  bool success = ramen_interfaces__srv__PayOrder_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ramen_interfaces__srv__PayOrder_Event__destroy(ramen_interfaces__srv__PayOrder_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ramen_interfaces__srv__PayOrder_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ramen_interfaces__srv__PayOrder_Event__Sequence__init(ramen_interfaces__srv__PayOrder_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Event * data = NULL;

  if (size) {
    data = (ramen_interfaces__srv__PayOrder_Event *)allocator.zero_allocate(size, sizeof(ramen_interfaces__srv__PayOrder_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ramen_interfaces__srv__PayOrder_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ramen_interfaces__srv__PayOrder_Event__fini(&data[i - 1]);
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
ramen_interfaces__srv__PayOrder_Event__Sequence__fini(ramen_interfaces__srv__PayOrder_Event__Sequence * array)
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
      ramen_interfaces__srv__PayOrder_Event__fini(&array->data[i]);
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

ramen_interfaces__srv__PayOrder_Event__Sequence *
ramen_interfaces__srv__PayOrder_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ramen_interfaces__srv__PayOrder_Event__Sequence * array = (ramen_interfaces__srv__PayOrder_Event__Sequence *)allocator.allocate(sizeof(ramen_interfaces__srv__PayOrder_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ramen_interfaces__srv__PayOrder_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ramen_interfaces__srv__PayOrder_Event__Sequence__destroy(ramen_interfaces__srv__PayOrder_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ramen_interfaces__srv__PayOrder_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ramen_interfaces__srv__PayOrder_Event__Sequence__are_equal(const ramen_interfaces__srv__PayOrder_Event__Sequence * lhs, const ramen_interfaces__srv__PayOrder_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ramen_interfaces__srv__PayOrder_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ramen_interfaces__srv__PayOrder_Event__Sequence__copy(
  const ramen_interfaces__srv__PayOrder_Event__Sequence * input,
  ramen_interfaces__srv__PayOrder_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ramen_interfaces__srv__PayOrder_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ramen_interfaces__srv__PayOrder_Event * data =
      (ramen_interfaces__srv__PayOrder_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ramen_interfaces__srv__PayOrder_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ramen_interfaces__srv__PayOrder_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ramen_interfaces__srv__PayOrder_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
