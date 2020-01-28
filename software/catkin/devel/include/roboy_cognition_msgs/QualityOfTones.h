// Generated by gencpp from file roboy_cognition_msgs/QualityOfTones.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONES_H
#define ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONES_H

#include <ros/service_traits.h>


#include <roboy_cognition_msgs/QualityOfTonesRequest.h>
#include <roboy_cognition_msgs/QualityOfTonesResponse.h>


namespace roboy_cognition_msgs
{

struct QualityOfTones
{

typedef QualityOfTonesRequest Request;
typedef QualityOfTonesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct QualityOfTones
} // namespace roboy_cognition_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_cognition_msgs::QualityOfTones > {
  static const char* value()
  {
    return "fc70456230b8a068be395f059adcde0e";
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfTones&) { return value(); }
};

template<>
struct DataType< ::roboy_cognition_msgs::QualityOfTones > {
  static const char* value()
  {
    return "roboy_cognition_msgs/QualityOfTones";
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfTones&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_cognition_msgs::QualityOfTonesRequest> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::QualityOfTones > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::QualityOfTonesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::QualityOfTones >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::QualityOfTonesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::QualityOfTonesRequest> should match 
// service_traits::DataType< ::roboy_cognition_msgs::QualityOfTones > 
template<>
struct DataType< ::roboy_cognition_msgs::QualityOfTonesRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::QualityOfTones >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::QualityOfTonesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_cognition_msgs::QualityOfTonesResponse> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::QualityOfTones > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::QualityOfTonesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::QualityOfTones >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::QualityOfTonesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::QualityOfTonesResponse> should match 
// service_traits::DataType< ::roboy_cognition_msgs::QualityOfTones > 
template<>
struct DataType< ::roboy_cognition_msgs::QualityOfTonesResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::QualityOfTones >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::QualityOfTonesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONES_H
