// Generated by gencpp from file roboy_cognition_msgs/RecognizedSpeech.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_RECOGNIZEDSPEECH_H
#define ROBOY_COGNITION_MSGS_MESSAGE_RECOGNIZEDSPEECH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_cognition_msgs
{
template <class ContainerAllocator>
struct RecognizedSpeech_
{
  typedef RecognizedSpeech_<ContainerAllocator> Type;

  RecognizedSpeech_()
    : source(0)
    , text()
    , start_timestamp(0.0)  {
    }
  RecognizedSpeech_(const ContainerAllocator& _alloc)
    : source(0)
    , text(_alloc)
    , start_timestamp(0.0)  {
  (void)_alloc;
    }



   typedef int16_t _source_type;
  _source_type source;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;

   typedef double _start_timestamp_type;
  _start_timestamp_type start_timestamp;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> const> ConstPtr;

}; // struct RecognizedSpeech_

typedef ::roboy_cognition_msgs::RecognizedSpeech_<std::allocator<void> > RecognizedSpeech;

typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizedSpeech > RecognizedSpeechPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::RecognizedSpeech const> RecognizedSpeechConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/Hand_openBionic/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/Hand_openBionic/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e88722b8a9f33a92a1fdcd99f5483faa";
  }

  static const char* value(const ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe88722b8a9f33a92ULL;
  static const uint64_t static_value2 = 0xa1fdcd99f5483faaULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/RecognizedSpeech";
  }

  static const char* value(const ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 source\n"
"string text\n"
"float64 start_timestamp\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.source);
      stream.next(m.text);
      stream.next(m.start_timestamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognizedSpeech_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::RecognizedSpeech_<ContainerAllocator>& v)
  {
    s << indent << "source: ";
    Printer<int16_t>::stream(s, indent + "  ", v.source);
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
    s << indent << "start_timestamp: ";
    Printer<double>::stream(s, indent + "  ", v.start_timestamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_RECOGNIZEDSPEECH_H
