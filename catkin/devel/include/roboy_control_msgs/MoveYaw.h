// Generated by gencpp from file roboy_control_msgs/MoveYaw.msg
// DO NOT EDIT!


#ifndef ROBOY_CONTROL_MSGS_MESSAGE_MOVEYAW_H
#define ROBOY_CONTROL_MSGS_MESSAGE_MOVEYAW_H

#include <ros/service_traits.h>


#include <roboy_control_msgs/MoveYawRequest.h>
#include <roboy_control_msgs/MoveYawResponse.h>


namespace roboy_control_msgs
{

struct MoveYaw
{

typedef MoveYawRequest Request;
typedef MoveYawResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoveYaw
} // namespace roboy_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_control_msgs::MoveYaw > {
  static const char* value()
  {
    return "bc437afb45673379bdb9f299f9cbbc9e";
  }

  static const char* value(const ::roboy_control_msgs::MoveYaw&) { return value(); }
};

template<>
struct DataType< ::roboy_control_msgs::MoveYaw > {
  static const char* value()
  {
    return "roboy_control_msgs/MoveYaw";
  }

  static const char* value(const ::roboy_control_msgs::MoveYaw&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_control_msgs::MoveYawRequest> should match 
// service_traits::MD5Sum< ::roboy_control_msgs::MoveYaw > 
template<>
struct MD5Sum< ::roboy_control_msgs::MoveYawRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_control_msgs::MoveYaw >::value();
  }
  static const char* value(const ::roboy_control_msgs::MoveYawRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_control_msgs::MoveYawRequest> should match 
// service_traits::DataType< ::roboy_control_msgs::MoveYaw > 
template<>
struct DataType< ::roboy_control_msgs::MoveYawRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_control_msgs::MoveYaw >::value();
  }
  static const char* value(const ::roboy_control_msgs::MoveYawRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_control_msgs::MoveYawResponse> should match 
// service_traits::MD5Sum< ::roboy_control_msgs::MoveYaw > 
template<>
struct MD5Sum< ::roboy_control_msgs::MoveYawResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_control_msgs::MoveYaw >::value();
  }
  static const char* value(const ::roboy_control_msgs::MoveYawResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_control_msgs::MoveYawResponse> should match 
// service_traits::DataType< ::roboy_control_msgs::MoveYaw > 
template<>
struct DataType< ::roboy_control_msgs::MoveYawResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_control_msgs::MoveYaw >::value();
  }
  static const char* value(const ::roboy_control_msgs::MoveYawResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_CONTROL_MSGS_MESSAGE_MOVEYAW_H