// Generated by gencpp from file roboy_middleware_msgs/LighthousePoseCorrection.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_LIGHTHOUSEPOSECORRECTION_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_LIGHTHOUSEPOSECORRECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace roboy_middleware_msgs
{
template <class ContainerAllocator>
struct LighthousePoseCorrection_
{
  typedef LighthousePoseCorrection_<ContainerAllocator> Type;

  LighthousePoseCorrection_()
    : id(0)
    , type(0)
    , tf()  {
    }
  LighthousePoseCorrection_(const ContainerAllocator& _alloc)
    : id(0)
    , type(0)
    , tf(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef uint32_t _type_type;
  _type_type type;

   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _tf_type;
  _tf_type tf;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> const> ConstPtr;

}; // struct LighthousePoseCorrection_

typedef ::roboy_middleware_msgs::LighthousePoseCorrection_<std::allocator<void> > LighthousePoseCorrection;

typedef boost::shared_ptr< ::roboy_middleware_msgs::LighthousePoseCorrection > LighthousePoseCorrectionPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::LighthousePoseCorrection const> LighthousePoseCorrectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_middleware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_middleware_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_middleware_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4dd1f4419400b4a93663e6e275eb162e";
  }

  static const char* value(const ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4dd1f4419400b4a9ULL;
  static const uint64_t static_value2 = 0x3663e6e275eb162eULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/LighthousePoseCorrection";
  }

  static const char* value(const ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"uint32 type\n"
"geometry_msgs/Transform tf\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.type);
      stream.next(m.tf);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LighthousePoseCorrection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::LighthousePoseCorrection_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
    s << indent << "tf: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.tf);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_LIGHTHOUSEPOSECORRECTION_H
