// Generated by gencpp from file roboy_middleware_msgs/JointControllerRequest.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_JOINTCONTROLLERREQUEST_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_JOINTCONTROLLERREQUEST_H


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
struct JointControllerRequest_
{
  typedef JointControllerRequest_<ContainerAllocator> Type;

  JointControllerRequest_()
    : elbow_control_enable(false)
    , kp_elbow_joint(0)
    , kd_elbow_joint(0)
    , kp_elbow_agonist(0)
    , kd_elbow_agonist(0)
    , kp_elbow_antagonist(0)
    , kd_elbow_antagonist(0)
    , elbow_deadband(0)
    , elbow_pretension(0)
    , wrist_control_enable(false)
    , kp_wrist_joint(0)
    , kd_wrist_joint(0)
    , kp_wrist_agonist(0)
    , kd_wrist_agonist(0)
    , kp_wrist_antagonist(0)
    , kd_wrist_antagonist(0)
    , wrist_deadband(0)
    , wrist_pretension(0)  {
    }
  JointControllerRequest_(const ContainerAllocator& _alloc)
    : elbow_control_enable(false)
    , kp_elbow_joint(0)
    , kd_elbow_joint(0)
    , kp_elbow_agonist(0)
    , kd_elbow_agonist(0)
    , kp_elbow_antagonist(0)
    , kd_elbow_antagonist(0)
    , elbow_deadband(0)
    , elbow_pretension(0)
    , wrist_control_enable(false)
    , kp_wrist_joint(0)
    , kd_wrist_joint(0)
    , kp_wrist_agonist(0)
    , kd_wrist_agonist(0)
    , kp_wrist_antagonist(0)
    , kd_wrist_antagonist(0)
    , wrist_deadband(0)
    , wrist_pretension(0)  {
  (void)_alloc;
    }



   typedef uint8_t _elbow_control_enable_type;
  _elbow_control_enable_type elbow_control_enable;

   typedef int32_t _kp_elbow_joint_type;
  _kp_elbow_joint_type kp_elbow_joint;

   typedef int32_t _kd_elbow_joint_type;
  _kd_elbow_joint_type kd_elbow_joint;

   typedef int32_t _kp_elbow_agonist_type;
  _kp_elbow_agonist_type kp_elbow_agonist;

   typedef int32_t _kd_elbow_agonist_type;
  _kd_elbow_agonist_type kd_elbow_agonist;

   typedef int32_t _kp_elbow_antagonist_type;
  _kp_elbow_antagonist_type kp_elbow_antagonist;

   typedef int32_t _kd_elbow_antagonist_type;
  _kd_elbow_antagonist_type kd_elbow_antagonist;

   typedef int32_t _elbow_deadband_type;
  _elbow_deadband_type elbow_deadband;

   typedef int32_t _elbow_pretension_type;
  _elbow_pretension_type elbow_pretension;

   typedef uint8_t _wrist_control_enable_type;
  _wrist_control_enable_type wrist_control_enable;

   typedef int32_t _kp_wrist_joint_type;
  _kp_wrist_joint_type kp_wrist_joint;

   typedef int32_t _kd_wrist_joint_type;
  _kd_wrist_joint_type kd_wrist_joint;

   typedef int32_t _kp_wrist_agonist_type;
  _kp_wrist_agonist_type kp_wrist_agonist;

   typedef int32_t _kd_wrist_agonist_type;
  _kd_wrist_agonist_type kd_wrist_agonist;

   typedef int32_t _kp_wrist_antagonist_type;
  _kp_wrist_antagonist_type kp_wrist_antagonist;

   typedef int32_t _kd_wrist_antagonist_type;
  _kd_wrist_antagonist_type kd_wrist_antagonist;

   typedef int32_t _wrist_deadband_type;
  _wrist_deadband_type wrist_deadband;

