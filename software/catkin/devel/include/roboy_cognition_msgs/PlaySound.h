// Generated by gencpp from file roboy_cognition_msgs/PlaySound.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_PLAYSOUND_H
#define ROBOY_COGNITION_MSGS_MESSAGE_PLAYSOUND_H

#include <ros/service_traits.h>


#include <roboy_cognition_msgs/PlaySoundRequest.h>
#include <roboy_cognition_msgs/PlaySoundResponse.h>


namespace roboy_cognition_msgs
{

struct PlaySound
{

typedef PlaySoundRequest Request;
typedef PlaySoundResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PlaySound
} // namespace roboy_cognition_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_cognition_msgs::PlaySound > {
  static const char* value()
  {
    return "be411978a058f6d39164b06691bbbd80";
  }

  static const char* value(const ::roboy_cognition_msgs::PlaySound&) { return value(); }
};

template<>
struct DataType< ::roboy_cognition_msgs::PlaySound > {
  static const char* value()
  {
    return "roboy_cognition_msgs/PlaySound";
  }

  static const char* value(const ::roboy_cognition_msgs::PlaySound&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_cognition_msgs::PlaySoundRequest> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::PlaySound > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::PlaySoundRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::PlaySound >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::PlaySoundRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::PlaySoundRequest> should match 
// service_traits::DataType< ::roboy_cognition_msgs::PlaySound > 
template<>
struct DataType< ::roboy_cognition_msgs::PlaySoundRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::PlaySound >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::PlaySoundRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_cognition_msgs::PlaySoundResponse> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::PlaySound > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::PlaySoundResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::PlaySound >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::PlaySoundResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::PlaySoundResponse> should match 
// service_traits::DataType< ::roboy_cognition_msgs::PlaySound > 
template<>
struct DataType< ::roboy_cognition_msgs::PlaySoundResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::PlaySound >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::PlaySoundResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_PLAYSOUND_H
