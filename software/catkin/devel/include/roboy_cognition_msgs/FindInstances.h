// Generated by gencpp from file roboy_cognition_msgs/FindInstances.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_FINDINSTANCES_H
#define ROBOY_COGNITION_MSGS_MESSAGE_FINDINSTANCES_H

#include <ros/service_traits.h>


#include <roboy_cognition_msgs/FindInstancesRequest.h>
#include <roboy_cognition_msgs/FindInstancesResponse.h>


namespace roboy_cognition_msgs
{

struct FindInstances
{

typedef FindInstancesRequest Request;
typedef FindInstancesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FindInstances
} // namespace roboy_cognition_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_cognition_msgs::FindInstances > {
  static const char* value()
  {
    return "7a424b6de2ab577e112c2faf018865de";
  }

  static const char* value(const ::roboy_cognition_msgs::FindInstances&) { return value(); }
};

template<>
struct DataType< ::roboy_cognition_msgs::FindInstances > {
  static const char* value()
  {
    return "roboy_cognition_msgs/FindInstances";
  }

  static const char* value(const ::roboy_cognition_msgs::FindInstances&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_cognition_msgs::FindInstancesRequest> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::FindInstances > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::FindInstancesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::FindInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::FindInstancesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::FindInstancesRequest> should match 
// service_traits::DataType< ::roboy_cognition_msgs::FindInstances > 
template<>
struct DataType< ::roboy_cognition_msgs::FindInstancesRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::FindInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::FindInstancesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_cognition_msgs::FindInstancesResponse> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::FindInstances > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::FindInstancesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::FindInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::FindInstancesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::FindInstancesResponse> should match 
// service_traits::DataType< ::roboy_cognition_msgs::FindInstances > 
template<>
struct DataType< ::roboy_cognition_msgs::FindInstancesResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::FindInstances >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::FindInstancesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_FINDINSTANCES_H
