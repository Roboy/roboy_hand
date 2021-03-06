// Generated by gencpp from file roboy_middleware_msgs/DanceTrajectory.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_DANCETRAJECTORY_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_DANCETRAJECTORY_H

#include <ros/service_traits.h>


#include <roboy_middleware_msgs/DanceTrajectoryRequest.h>
#include <roboy_middleware_msgs/DanceTrajectoryResponse.h>


namespace roboy_middleware_msgs
{

struct DanceTrajectory
{

typedef DanceTrajectoryRequest Request;
typedef DanceTrajectoryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DanceTrajectory
} // namespace roboy_middleware_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_middleware_msgs::DanceTrajectory > {
  static const char* value()
  {
    return "c1811518113b89edafd5bab82a308c0b";
  }

  static const char* value(const ::roboy_middleware_msgs::DanceTrajectory&) { return value(); }
};

template<>
struct DataType< ::roboy_middleware_msgs::DanceTrajectory > {
  static const char* value()
  {
    return "roboy_middleware_msgs/DanceTrajectory";
  }

  static const char* value(const ::roboy_middleware_msgs::DanceTrajectory&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_middleware_msgs::DanceTrajectoryRequest> should match 
// service_traits::MD5Sum< ::roboy_middleware_msgs::DanceTrajectory > 
template<>
struct MD5Sum< ::roboy_middleware_msgs::DanceTrajectoryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_middleware_msgs::DanceTrajectory >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::DanceTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_middleware_msgs::DanceTrajectoryRequest> should match 
// service_traits::DataType< ::roboy_middleware_msgs::DanceTrajectory > 
template<>
struct DataType< ::roboy_middleware_msgs::DanceTrajectoryRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_middleware_msgs::DanceTrajectory >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::DanceTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_middleware_msgs::DanceTrajectoryResponse> should match 
// service_traits::MD5Sum< ::roboy_middleware_msgs::DanceTrajectory > 
template<>
struct MD5Sum< ::roboy_middleware_msgs::DanceTrajectoryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_middleware_msgs::DanceTrajectory >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::DanceTrajectoryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_middleware_msgs::DanceTrajectoryResponse> should match 
// service_traits::DataType< ::roboy_middleware_msgs::DanceTrajectory > 
template<>
struct DataType< ::roboy_middleware_msgs::DanceTrajectoryResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_middleware_msgs::DanceTrajectory >::value();
  }
  static const char* value(const ::roboy_middleware_msgs::DanceTrajectoryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_DANCETRAJECTORY_H
