// Generated by gencpp from file roboy_cognition_msgs/DetectIntentRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_DETECTINTENTREQUEST_H
#define ROBOY_COGNITION_MSGS_MESSAGE_DETECTINTENTREQUEST_H


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
struct DetectIntentRequest_
{
  typedef DetectIntentRequest_<ContainerAllocator> Type;

  DetectIntentRequest_()
    : sentence()  {
    }
  DetectIntentRequest_(const ContainerAllocator& _alloc)
    : sentence(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sentence_type;
  _sentence_type sentence;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DetectIntentRequest_

typedef ::roboy_cognition_msgs::DetectIntentRequest_<std::allocator<void> > DetectIntentRequest;

typedef boost::shared_ptr< ::roboy_cognition_msgs::DetectIntentRequest > DetectIntentRequestPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::DetectIntentRequest const> DetectIntentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/Hand_openBionic/software/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ee8e7a1b3ec1e5b34263db750df6246";
  }

  static const char* value(const ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ee8e7a1b3ec1e5bULL;
  static const uint64_t static_value2 = 0x34263db750df6246ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/DetectIntentRequest";
  }

  static const char* value(const ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string sentence\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sentence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectIntentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::DetectIntentRequest_<ContainerAllocator>& v)
  {
    s << indent << "sentence: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sentence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_DETECTINTENTREQUEST_H
