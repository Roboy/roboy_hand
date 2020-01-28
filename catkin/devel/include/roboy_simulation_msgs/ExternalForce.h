// Generated by gencpp from file roboy_simulation_msgs/ExternalForce.msg
// DO NOT EDIT!


#ifndef ROBOY_SIMULATION_MSGS_MESSAGE_EXTERNALFORCE_H
#define ROBOY_SIMULATION_MSGS_MESSAGE_EXTERNALFORCE_H


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
struct ExternalForce_
{
  typedef ExternalForce_<ContainerAllocator> Type;

  ExternalForce_()
    : name()
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , f_x(0.0)
    , f_y(0.0)
    , f_z(0.0)
    , duration(0)  {
    }
  ExternalForce_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , f_x(0.0)
    , f_y(0.0)
    , f_z(0.0)
    , duration(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _f_x_type;
  _f_x_type f_x;

   typedef float _f_y_type;
  _f_y_type f_y;

   typedef float _f_z_type;
  _f_z_type f_z;

   typedef int32_t _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> const> ConstPtr;

}; // struct ExternalForce_

typedef ::roboy_simulation_msgs::ExternalForce_<std::allocator<void> > ExternalForce;

typedef boost::shared_ptr< ::roboy_simulation_msgs::ExternalForce > ExternalForcePtr;
typedef boost::shared_ptr< ::roboy_simulation_msgs::ExternalForce const> ExternalForceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_simulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_simulation_msgs': ['/home/sausy/Projects/Hand_openBionic/catkin/src/roboy_communication/roboy_simulation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e3497e9ca5650a8a3d8803fe7153120";
  }

  static const char* value(const ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e3497e9ca5650a8ULL;
  static const uint64_t static_value2 = 0xa3d8803fe7153120ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_simulation_msgs/ExternalForce";
  }

  static const char* value(const ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# link name\n"
"string name\n"
"# relativ position on mesh\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"# force\n"
"float32 f_x\n"
"float32 f_y\n"
"float32 f_z\n"
"# force duration in milliseconds\n"
"int32 duration\n"
;
  }

  static const char* value(const ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.f_x);
      stream.next(m.f_y);
      stream.next(m.f_z);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExternalForce_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_simulation_msgs::ExternalForce_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "f_x: ";
    Printer<float>::stream(s, indent + "  ", v.f_x);
    s << indent << "f_y: ";
    Printer<float>::stream(s, indent + "  ", v.f_y);
    s << indent << "f_z: ";
    Printer<float>::stream(s, indent + "  ", v.f_z);
    s << indent << "duration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_SIMULATION_MSGS_MESSAGE_EXTERNALFORCE_H
