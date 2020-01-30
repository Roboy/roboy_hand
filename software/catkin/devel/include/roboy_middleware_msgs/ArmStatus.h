// Generated by gencpp from file roboy_middleware_msgs/ArmStatus.msg
// DO NOT EDIT!


#ifndef ROBOY_MIDDLEWARE_MSGS_MESSAGE_ARMSTATUS_H
#define ROBOY_MIDDLEWARE_MSGS_MESSAGE_ARMSTATUS_H


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
struct ArmStatus_
{
  typedef ArmStatus_<ContainerAllocator> Type;

  ArmStatus_()
    : id(0)
    , current()
    , gyro_x()
    , gyro_y()
    , gyro_z()
    , acc_x()
    , acc_y()
    , acc_z()
    , elbow_joint_angle(0.0)
    , elbow_joint_angle_setpoint(0.0)
    , elbow_agonist_setpoint(0)
    , elbow_antagonist_setpoint(0)
    , wrist_joint_angle(0.0)
    , wrist_joint_angle_setpoint(0.0)
    , wrist_agonist_setpoint(0)
    , wrist_antagonist_setpoint(0)  {
    }
  ArmStatus_(const ContainerAllocator& _alloc)
    : id(0)
    , current(_alloc)
    , gyro_x(_alloc)
    , gyro_y(_alloc)
    , gyro_z(_alloc)
    , acc_x(_alloc)
    , acc_y(_alloc)
    , acc_z(_alloc)
    , elbow_joint_angle(0.0)
    , elbow_joint_angle_setpoint(0.0)
    , elbow_agonist_setpoint(0)
    , elbow_antagonist_setpoint(0)
    , wrist_joint_angle(0.0)
    , wrist_joint_angle_setpoint(0.0)
    , wrist_agonist_setpoint(0)
    , wrist_antagonist_setpoint(0)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _current_type;
  _current_type current;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _gyro_x_type;
  _gyro_x_type gyro_x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _gyro_y_type;
  _gyro_y_type gyro_y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _gyro_z_type;
  _gyro_z_type gyro_z;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _acc_x_type;
  _acc_x_type acc_x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _acc_y_type;
  _acc_y_type acc_y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _acc_z_type;
  _acc_z_type acc_z;

   typedef float _elbow_joint_angle_type;
  _elbow_joint_angle_type elbow_joint_angle;

   typedef float _elbow_joint_angle_setpoint_type;
  _elbow_joint_angle_setpoint_type elbow_joint_angle_setpoint;

   typedef int32_t _elbow_agonist_setpoint_type;
  _elbow_agonist_setpoint_type elbow_agonist_setpoint;

   typedef int32_t _elbow_antagonist_setpoint_type;
  _elbow_antagonist_setpoint_type elbow_antagonist_setpoint;

   typedef float _wrist_joint_angle_type;
  _wrist_joint_angle_type wrist_joint_angle;

   typedef float _wrist_joint_angle_setpoint_type;
  _wrist_joint_angle_setpoint_type wrist_joint_angle_setpoint;

   typedef int32_t _wrist_agonist_setpoint_type;
  _wrist_agonist_setpoint_type wrist_agonist_setpoint;

   typedef int32_t _wrist_antagonist_setpoint_type;
  _wrist_antagonist_setpoint_type wrist_antagonist_setpoint;





