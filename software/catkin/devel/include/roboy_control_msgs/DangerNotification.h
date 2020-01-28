// Generated by gencpp from file roboy_control_msgs/DangerNotification.msg
// DO NOT EDIT!


#ifndef ROBOY_CONTROL_MSGS_MESSAGE_DANGERNOTIFICATION_H
#define ROBOY_CONTROL_MSGS_MESSAGE_DANGERNOTIFICATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_control_msgs
{
template <class ContainerAllocator>
struct DangerNotification_
{
  typedef DangerNotification_<ContainerAllocator> Type;

  DangerNotification_()
    : code(0)
    , object()
    , msg()
    , extra()
    , validity_duration(0)  {
    }
  DangerNotification_(const ContainerAllocator& _alloc)
    : code(0)
    , object(_alloc)
    , msg(_alloc)
    , extra(_alloc)
    , validity_duration(0)  {
  (void)_alloc;
    }



   typedef int32_t _code_type;
  _code_type code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _object_type;
  _object_type object;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_type;
  _msg_type msg;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _extra_type;
  _extra_type extra;

   typedef int32_t _validity_duration_type;
  _validity_duration_type validity_duration;





  typedef boost::shared_ptr< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> const> ConstPtr;

}; // struct DangerNotification_

typedef ::roboy_control_msgs::DangerNotification_<std::allocator<void> > DangerNotification;

typedef boost::shared_ptr< ::roboy_control_msgs::DangerNotification > DangerNotificationPtr;
typedef boost::shared_ptr< ::roboy_control_msgs::DangerNotification const> DangerNotificationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_control_msgs::DangerNotification_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'roboy_control_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_control_msgs/msg', '/home/sausy/Projects/Hand_openBionic/software/catkin/devel/share/roboy_control_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9b10763b06033e440cfab3c2b143fa6";
  }

  static const char* value(const ::roboy_control_msgs::DangerNotification_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9b10763b06033e4ULL;
  static const uint64_t static_value2 = 0x40cfab3c2b143fa6ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_control_msgs/DangerNotification";
  }

  static const char* value(const ::roboy_control_msgs::DangerNotification_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 code\n"
"string object\n"
"string msg\n"
"string extra\n"
"int32 validity_duration\n"
;
  }

  static const char* value(const ::roboy_control_msgs::DangerNotification_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.code);
      stream.next(m.object);
      stream.next(m.msg);
      stream.next(m.extra);
      stream.next(m.validity_duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DangerNotification_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_control_msgs::DangerNotification_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_control_msgs::DangerNotification_<ContainerAllocator>& v)
  {
    s << indent << "code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.code);
    s << indent << "object: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.object);
    s << indent << "msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg);
    s << indent << "extra: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.extra);
    s << indent << "validity_duration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.validity_duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_CONTROL_MSGS_MESSAGE_DANGERNOTIFICATION_H
