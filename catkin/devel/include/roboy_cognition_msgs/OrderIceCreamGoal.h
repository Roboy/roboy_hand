// Generated by gencpp from file roboy_cognition_msgs/OrderIceCreamGoal.msg
// DO NOT EDIT!


#ifndef ROBOY_COGNITION_MSGS_MESSAGE_ORDERICECREAMGOAL_H
#define ROBOY_COGNITION_MSGS_MESSAGE_ORDERICECREAMGOAL_H


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
struct OrderIceCreamGoal_
{
  typedef OrderIceCreamGoal_<ContainerAllocator> Type;

  OrderIceCreamGoal_()
    : flavors()
    , scoops()  {
    }
  OrderIceCreamGoal_(const ContainerAllocator& _alloc)
    : flavors(_alloc)
    , scoops(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _flavors_type;
  _flavors_type flavors;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _scoops_type;
  _scoops_type scoops;





  typedef boost::shared_ptr< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> const> ConstPtr;

}; // struct OrderIceCreamGoal_

typedef ::roboy_cognition_msgs::OrderIceCreamGoal_<std::allocator<void> > OrderIceCreamGoal;

typedef boost::shared_ptr< ::roboy_cognition_msgs::OrderIceCreamGoal > OrderIceCreamGoalPtr;
typedef boost::shared_ptr< ::roboy_cognition_msgs::OrderIceCreamGoal const> OrderIceCreamGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboy_cognition_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'roboy_cognition_msgs': ['/home/sausy/Projects/roboy_hand/catkin/src/roboy_communication/roboy_cognition_msgs/msg', '/home/sausy/Projects/roboy_hand/catkin/devel/share/roboy_cognition_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1f1cb719f39dc24da6159a391bbf364";
  }

  static const char* value(const ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1f1cb719f39dc24ULL;
  static const uint64_t static_value2 = 0xda6159a391bbf364ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_cognition_msgs/OrderIceCreamGoal";
  }

  static const char* value(const ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# luigi sends ice cream order\n"
"# number of scoops at position i corresponds to flavor at position i\n"
"string[] flavors\n"
"int32[] scoops\n"
;
  }

  static const char* value(const ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flavors);
      stream.next(m.scoops);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OrderIceCreamGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_cognition_msgs::OrderIceCreamGoal_<ContainerAllocator>& v)
  {
    s << indent << "flavors[]" << std::endl;
    for (size_t i = 0; i < v.flavors.size(); ++i)
    {
      s << indent << "  flavors[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.flavors[i]);
    }
    s << indent << "scoops[]" << std::endl;
    for (size_t i = 0; i < v.scoops.size(); ++i)
    {
      s << indent << "  scoops[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.scoops[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_COGNITION_MSGS_MESSAGE_ORDERICECREAMGOAL_H
