// Generated by gencpp from file roboy_middleware_msgs/InverseKinematicsMultipleFramesRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_INVERSEKINEMATICSMULTIPLEFRAMESREQUEST_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_INVERSEKINEMATICSMULTIPLEFRAMESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace roboy_middleware_msgs
{
template <class ContainerAllocator>
struct InverseKinematicsMultipleFramesRequest_
{
  typedef InverseKinematicsMultipleFramesRequest_<ContainerAllocator> Type;

  InverseKinematicsMultipleFramesRequest_()
    : endeffector()
    , type(0)
    , target_frames()
    , poses()
    , weights()  {
    }
  InverseKinematicsMultipleFramesRequest_(const ContainerAllocator& _alloc)
    : endeffector(_alloc)
    , type(0)
    , target_frames(_alloc)
    , poses(_alloc)
    , weights(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _endeffector_type;
  _endeffector_type endeffector;

   typedef int8_t _type_type;
  _type_type type;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _target_frames_type;
  _target_frames_type target_frames;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _weights_type;
  _weights_type weights;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InverseKinematicsMultipleFramesRequest_

typedef ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<std::allocator<void> > InverseKinematicsMultipleFramesRequest;

typedef boost::shared_ptr< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest > InverseKinematicsMultipleFramesRequestPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest const> InverseKinematicsMultipleFramesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2123899f58859068accf772246dbce8";
  }

  static const char* value(const ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2123899f5885906ULL;
  static const uint64_t static_value2 = 0x8accf772246dbce8ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/InverseKinematicsMultipleFramesRequest";
  }

  static const char* value(const ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string endeffector\n"
"\n"
"int8 type\n"
"\n"
"string[] target_frames\n"
"\n"
"geometry_msgs/Pose[] poses\n"
"\n"
"int8[] weights\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
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

  static const char* value(const ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.endeffector);
      stream.next(m.type);
      stream.next(m.target_frames);
      stream.next(m.poses);
      stream.next(m.weights);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InverseKinematicsMultipleFramesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::InverseKinematicsMultipleFramesRequest_<ContainerAllocator>& v)
  {
    s << indent << "endeffector: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.endeffector);
    s << indent << "type: ";
    Printer<int8_t>::stream(s, indent + "  ", v.type);
    s << indent << "target_frames[]" << std::endl;
    for (size_t i = 0; i < v.target_frames.size(); ++i)
    {
      s << indent << "  target_frames[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.target_frames[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
    s << indent << "weights[]" << std::endl;
    for (size_t i = 0; i < v.weights.size(); ++i)
    {
      s << indent << "  weights[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.weights[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_INVERSEKINEMATICSMULTIPLEFRAMESREQUEST_H
