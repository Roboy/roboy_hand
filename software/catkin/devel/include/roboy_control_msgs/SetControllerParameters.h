// Generated by gencpp from file roboy_control_msgs/SetControllerParameters.msg
// DO NOT EDIT!


#ifndef ROBOY_CONTROL_MSGS_MESSAGE_SETCONTROLLERPARAMETERS_H
#define ROBOY_CONTROL_MSGS_MESSAGE_SETCONTROLLERPARAMETERS_H

#include <ros/service_traits.h>


#include <roboy_control_msgs/SetControllerParametersRequest.h>
#include <roboy_control_msgs/SetControllerParametersResponse.h>


namespace roboy_control_msgs
{

struct SetControllerParameters
{

typedef SetControllerParametersRequest Request;
typedef SetControllerParametersResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetControllerParameters
} // namespace roboy_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_control_msgs::SetControllerParameters > {
  static const char* value()
  {
    return "9f574aefbd146010c8b1b88ba0c9d622";
  }

  static const char* value(const ::roboy_control_msgs::SetControllerParameters&) { return value(); }
};

template<>
struct DataType< ::roboy_control_msgs::SetControllerParameters > {
  static const char* value()
  {
    return "roboy_control_msgs/SetControllerParameters";
  }

  static const char* value(const ::roboy_control_msgs::SetControllerParameters&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_control_msgs::SetControllerParametersRequest> should match 
// service_traits::MD5Sum< ::roboy_control_msgs::SetControllerParameters > 
template<>
struct MD5Sum< ::roboy_control_msgs::SetControllerParametersRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_control_msgs::SetControllerParameters >::value();
  }
  static const char* value(const ::roboy_control_msgs::SetControllerParametersRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_control_msgs::SetControllerParametersRequest> should match 
// service_traits::DataType< ::roboy_control_msgs::SetControllerParameters > 
template<>
struct DataType< ::roboy_control_msgs::SetControllerParametersRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_control_msgs::SetControllerParameters >::value();
  }
  static const char* value(const ::roboy_control_msgs::SetControllerParametersRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_control_msgs::SetControllerParametersResponse> should match 
// service_traits::MD5Sum< ::roboy_control_msgs::SetControllerParameters > 
template<>
struct MD5Sum< ::roboy_control_msgs::SetControllerParametersResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_control_msgs::SetControllerParameters >::value();
  }
  static const char* value(const ::roboy_control_msgs::SetControllerParametersResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_control_msgs::SetControllerParametersResponse> should match 
// service_traits::DataType< ::roboy_control_msgs::SetControllerParameters > 
template<>
struct DataType< ::roboy_control_msgs::SetControllerParametersResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_control_msgs::SetControllerParameters >::value();
  }
  static const char* value(const ::roboy_control_msgs::SetControllerParametersResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_CONTROL_MSGS_MESSAGE_SETCONTROLLERPARAMETERS_H