   typedef int32_t _wrist_pretension_type;
  _wrist_pretension_type wrist_pretension;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct JointControllerRequest_

typedef ::roboy_middleware_msgs::JointControllerRequest_<std::allocator<void> > JointControllerRequest;

typedef boost::shared_ptr< ::roboy_middleware_msgs::JointControllerRequest > JointControllerRequestPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::JointControllerRequest const> JointControllerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_middleware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_middleware_msgs': ['/home/sausy/Projects/Hand_openBionic/catkin/src/roboy_communication/roboy_middleware_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c2b216fbd74af3eb65d1ca2f72cefc3";
  }

  static const char* value(const ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c2b216fbd74af3eULL;
  static const uint64_t static_value2 = 0xb65d1ca2f72cefc3ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/JointControllerRequest";
  }

  static const char* value(const ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool elbow_control_enable\n"
"int32 kp_elbow_joint\n"
"int32 kd_elbow_joint\n"
"int32 kp_elbow_agonist\n"
"int32 kd_elbow_agonist\n"
"int32 kp_elbow_antagonist\n"
"int32 kd_elbow_antagonist\n"
"int32 elbow_deadband\n"
"int32 elbow_pretension\n"
"bool wrist_control_enable\n"
"int32 kp_wrist_joint\n"
"int32 kd_wrist_joint\n"
"int32 kp_wrist_agonist\n"
"int32 kd_wrist_agonist\n"
"int32 kp_wrist_antagonist\n"
"int32 kd_wrist_antagonist\n"
"int32 wrist_deadband\n"
"int32 wrist_pretension\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.elbow_control_enable);
      stream.next(m.kp_elbow_joint);
      stream.next(m.kd_elbow_joint);
      stream.next(m.kp_elbow_agonist);
      stream.next(m.kd_elbow_agonist);
      stream.next(m.kp_elbow_antagonist);
      stream.next(m.kd_elbow_antagonist);
      stream.next(m.elbow_deadband);
      stream.next(m.elbow_pretension);
      stream.next(m.wrist_control_enable);
      stream.next(m.kp_wrist_joint);
      stream.next(m.kd_wrist_joint);
      stream.next(m.kp_wrist_agonist);
      stream.next(m.kd_wrist_agonist);
      stream.next(m.kp_wrist_antagonist);
      stream.next(m.kd_wrist_antagonist);
      stream.next(m.wrist_deadband);
      stream.next(m.wrist_pretension);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointControllerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::JointControllerRequest_<ContainerAllocator>& v)
  {
    s << indent << "elbow_control_enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.elbow_control_enable);
    s << indent << "kp_elbow_joint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kp_elbow_joint);
    s << indent << "kd_elbow_joint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kd_elbow_joint);
    s << indent << "kp_elbow_agonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kp_elbow_agonist);
    s << indent << "kd_elbow_agonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kd_elbow_agonist);
    s << indent << "kp_elbow_antagonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kp_elbow_antagonist);
    s << indent << "kd_elbow_antagonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kd_elbow_antagonist);
    s << indent << "elbow_deadband: ";
    Printer<int32_t>::stream(s, indent + "  ", v.elbow_deadband);
    s << indent << "elbow_pretension: ";
    Printer<int32_t>::stream(s, indent + "  ", v.elbow_pretension);
    s << indent << "wrist_control_enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wrist_control_enable);
    s << indent << "kp_wrist_joint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kp_wrist_joint);
    s << indent << "kd_wrist_joint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kd_wrist_joint);
    s << indent << "kp_wrist_agonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kp_wrist_agonist);
    s << indent << "kd_wrist_agonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kd_wrist_agonist);
    s << indent << "kp_wrist_antagonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kp_wrist_antagonist);
    s << indent << "kd_wrist_antagonist: ";
    Printer<int32_t>::stream(s, indent + "  ", v.kd_wrist_antagonist);
    s << indent << "wrist_deadband: ";
    Printer<int32_t>::stream(s, indent + "  ", v.wrist_deadband);
    s << indent << "wrist_pretension: ";
    Printer<int32_t>::stream(s, indent + "  ", v.wrist_pretension);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_JOINTCONTROLLERREQUEST_H