// Generated by gencpp from file roboy_cognition_msgs/ShowInstances.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_SHOWINSTANCES_H
#define ROBOY_COGNITION_MSGS_MESSAGE_SHOWINSTANCES_H

#include <ros/service_traits.h>


#include <roboy_cognition_msgs/ShowInstancesRequest.h>
#include <roboy_cognition_msgs/ShowInstancesResponse.h>


namespace roboy_cognition_msgs
{

struct ShowInstances
{

typedef ShowInstancesRequest Request;
typedef ShowInstancesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ShowInstances
} // namespace roboy_cognition_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_cognition_msgs::ShowInstances > {
  static const char* value()
  {
    return "cdb5eab71cb46cce11dc358585f13c8e";
  }

  static const char* value(const ::roboy_cognition_msgs::ShowInstances&) { return value(); }
};

template<>
struct DataType< ::roboy_cognition_msgs::ShowInstances > {
  static const char* value()
  {
    return "roboy_cognition_msgs/ShowInstances";
  }

  static const char* value(const ::roboy_cognition_msgs::ShowInstances&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_cognition_msgs::ShowInstancesRequest> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::ShowInstances > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::ShowInstancesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::ShowInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::ShowInstancesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::ShowInstancesRequest> should match 
// service_traits::DataType< ::roboy_cognition_msgs::ShowInstances > 
template<>
struct DataType< ::roboy_cognition_msgs::ShowInstancesRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::ShowInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::ShowInstancesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_cognition_msgs::ShowInstancesResponse> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::ShowInstances > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::ShowInstancesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::ShowInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::ShowInstancesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::ShowInstancesResponse> should match 
// service_traits::DataType< ::roboy_cognition_msgs::ShowInstances > 
template<>
struct DataType< ::roboy_cognition_msgs::ShowInstancesResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::ShowInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::ShowInstancesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_SHOWINSTANCES_H