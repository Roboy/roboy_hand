// Generated by gencpp from file roboy_middleware_msgs/JointController.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_JOINTCONTROLLER_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_JOINTCONTROLLER_H

#include <ros/service_traits.h>


#include <roboy_middleware_msgs/JointControllerRequest.h>
#include <roboy_middleware_msgs/JointControllerResponse.h>


namespace roboy_middleware_msgs
{

struct JointController
{

typedef JointControllerRequest Request;
typedef JointControllerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct JointController
} // namespace roboy_middleware_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_middleware_msgs::JointController > {
  static const char* value()
  {
    return "8c2b216fbd74af3eb65d1ca2f72cefc3";
  }

  static const char* value(const ::roboy_middleware_msgs::JointController&) { return value(); }
};

template<>
struct DataType< ::roboy_middleware_msgs::JointController > {
  static const char* value()
  {
    return "roboy_middleware_msgs/JointController";
  }

  static const char* value(const ::roboy_middleware_msgs::JointController&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_middleware_msgs::JointControllerRequest> should match 
// service_traits::MD5Sum< ::roboy_middleware_msgs::JointController > 
template<>
struct MD5Sum< ::roboy_middleware_msgs::JointControllerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_middleware_msgs::JointController >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::JointControllerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_middleware_msgs::JointControllerRequest> should match 
// service_traits::DataType< ::roboy_middleware_msgs::JointController > 
template<>
struct DataType< ::roboy_middleware_msgs::JointControllerRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_middleware_msgs::JointController >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::JointControllerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_middleware_msgs::JointControllerResponse> should match 
// service_traits::MD5Sum< ::roboy_middleware_msgs::JointController > 
template<>
struct MD5Sum< ::roboy_middleware_msgs::JointControllerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_middleware_msgs::JointController >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::JointControllerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_middleware_msgs::JointControllerResponse> should match 
// service_traits::DataType< ::roboy_middleware_msgs::JointController > 
template<>
struct DataType< ::roboy_middleware_msgs::JointControllerResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_middleware_msgs::JointController >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::JointControllerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_JOINTCONTROLLER_H
