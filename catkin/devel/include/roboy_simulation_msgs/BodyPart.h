// Generated by gencpp from file roboy_simulation_msgs/BodyPart.msg
// DO NOT EDIT!


#ifndef ROBOY_SIMULATION_MSGS_MESSAGE_BODYPART_H
#define ROBOY_SIMULATION_MSGS_MESSAGE_BODYPART_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace roboy_simulation_msgs
{
template <class ContainerAllocator>
struct BodyPart_
{
  typedef BodyPart_<ContainerAllocator> Type;

  BodyPart_()
    : roboy_id(0)
    , link()
    , position()
    , mass(0.0)  {
    }
  BodyPart_(const ContainerAllocator& _alloc)
    : roboy_id(0)
    , link(_alloc)
    , position(_alloc)
    , mass(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _roboy_id_type;
  _roboy_id_type roboy_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _link_type;
  _link_type link;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef double _mass_type;
  _mass_type mass;





  typedef boost::shared_ptr< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> const> ConstPtr;

}; // struct BodyPart_

typedef ::roboy_simulation_msgs::BodyPart_<std::allocator<void> > BodyPart;

typedef boost::shared_ptr< ::roboy_simulation_msgs::BodyPart > BodyPartPtr;
typedef boost::shared_ptr< ::roboy_simulation_msgs::BodyPart const> BodyPartConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_simulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_simulation_msgs': ['/home/sausy/Projects/roboy_hand/catkin/src/roboy_communication/roboy_simulation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ea6a0636760eaf5fe7e84691fe02368";
  }

  static const char* value(const ::roboy_simulation_msgs::BodyPart_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ea6a0636760eaf5ULL;
  static const uint64_t static_value2 = 0xfe7e84691fe02368ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_simulation_msgs/BodyPart";
  }

  static const char* value(const ::roboy_simulation_msgs::BodyPart_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 roboy_id\n"
"string link\n"
"geometry_msgs/Point position\n"
"float64 mass\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::roboy_simulation_msgs::BodyPart_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roboy_id);
      stream.next(m.link);
      stream.next(m.position);
      stream.next(m.mass);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BodyPart_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_simulation_msgs::BodyPart_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_simulation_msgs::BodyPart_<ContainerAllocator>& v)
  {
    s << indent << "roboy_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.roboy_id);
    s << indent << "link: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "mass: ";
    Printer<double>::stream(s, indent + "  ", v.mass);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_SIMULATION_MSGS_MESSAGE_BODYPART_H
