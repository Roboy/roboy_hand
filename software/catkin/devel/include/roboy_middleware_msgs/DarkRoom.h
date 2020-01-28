// Generated by gencpp from file roboy_middleware_msgs/DarkRoom.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_DARKROOM_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_DARKROOM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_middleware_msgs
{
template <class ContainerAllocator>
struct DarkRoom_
{
  typedef DarkRoom_<ContainerAllocator> Type;

  DarkRoom_()
    : object_id()
    , timestamp()
    , sensor_value()  {
    }
  DarkRoom_(const ContainerAllocator& _alloc)
    : object_id(_alloc)
    , timestamp(_alloc)
    , sensor_value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _object_id_type;
  _object_id_type object_id;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _timestamp_type;
  _timestamp_type timestamp;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _sensor_value_type;
  _sensor_value_type sensor_value;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> const> ConstPtr;

}; // struct DarkRoom_

typedef ::roboy_middleware_msgs::DarkRoom_<std::allocator<void> > DarkRoom;

typedef boost::shared_ptr< ::roboy_middleware_msgs::DarkRoom > DarkRoomPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::DarkRoom const> DarkRoomConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_middleware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_middleware_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_middleware_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "015cacec6e072999f1fb62b28192aa16";
  }

  static const char* value(const ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x015cacec6e072999ULL;
  static const uint64_t static_value2 = 0xf1fb62b28192aa16ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/DarkRoom";
  }

  static const char* value(const ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string object_id\n"
"int32[] timestamp\n"
"uint32[] sensor_value\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_id);
      stream.next(m.timestamp);
      stream.next(m.sensor_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DarkRoom_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::DarkRoom_<ContainerAllocator>& v)
  {
    s << indent << "object_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.object_id);
    s << indent << "timestamp[]" << std::endl;
    for (size_t i = 0; i < v.timestamp.size(); ++i)
    {
      s << indent << "  timestamp[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.timestamp[i]);
    }
    s << indent << "sensor_value[]" << std::endl;
    for (size_t i = 0; i < v.sensor_value.size(); ++i)
    {
      s << indent << "  sensor_value[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.sensor_value[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_DARKROOM_H
