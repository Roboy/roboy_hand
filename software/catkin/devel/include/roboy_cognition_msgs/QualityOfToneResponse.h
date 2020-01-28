// Generated by gencpp from file roboy_cognition_msgs/QualityOfToneResponse.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONERESPONSE_H
#define ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONERESPONSE_H


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
struct QualityOfToneResponse_
{
  typedef QualityOfToneResponse_<ContainerAllocator> Type;

  QualityOfToneResponse_()
    : quality(0.0)
    , purity(0.0)
    , direction_z(0.0)
    , direction_y(0.0)
    , hit_pin(false)  {
    }
  QualityOfToneResponse_(const ContainerAllocator& _alloc)
    : quality(0.0)
    , purity(0.0)
    , direction_z(0.0)
    , direction_y(0.0)
    , hit_pin(false)  {
  (void)_alloc;
    }



   typedef float _quality_type;
  _quality_type quality;

   typedef float _purity_type;
  _purity_type purity;

   typedef float _direction_z_type;
  _direction_z_type direction_z;

   typedef float _direction_y_type;
  _direction_y_type direction_y;

   typedef uint8_t _hit_pin_type;
  _hit_pin_type hit_pin;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> const> ConstPtr;

}; // struct QualityOfToneResponse_

typedef ::roboy_cognition_msgs::QualityOfToneResponse_<std::allocator<void> > QualityOfToneResponse;

typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneResponse > QualityOfToneResponsePtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::QualityOfToneResponse const> QualityOfToneResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa7b415eedd90d5e1e617045b66b8d00";
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa7b415eedd90d5eULL;
  static const uint64_t static_value2 = 0x1e617045b66b8d00ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/QualityOfToneResponse";
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 quality\n"
"float32 purity\n"
"float32 direction_z\n"
"float32 direction_y\n"
"bool hit_pin\n"
"\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.quality);
      stream.next(m.purity);
      stream.next(m.direction_z);
      stream.next(m.direction_y);
      stream.next(m.hit_pin);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QualityOfToneResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::QualityOfToneResponse_<ContainerAllocator>& v)
  {
    s << indent << "quality: ";
    Printer<float>::stream(s, indent + "  ", v.quality);
    s << indent << "purity: ";
    Printer<float>::stream(s, indent + "  ", v.purity);
    s << indent << "direction_z: ";
    Printer<float>::stream(s, indent + "  ", v.direction_z);
    s << indent << "direction_y: ";
    Printer<float>::stream(s, indent + "  ", v.direction_y);
    s << indent << "hit_pin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hit_pin);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_QUALITYOFTONERESPONSE_H
