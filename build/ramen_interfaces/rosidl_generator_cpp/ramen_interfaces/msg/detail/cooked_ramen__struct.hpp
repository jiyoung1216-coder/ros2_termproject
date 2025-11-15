// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ramen_interfaces:msg/CookedRamen.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ramen_interfaces/msg/cooked_ramen.hpp"


#ifndef RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__STRUCT_HPP_
#define RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'order'
#include "ramen_interfaces/msg/detail/ramen_order__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ramen_interfaces__msg__CookedRamen __attribute__((deprecated))
#else
# define DEPRECATED__ramen_interfaces__msg__CookedRamen __declspec(deprecated)
#endif

namespace ramen_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CookedRamen_
{
  using Type = CookedRamen_<ContainerAllocator>;

  explicit CookedRamen_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook_status = "";
    }
  }

  explicit CookedRamen_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order(_alloc, _init),
    cook_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cook_status = "";
    }
  }

  // field types and members
  using _order_type =
    ramen_interfaces::msg::RamenOrder_<ContainerAllocator>;
  _order_type order;
  using _cook_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cook_status_type cook_status;

  // setters for named parameter idiom
  Type & set__order(
    const ramen_interfaces::msg::RamenOrder_<ContainerAllocator> & _arg)
  {
    this->order = _arg;
    return *this;
  }
  Type & set__cook_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cook_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ramen_interfaces::msg::CookedRamen_<ContainerAllocator> *;
  using ConstRawPtr =
    const ramen_interfaces::msg::CookedRamen_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ramen_interfaces::msg::CookedRamen_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ramen_interfaces::msg::CookedRamen_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ramen_interfaces__msg__CookedRamen
    std::shared_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ramen_interfaces__msg__CookedRamen
    std::shared_ptr<ramen_interfaces::msg::CookedRamen_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CookedRamen_ & other) const
  {
    if (this->order != other.order) {
      return false;
    }
    if (this->cook_status != other.cook_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CookedRamen_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CookedRamen_

// alias to use template instance with default allocator
using CookedRamen =
  ramen_interfaces::msg::CookedRamen_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ramen_interfaces

#endif  // RAMEN_INTERFACES__MSG__DETAIL__COOKED_RAMEN__STRUCT_HPP_
