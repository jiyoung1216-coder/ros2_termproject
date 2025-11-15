// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ramen_interfaces:msg/RamenOrder.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/msg/ramen_order.hpp"


#ifndef RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__STRUCT_HPP_
#define RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ramen_interfaces__msg__RamenOrder __attribute__((deprecated))
#else
# define DEPRECATED__ramen_interfaces__msg__RamenOrder __declspec(deprecated)
#endif

namespace ramen_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RamenOrder_
{
  using Type = RamenOrder_<ContainerAllocator>;

  explicit RamenOrder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->ramen_type = "";
      this->total_price = 0l;
      this->payment_method = "";
      this->pay_now = false;
      this->currency = "";
    }
  }

  explicit RamenOrder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ramen_type(_alloc),
    payment_method(_alloc),
    currency(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_number = 0l;
      this->ramen_type = "";
      this->total_price = 0l;
      this->payment_method = "";
      this->pay_now = false;
      this->currency = "";
    }
  }

  // field types and members
  using _table_number_type =
    int32_t;
  _table_number_type table_number;
  using _ramen_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ramen_type_type ramen_type;
  using _toppings_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _toppings_type toppings;
  using _sides_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _sides_type sides;
  using _total_price_type =
    int32_t;
  _total_price_type total_price;
  using _payment_method_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payment_method_type payment_method;
  using _pay_now_type =
    bool;
  _pay_now_type pay_now;
  using _currency_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _currency_type currency;

  // setters for named parameter idiom
  Type & set__table_number(
    const int32_t & _arg)
  {
    this->table_number = _arg;
    return *this;
  }
  Type & set__ramen_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ramen_type = _arg;
    return *this;
  }
  Type & set__toppings(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->toppings = _arg;
    return *this;
  }
  Type & set__sides(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->sides = _arg;
    return *this;
  }
  Type & set__total_price(
    const int32_t & _arg)
  {
    this->total_price = _arg;
    return *this;
  }
  Type & set__payment_method(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payment_method = _arg;
    return *this;
  }
  Type & set__pay_now(
    const bool & _arg)
  {
    this->pay_now = _arg;
    return *this;
  }
  Type & set__currency(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->currency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ramen_interfaces::msg::RamenOrder_<ContainerAllocator> *;
  using ConstRawPtr =
    const ramen_interfaces::msg::RamenOrder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ramen_interfaces::msg::RamenOrder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ramen_interfaces::msg::RamenOrder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ramen_interfaces__msg__RamenOrder
    std::shared_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ramen_interfaces__msg__RamenOrder
    std::shared_ptr<ramen_interfaces::msg::RamenOrder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RamenOrder_ & other) const
  {
    if (this->table_number != other.table_number) {
      return false;
    }
    if (this->ramen_type != other.ramen_type) {
      return false;
    }
    if (this->toppings != other.toppings) {
      return false;
    }
    if (this->sides != other.sides) {
      return false;
    }
    if (this->total_price != other.total_price) {
      return false;
    }
    if (this->payment_method != other.payment_method) {
      return false;
    }
    if (this->pay_now != other.pay_now) {
      return false;
    }
    if (this->currency != other.currency) {
      return false;
    }
    return true;
  }
  bool operator!=(const RamenOrder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RamenOrder_

// alias to use template instance with default allocator
using RamenOrder =
  ramen_interfaces::msg::RamenOrder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ramen_interfaces

#endif  // RAMEN_INTERFACES__MSG__DETAIL__RAMEN_ORDER__STRUCT_HPP_