  typedef boost::shared_ptr< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ArmStatus_

typedef ::roboy_middleware_msgs::ArmStatus_<std::allocator<void> > ArmStatus;

typedef boost::shared_ptr< ::roboy_middleware_msgs::ArmStatus > ArmStatusPtr;
typedef boost::shared_ptr< ::roboy_middleware_msgs::ArmStatus const> ArmStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32e4d7965075582ce76a819199877dad";
  }

  static const char* value(const ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32e4d7965075582cULL;
  static const uint64_t static_value2 = 0xe76a819199877dadULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_middleware_msgs/ArmStatus";
  }

  static const char* value(const ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"# six current measurements per arm board\n"
"uint16[] current\n"
"float32[] gyro_x\n"
"float32[] gyro_y\n"
"float32[] gyro_z\n"
"float32[] acc_x\n"
"float32[] acc_y\n"
"float32[] acc_z\n"
"float32 elbow_joint_angle\n"
"float32 elbow_joint_angle_setpoint\n"
"int32 elbow_agonist_setpoint\n"
"int32 elbow_antagonist_setpoint\n"
"float32 wrist_joint_angle\n"
"float32 wrist_joint_angle_setpoint\n"
"int32 wrist_agonist_setpoint\n"
"int32 wrist_antagonist_setpoint\n"
;
  }

  static const char* value(const ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.current);
      stream.next(m.gyro_x);
      stream.next(m.gyro_y);
      stream.next(m.gyro_z);
      stream.next(m.acc_x);
      stream.next(m.acc_y);
      stream.next(m.acc_z);
      stream.next(m.elbow_joint_angle);
      stream.next(m.elbow_joint_angle_setpoint);
      stream.next(m.elbow_agonist_setpoint);
      stream.next(m.elbow_antagonist_setpoint);
      stream.next(m.wrist_joint_angle);
      stream.next(m.wrist_joint_angle_setpoint);
      stream.next(m.wrist_agonist_setpoint);
      stream.next(m.wrist_antagonist_setpoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArmStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_middleware_msgs::ArmStatus_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "current[]" << std::endl;
    for (size_t i = 0; i < v.current.size(); ++i)
    {
      s << indent << "  current[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.current[i]);
    }
    s << indent << "gyro_x[]" << std::endl;
    for (size_t i = 0; i < v.gyro_x.size(); ++i)
    {
      s << indent << "  gyro_x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.gyro_x[i]);
    }
    s << indent << "gyro_y[]" << std::endl;
    for (size_t i = 0; i < v.gyro_y.size(); ++i)
    {
      s << indent << "  gyro_y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.gyro_y[i]);
    }
    s << indent << "gyro_z[]" << std::endl;
    for (size_t i = 0; i < v.gyro_z.size(); ++i)
    {
      s << indent << "  gyro_z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.gyro_z[i]);
    }
    s << indent << "acc_x[]" << std::endl;
    for (size_t i = 0; i < v.acc_x.size(); ++i)
    {
      s << indent << "  acc_x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.acc_x[i]);
    }
    s << indent << "acc_y[]" << std::endl;
    for (size_t i = 0; i < v.acc_y.size(); ++i)
    {
      s << indent << "  acc_y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.acc_y[i]);
    }
    s << indent << "acc_z[]" << std::endl;
    for (size_t i = 0; i < v.acc_z.size(); ++i)
    {
      s << indent << "  acc_z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.acc_z[i]);
    }
    s << indent << "elbow_joint_angle: ";
    Printer<float>::stream(s, indent + "  ", v.elbow_joint_angle);
    s << indent << "elbow_joint_angle_setpoint: ";
    Printer<float>::stream(s, indent + "  ", v.elbow_joint_angle_setpoint);
    s << indent << "elbow_agonist_setpoint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.elbow_agonist_setpoint);
    s << indent << "elbow_antagonist_setpoint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.elbow_antagonist_setpoint);
    s << indent << "wrist_joint_angle: ";
    Printer<float>::stream(s, indent + "  ", v.wrist_joint_angle);
    s << indent << "wrist_joint_angle_setpoint: ";
    Printer<float>::stream(s, indent + "  ", v.wrist_joint_angle_setpoint);
    s << indent << "wrist_agonist_setpoint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.wrist_agonist_setpoint);
    s << indent << "wrist_antagonist_setpoint: ";
    Printer<int32_t>::stream(s, indent + "  ", v.wrist_antagonist_setpoint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_MIDDLEWARE_MSGS_MESSAGE_ARMSTATUS_H