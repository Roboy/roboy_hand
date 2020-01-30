// Generated by gencpp from file roboy_cognition_msgs/EvalSeq2Seq.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_EVALSEQ2SEQ_H
#define ROBOY_COGNITION_MSGS_MESSAGE_EVALSEQ2SEQ_H

#include <ros/service_traits.h>


#include <roboy_cognition_msgs/EvalSeq2SeqRequest.h>
#include <roboy_cognition_msgs/EvalSeq2SeqResponse.h>


namespace roboy_cognition_msgs
{

struct EvalSeq2Seq
{

typedef EvalSeq2SeqRequest Request;
typedef EvalSeq2SeqResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct EvalSeq2Seq
} // namespace roboy_cognition_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboy_cognition_msgs::EvalSeq2Seq > {
  static const char* value()
  {
    return "eb13ac1f1354ccecb7941ee8fa2192e8";
  }

  static const char* value(const ::roboy_cognition_msgs::EvalSeq2Seq&) { return value(); }
};

template<>
struct DataType< ::roboy_cognition_msgs::EvalSeq2Seq > {
  static const char* value()
  {
    return "roboy_cognition_msgs/EvalSeq2Seq";
  }

  static const char* value(const ::roboy_cognition_msgs::EvalSeq2Seq&) { return value(); }
};


// service_traits::MD5Sum< ::roboy_cognition_msgs::EvalSeq2SeqRequest> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::EvalSeq2Seq > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::EvalSeq2SeqRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::EvalSeq2Seq >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::EvalSeq2SeqRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::EvalSeq2SeqRequest> should match 
// service_traits::DataType< ::roboy_cognition_msgs::EvalSeq2Seq > 
template<>
struct DataType< ::roboy_cognition_msgs::EvalSeq2SeqRequest>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::EvalSeq2Seq >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::EvalSeq2SeqRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboy_cognition_msgs::EvalSeq2SeqResponse> should match 
// service_traits::MD5Sum< ::roboy_cognition_msgs::EvalSeq2Seq > 
template<>
struct MD5Sum< ::roboy_cognition_msgs::EvalSeq2SeqResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboy_cognition_msgs::EvalSeq2Seq >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::EvalSeq2SeqResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboy_cognition_msgs::EvalSeq2SeqResponse> should match 
// service_traits::DataType< ::roboy_cognition_msgs::EvalSeq2Seq > 
template<>
struct DataType< ::roboy_cognition_msgs::EvalSeq2SeqResponse>
{
  static const char* value()
  {
    return DataType< ::roboy_cognition_msgs::EvalSeq2Seq >::value();
  }
  static const char* value(const ::roboy_cognition_msgs::EvalSeq2SeqResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_EVALSEQ2SEQ_H