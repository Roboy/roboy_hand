// Generated by gencpp from file roboy_simulation_msgs/UpdateControllerParameters.msg
// DO NOT EDIT!


#ifndef ROBOY_SIMULATION_MSGS_MESSAGE_UPDATECONTROLLERPARAMETERS_H
#define ROBOY_SIMULATION_MSGS_MESSAGE_UPDATECONTROLLERPARAMETERS_H

#include <ros/service_traits.h>


#include <roboy_simulation_msgs/UpdateControllerParametersRequest.h>
#include <roboy_simulation_msgs/UpdateControllerParametersResponse.h>


namespace roboy_simulation_msgs
{

struct UpdateControllerParameters
{

typedef UpdateControllerParametersRequest Request;
typedef UpdateControllerParametersResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UpdateControllerParameters
} // namespace roboy_simulation_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_simulation_msgs::UpdateControllerParameters > {
  static const char* value()
  {
    return "b756c0585632134411ae7db8d90667b1";
  }

  static const char* value(const ::roboy_simulation_msgs::UpdateControllerParameters&) { return value(); }
};

template<>
struct DataType< ::roboy_simulation_msgs::UpdateControllerParameters > {
  static const char* value()
  {
    return "roboy_simulation_msgs/UpdateControllerParameters";
  }

  static const char* value(const ::roboy_simulation_msgs::UpdateControllerParameters&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_simulation_msgs::UpdateControllerParametersRequest> should match 
// service_traits::MD5Sum< ::roboy_simulation_msgs::UpdateControllerParameters > 
template<>
struct MD5Sum< ::roboy_simulation_msgs::UpdateControllerParametersRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_simulation_msgs::UpdateControllerParameters >::value();
  }
  static const char* value(const ::roboy_simulation_msgs::UpdateControllerParametersRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_simulation_msgs::UpdateControllerParametersRequest> should match 
// service_traits::DataType< ::roboy_simulation_msgs::UpdateControllerParameters > 
template<>
struct DataType< ::roboy_simulation_msgs::UpdateControllerParametersRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_simulation_msgs::UpdateControllerParameters >::value();
  }
  static const char* value(const ::roboy_simulation_msgs::UpdateControllerParametersRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_simulation_msgs::UpdateControllerParametersResponse> should match 
// service_traits::MD5Sum< ::roboy_simulation_msgs::UpdateControllerParameters > 
template<>
struct MD5Sum< ::roboy_simulation_msgs::UpdateControllerParametersResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_simulation_msgs::UpdateControllerParameters >::value();
  }
  static const char* value(const ::roboy_simulation_msgs::UpdateControllerParametersResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_simulation_msgs::UpdateControllerParametersResponse> should match 
// service_traits::DataType< ::roboy_simulation_msgs::UpdateControllerParameters > 
template<>
struct DataType< ::roboy_simulation_msgs::UpdateControllerParametersResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_simulation_msgs::UpdateControllerParameters >::value();
  }
  static const char* value(const ::roboy_simulation_msgs::UpdateControllerParametersResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_SIMULATION_MSGS_MESSAGE_UPDATECONTROLLERPARAMETERS_H
