// Generated by gencpp from file roboy_control_msgs/Behavior.msg
// DO NOT EDIT!


#ifndef ROBOY_CONTROL_MSGS_MESSAGE_BEHAVIOR_H
#define ROBOY_CONTROL_MSGS_MESSAGE_BEHAVIOR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboy_control_msgs
{
template <class ContainerAllocator>
struct Behavior_
{
  typedef Behavior_<ContainerAllocator> Type;

  Behavior_()
    : name()
    , actions()  {
    }
  Behavior_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , actions(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _actions_type;
  _actions_type actions;





  typedef boost::shared_ptr< ::roboy_control_msgs::Behavior_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_control_msgs::Behavior_<ContainerAllocator> const> ConstPtr;

}; // struct Behavior_

typedef ::roboy_control_msgs::Behavior_<std::allocator<void> > Behavior;

typedef boost::shared_ptr< ::roboy_control_msgs::Behavior > BehaviorPtr;
typedef boost::shared_ptr< ::roboy_control_msgs::Behavior const> BehaviorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_control_msgs::Behavior_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_control_msgs::Behavior_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'roboy_control_msgs': ['/home/sausy/Projects/roboy_hand/catkin/src/roboy_communication/roboy_control_msgs/msg', '/home/sausy/Projects/roboy_hand/catkin/devel/share/roboy_control_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_control_msgs::Behavior_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_control_msgs::Behavior_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_control_msgs::Behavior_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1439b42a51d7a5af5bda5f56b4e3897d";
  }

  static const char* value(const ::roboy_control_msgs::Behavior_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1439b42a51d7a5afULL;
  static const uint64_t static_value2 = 0x5bda5f56b4e3897dULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_control_msgs/Behavior";
  }

  static const char* value(const ::roboy_control_msgs::Behavior_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"string[] actions\n"
;
  }

  static const char* value(const ::roboy_control_msgs::Behavior_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.actions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Behavior_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_control_msgs::Behavior_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_control_msgs::Behavior_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "actions[]" << std::endl;
    for (size_t i = 0; i < v.actions.size(); ++i)
    {
      s << indent << "  actions[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.actions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_CONTROL_MSGS_MESSAGE_BEHAVIOR_H
