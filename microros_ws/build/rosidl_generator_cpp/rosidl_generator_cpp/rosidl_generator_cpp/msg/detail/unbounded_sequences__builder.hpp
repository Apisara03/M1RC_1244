// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_generator_cpp:msg/UnboundedSequences.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__DETAIL__UNBOUNDED_SEQUENCES__BUILDER_HPP_
#define ROSIDL_GENERATOR_CPP__MSG__DETAIL__UNBOUNDED_SEQUENCES__BUILDER_HPP_

#include "rosidl_generator_cpp/msg/detail/unbounded_sequences__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_generator_cpp
{

namespace msg
{

namespace builder
{

class Init_UnboundedSequences_alignment_check
{
public:
  explicit Init_UnboundedSequences_alignment_check(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  ::rosidl_generator_cpp::msg::UnboundedSequences alignment_check(::rosidl_generator_cpp::msg::UnboundedSequences::_alignment_check_type arg)
  {
    msg_.alignment_check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_string_values_default
{
public:
  explicit Init_UnboundedSequences_string_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_alignment_check string_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_string_values_default_type arg)
  {
    msg_.string_values_default = std::move(arg);
    return Init_UnboundedSequences_alignment_check(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint64_values_default
{
public:
  explicit Init_UnboundedSequences_uint64_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_string_values_default uint64_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_uint64_values_default_type arg)
  {
    msg_.uint64_values_default = std::move(arg);
    return Init_UnboundedSequences_string_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int64_values_default
{
public:
  explicit Init_UnboundedSequences_int64_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint64_values_default int64_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_int64_values_default_type arg)
  {
    msg_.int64_values_default = std::move(arg);
    return Init_UnboundedSequences_uint64_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint32_values_default
{
public:
  explicit Init_UnboundedSequences_uint32_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int64_values_default uint32_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_uint32_values_default_type arg)
  {
    msg_.uint32_values_default = std::move(arg);
    return Init_UnboundedSequences_int64_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int32_values_default
{
public:
  explicit Init_UnboundedSequences_int32_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint32_values_default int32_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_int32_values_default_type arg)
  {
    msg_.int32_values_default = std::move(arg);
    return Init_UnboundedSequences_uint32_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint16_values_default
{
public:
  explicit Init_UnboundedSequences_uint16_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int32_values_default uint16_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_uint16_values_default_type arg)
  {
    msg_.uint16_values_default = std::move(arg);
    return Init_UnboundedSequences_int32_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int16_values_default
{
public:
  explicit Init_UnboundedSequences_int16_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint16_values_default int16_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_int16_values_default_type arg)
  {
    msg_.int16_values_default = std::move(arg);
    return Init_UnboundedSequences_uint16_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint8_values_default
{
public:
  explicit Init_UnboundedSequences_uint8_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int16_values_default uint8_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_uint8_values_default_type arg)
  {
    msg_.uint8_values_default = std::move(arg);
    return Init_UnboundedSequences_int16_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int8_values_default
{
public:
  explicit Init_UnboundedSequences_int8_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint8_values_default int8_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_int8_values_default_type arg)
  {
    msg_.int8_values_default = std::move(arg);
    return Init_UnboundedSequences_uint8_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_float64_values_default
{
public:
  explicit Init_UnboundedSequences_float64_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int8_values_default float64_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_float64_values_default_type arg)
  {
    msg_.float64_values_default = std::move(arg);
    return Init_UnboundedSequences_int8_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_float32_values_default
{
public:
  explicit Init_UnboundedSequences_float32_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_float64_values_default float32_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_float32_values_default_type arg)
  {
    msg_.float32_values_default = std::move(arg);
    return Init_UnboundedSequences_float64_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_char_values_default
{
public:
  explicit Init_UnboundedSequences_char_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_float32_values_default char_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_char_values_default_type arg)
  {
    msg_.char_values_default = std::move(arg);
    return Init_UnboundedSequences_float32_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_byte_values_default
{
public:
  explicit Init_UnboundedSequences_byte_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_char_values_default byte_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_byte_values_default_type arg)
  {
    msg_.byte_values_default = std::move(arg);
    return Init_UnboundedSequences_char_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_bool_values_default
{
public:
  explicit Init_UnboundedSequences_bool_values_default(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_byte_values_default bool_values_default(::rosidl_generator_cpp::msg::UnboundedSequences::_bool_values_default_type arg)
  {
    msg_.bool_values_default = std::move(arg);
    return Init_UnboundedSequences_byte_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_defaults_values
{
public:
  explicit Init_UnboundedSequences_defaults_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_bool_values_default defaults_values(::rosidl_generator_cpp::msg::UnboundedSequences::_defaults_values_type arg)
  {
    msg_.defaults_values = std::move(arg);
    return Init_UnboundedSequences_bool_values_default(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_constants_values
{
public:
  explicit Init_UnboundedSequences_constants_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_defaults_values constants_values(::rosidl_generator_cpp::msg::UnboundedSequences::_constants_values_type arg)
  {
    msg_.constants_values = std::move(arg);
    return Init_UnboundedSequences_defaults_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_basic_types_values
{
public:
  explicit Init_UnboundedSequences_basic_types_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_constants_values basic_types_values(::rosidl_generator_cpp::msg::UnboundedSequences::_basic_types_values_type arg)
  {
    msg_.basic_types_values = std::move(arg);
    return Init_UnboundedSequences_constants_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_string_values
{
public:
  explicit Init_UnboundedSequences_string_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_basic_types_values string_values(::rosidl_generator_cpp::msg::UnboundedSequences::_string_values_type arg)
  {
    msg_.string_values = std::move(arg);
    return Init_UnboundedSequences_basic_types_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint64_values
{
public:
  explicit Init_UnboundedSequences_uint64_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_string_values uint64_values(::rosidl_generator_cpp::msg::UnboundedSequences::_uint64_values_type arg)
  {
    msg_.uint64_values = std::move(arg);
    return Init_UnboundedSequences_string_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int64_values
{
public:
  explicit Init_UnboundedSequences_int64_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint64_values int64_values(::rosidl_generator_cpp::msg::UnboundedSequences::_int64_values_type arg)
  {
    msg_.int64_values = std::move(arg);
    return Init_UnboundedSequences_uint64_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint32_values
{
public:
  explicit Init_UnboundedSequences_uint32_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int64_values uint32_values(::rosidl_generator_cpp::msg::UnboundedSequences::_uint32_values_type arg)
  {
    msg_.uint32_values = std::move(arg);
    return Init_UnboundedSequences_int64_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int32_values
{
public:
  explicit Init_UnboundedSequences_int32_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint32_values int32_values(::rosidl_generator_cpp::msg::UnboundedSequences::_int32_values_type arg)
  {
    msg_.int32_values = std::move(arg);
    return Init_UnboundedSequences_uint32_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint16_values
{
public:
  explicit Init_UnboundedSequences_uint16_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int32_values uint16_values(::rosidl_generator_cpp::msg::UnboundedSequences::_uint16_values_type arg)
  {
    msg_.uint16_values = std::move(arg);
    return Init_UnboundedSequences_int32_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int16_values
{
public:
  explicit Init_UnboundedSequences_int16_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint16_values int16_values(::rosidl_generator_cpp::msg::UnboundedSequences::_int16_values_type arg)
  {
    msg_.int16_values = std::move(arg);
    return Init_UnboundedSequences_uint16_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_uint8_values
{
public:
  explicit Init_UnboundedSequences_uint8_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int16_values uint8_values(::rosidl_generator_cpp::msg::UnboundedSequences::_uint8_values_type arg)
  {
    msg_.uint8_values = std::move(arg);
    return Init_UnboundedSequences_int16_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_int8_values
{
public:
  explicit Init_UnboundedSequences_int8_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_uint8_values int8_values(::rosidl_generator_cpp::msg::UnboundedSequences::_int8_values_type arg)
  {
    msg_.int8_values = std::move(arg);
    return Init_UnboundedSequences_uint8_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_float64_values
{
public:
  explicit Init_UnboundedSequences_float64_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_int8_values float64_values(::rosidl_generator_cpp::msg::UnboundedSequences::_float64_values_type arg)
  {
    msg_.float64_values = std::move(arg);
    return Init_UnboundedSequences_int8_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_float32_values
{
public:
  explicit Init_UnboundedSequences_float32_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_float64_values float32_values(::rosidl_generator_cpp::msg::UnboundedSequences::_float32_values_type arg)
  {
    msg_.float32_values = std::move(arg);
    return Init_UnboundedSequences_float64_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_char_values
{
public:
  explicit Init_UnboundedSequences_char_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_float32_values char_values(::rosidl_generator_cpp::msg::UnboundedSequences::_char_values_type arg)
  {
    msg_.char_values = std::move(arg);
    return Init_UnboundedSequences_float32_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_byte_values
{
public:
  explicit Init_UnboundedSequences_byte_values(::rosidl_generator_cpp::msg::UnboundedSequences & msg)
  : msg_(msg)
  {}
  Init_UnboundedSequences_char_values byte_values(::rosidl_generator_cpp::msg::UnboundedSequences::_byte_values_type arg)
  {
    msg_.byte_values = std::move(arg);
    return Init_UnboundedSequences_char_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

class Init_UnboundedSequences_bool_values
{
public:
  Init_UnboundedSequences_bool_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnboundedSequences_byte_values bool_values(::rosidl_generator_cpp::msg::UnboundedSequences::_bool_values_type arg)
  {
    msg_.bool_values = std::move(arg);
    return Init_UnboundedSequences_byte_values(msg_);
  }

private:
  ::rosidl_generator_cpp::msg::UnboundedSequences msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_generator_cpp::msg::UnboundedSequences>()
{
  return rosidl_generator_cpp::msg::builder::Init_UnboundedSequences_bool_values();
}

}  // namespace rosidl_generator_cpp

#endif  // ROSIDL_GENERATOR_CPP__MSG__DETAIL__UNBOUNDED_SEQUENCES__BUILDER_HPP_
