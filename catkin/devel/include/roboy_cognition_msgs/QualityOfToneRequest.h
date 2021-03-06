// Generated by gencpp from file roboy_cognition_msgs/QualityOfToneRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONEREQUEST_H
#define ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONEREQUEST_H


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
struct QualityOfToneRequest_
{
  typedef QualityOfToneRequest_<ContainerAllocator> Type;

  QualityOfToneRequest_()
    : tone()
    , time_in_milliseconds(0.0)
    , major_only(false)  {
    }
  QualityOfToneRequest_(const ContainerAllocator& _alloc)
    : tone(_alloc)
    , time_in_milliseconds(0.0)
    , major_only(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tone_type;
  _tone_type tone;

   typedef float _time_in_milliseconds_type;
  _time_in_milliseconds_type time_in_milliseconds;

   typedef uint8_t _major_only_type;
  _major_only_type major_only;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> const> ConstPtr;

}; // struct QualityOfToneRequest_

typedef ::roboy_cognition_msgs::QualityOfToneRequest_<std::allocator<void> > QualityOfToneRequest;

typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneRequest > QualityOfToneRequestPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneRequest const> QualityOfToneRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/roboy_hand/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/roboy_hand/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "81bbf7d9a2a6be58466cbdf6da81f0a4";
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x81bbf7d9a2a6be58ULL;
  static const uint64_t static_value2 = 0x466cbdf6da81f0a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/QualityOfToneRequest";
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string tone\n"
"float32 time_in_milliseconds\n"
"bool major_only\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tone);
      stream.next(m.time_in_milliseconds);
      stream.next(m.major_only);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QualityOfToneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::QualityOfToneRequest_<ContainerAllocator>& v)
  {
    s << indent << "tone: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tone);
    s << indent << "time_in_milliseconds: ";
    Printer<float>::stream(s, indent + "  ", v.time_in_milliseconds);
    s << indent << "major_only: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.major_only);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONEREQUEST_H
