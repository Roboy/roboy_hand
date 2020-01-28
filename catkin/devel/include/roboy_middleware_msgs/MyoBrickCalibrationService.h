// Generated by gencpp from file roboy_middleware_msgs/MyoBrickCalibrationService.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_MYOBRICKCALIBRATIONSERVICE_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_MYOBRICKCALIBRATIONSERVICE_H

#include <ros/service_traits.h>


#include <roboy_middleware_msgs/MyoBrickCalibrationServiceRequest.h>
#include <roboy_middleware_msgs/MyoBrickCalibrationServiceResponse.h>


namespace roboy_middleware_msgs
{

struct MyoBrickCalibrationService
{

typedef MyoBrickCalibrationServiceRequest Request;
typedef MyoBrickCalibrationServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MyoBrickCalibrationService
} // namespace roboy_middleware_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationService > {
  static const char* value()
  {
    return "e5ee8b92f36ed4d7af8af588c906a8b4";
  }

  static const char* value(const ::roboy_middleware_msgs::MyoBrickCalibrationService&) { return value(); }
};

template<>
struct DataType< ::roboy_middleware_msgs::MyoBrickCalibrationService > {
  static const char* value()
  {
    return "roboy_middleware_msgs/MyoBrickCalibrationService";
  }

  static const char* value(const ::roboy_middleware_msgs::MyoBrickCalibrationService&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationServiceRequest> should match 
// service_traits::MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationService > 
template<>
struct MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationService >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::MyoBrickCalibrationServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_middleware_msgs::MyoBrickCalibrationServiceRequest> should match 
// service_traits::DataType< ::roboy_middleware_msgs::MyoBrickCalibrationService > 
template<>
struct DataType< ::roboy_middleware_msgs::MyoBrickCalibrationServiceRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_middleware_msgs::MyoBrickCalibrationService >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::MyoBrickCalibrationServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationServiceResponse> should match 
// service_traits::MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationService > 
template<>
struct MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_middleware_msgs::MyoBrickCalibrationService >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::MyoBrickCalibrationServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_middleware_msgs::MyoBrickCalibrationServiceResponse> should match 
// service_traits::DataType< ::roboy_middleware_msgs::MyoBrickCalibrationService > 
template<>
struct DataType< ::roboy_middleware_msgs::MyoBrickCalibrationServiceResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_middleware_msgs::MyoBrickCalibrationService >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::MyoBrickCalibrationServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_MYOBRICKCALIBRATIONSERVICE_H
