// Generated by gencpp from file roboy_cognition_msgs/FaceCoordinates.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_FACECOORDINATES_H
#define ROBOY_COGNITION_MSGS_MESSAGE_FACECOORDINATES_H


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
struct FaceCoordinates_
{
  typedef FaceCoordinates_<ContainerAllocator> Type;

  FaceCoordinates_()
    : id(0)
    , speaking(false)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  FaceCoordinates_(const ContainerAllocator& _alloc)
    : id(0)
    , speaking(false)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef uint8_t _speaking_type;
  _speaking_type speaking;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> const> ConstPtr;

}; // struct FaceCoordinates_

typedef ::roboy_cognition_msgs::FaceCoordinates_<std::allocator<void> > FaceCoordinates;

typedef boost::shared_ptr< ::roboy_cognition_msgs::FaceCoordinates > FaceCoordinatesPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::FaceCoordinates const> FaceCoordinatesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/Hand_openBionic/software/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/Hand_openBionic/software/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa161a73b9038ffc21d5bb777d5c89bb";
  }

  static const char* value(const ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa161a73b9038ffcULL;
  static const uint64_t static_value2 = 0x21d5bb777d5c89bbULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/FaceCoordinates";
  }

  static const char* value(const ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#stored id to facial features\n"
"int32 id\n"
"#is person speaking?\n"
"bool speaking\n"
"#3D position of person in transformed global coordinates\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.speaking);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceCoordinates_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::FaceCoordinates_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "speaking: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.speaking);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_FACECOORDINATES_H
