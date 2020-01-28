// Generated by gencpp from file roboy_simulation_msgs/Joint.msg
// DO NOT EDIT!


#ifndef ROBOY_SIMULATION_MSGS_MESSAGE_JOINT_H
#define ROBOY_SIMULATION_MSGS_MESSAGE_JOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_simulation_msgs
{
template <class ContainerAllocator>
struct Joint_
{
  typedef Joint_<ContainerAllocator> Type;

  Joint_()
    : roboy_id(0)
    , name()
    , radian(0.0)  {
    }
  Joint_(const ContainerAllocator& _alloc)
    : roboy_id(0)
    , name(_alloc)
    , radian(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _roboy_id_type;
  _roboy_id_type roboy_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef float _radian_type;
  _radian_type radian;





  typedef boost::shared_ptr< ::roboy_simulation_msgs::Joint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_simulation_msgs::Joint_<ContainerAllocator> const> ConstPtr;

}; // struct Joint_

typedef ::roboy_simulation_msgs::Joint_<std::allocator<void> > Joint;

typedef boost::shared_ptr< ::roboy_simulation_msgs::Joint > JointPtr;
typedef boost::shared_ptr< ::roboy_simulation_msgs::Joint const> JointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_simulation_msgs::Joint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_simulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_simulation_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_simulation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::Joint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::Joint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::Joint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4e0a5af89536f542bc2bec2bf5a7b8de";
  }

  static const char* value(const ::roboy_simulation_msgs::Joint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4e0a5af89536f542ULL;
  static const uint64_t static_value2 = 0xbc2bec2bf5a7b8deULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_simulation_msgs/Joint";
  }

  static const char* value(const ::roboy_simulation_msgs::Joint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 roboy_id\n"
"string name\n"
"float32 radian\n"
;
  }

  static const char* value(const ::roboy_simulation_msgs::Joint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roboy_id);
      stream.next(m.name);
      stream.next(m.radian);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Joint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_simulation_msgs::Joint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_simulation_msgs::Joint_<ContainerAllocator>& v)
  {
    s << indent << "roboy_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.roboy_id);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "radian: ";
    Printer<float>::stream(s, indent + "  ", v.radian);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_SIMULATION_MSGS_MESSAGE_JOINT_H
