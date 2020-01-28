// Generated by gencpp from file roboy_simulation_msgs/ControllerParameters.msg
// DO NOT EDIT!


#ifndef ROBOY_SIMULATION_MSGS_MESSAGE_CONTROLLERPARAMETERS_H
#define ROBOY_SIMULATION_MSGS_MESSAGE_CONTROLLERPARAMETERS_H


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
struct ControllerParameters_
{
  typedef ControllerParameters_<ContainerAllocator> Type;

  ControllerParameters_()
    : roboy_id(0)
    , f_contact(0.0)
    , d_lift(0.0)
    , d_prep(0.0)
    , f_max(0.0)
    , psi_heading(0.0)
    , omega_heading(0.0)
    , v_forward(0.0)
    , v_com(0.0)
    , k_h(0.0)
    , k_p_theta_left()
    , k_p_theta_right()
    , k_d_theta_left()
    , k_d_theta_right()
    , k_p_phi()
    , k_d_phi()
    , k_v(0.0)
    , k_p(0.0)
    , k_q(0.0)
    , k_omega(0.0)
    , k_m_fplus(0.0)
    , c_hip_lift(0.0)
    , c_knee_lift(0.0)
    , c_stance_lift(0.0)
    , c_swing_prep(0.0)
    , theta_groin_0()
    , phi_groin_0()
    , theta_trunk_0(0.0)
    , phi_trunk_0(0.0)
    , theta_knee()
    , theta_ankle()
    , d_s()
    , d_c()
    , v_s()
    , v_c()
    , sim_time(0.0)  {
    }
  ControllerParameters_(const ContainerAllocator& _alloc)
    : roboy_id(0)
    , f_contact(0.0)
    , d_lift(0.0)
    , d_prep(0.0)
    , f_max(0.0)
    , psi_heading(0.0)
    , omega_heading(0.0)
    , v_forward(0.0)
    , v_com(0.0)
    , k_h(0.0)
    , k_p_theta_left(_alloc)
    , k_p_theta_right(_alloc)
    , k_d_theta_left(_alloc)
    , k_d_theta_right(_alloc)
    , k_p_phi(_alloc)
    , k_d_phi(_alloc)
    , k_v(0.0)
    , k_p(0.0)
    , k_q(0.0)
    , k_omega(0.0)
    , k_m_fplus(0.0)
    , c_hip_lift(0.0)
    , c_knee_lift(0.0)
    , c_stance_lift(0.0)
    , c_swing_prep(0.0)
    , theta_groin_0(_alloc)
    , phi_groin_0(_alloc)
    , theta_trunk_0(0.0)
    , phi_trunk_0(0.0)
    , theta_knee(_alloc)
    , theta_ankle(_alloc)
    , d_s(_alloc)
    , d_c(_alloc)
    , v_s(_alloc)
    , v_c(_alloc)
    , sim_time(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _roboy_id_type;
  _roboy_id_type roboy_id;

   typedef double _f_contact_type;
  _f_contact_type f_contact;

   typedef double _d_lift_type;
  _d_lift_type d_lift;

   typedef double _d_prep_type;
  _d_prep_type d_prep;

   typedef double _f_max_type;
  _f_max_type f_max;

   typedef double _psi_heading_type;
  _psi_heading_type psi_heading;

   typedef double _omega_heading_type;
  _omega_heading_type omega_heading;

   typedef double _v_forward_type;
  _v_forward_type v_forward;

   typedef double _v_com_type;
  _v_com_type v_com;

   typedef double _k_h_type;
  _k_h_type k_h;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _k_p_theta_left_type;
  _k_p_theta_left_type k_p_theta_left;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _k_p_theta_right_type;
  _k_p_theta_right_type k_p_theta_right;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _k_d_theta_left_type;
  _k_d_theta_left_type k_d_theta_left;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _k_d_theta_right_type;
  _k_d_theta_right_type k_d_theta_right;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _k_p_phi_type;
  _k_p_phi_type k_p_phi;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _k_d_phi_type;
  _k_d_phi_type k_d_phi;

   typedef double _k_v_type;
  _k_v_type k_v;

   typedef double _k_p_type;
  _k_p_type k_p;

   typedef double _k_q_type;
  _k_q_type k_q;

   typedef double _k_omega_type;
  _k_omega_type k_omega;

   typedef double _k_m_fplus_type;
  _k_m_fplus_type k_m_fplus;

   typedef double _c_hip_lift_type;
  _c_hip_lift_type c_hip_lift;

   typedef double _c_knee_lift_type;
  _c_knee_lift_type c_knee_lift;

   typedef double _c_stance_lift_type;
  _c_stance_lift_type c_stance_lift;

   typedef double _c_swing_prep_type;
  _c_swing_prep_type c_swing_prep;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _theta_groin_0_type;
  _theta_groin_0_type theta_groin_0;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _phi_groin_0_type;
  _phi_groin_0_type phi_groin_0;

   typedef double _theta_trunk_0_type;
  _theta_trunk_0_type theta_trunk_0;

   typedef double _phi_trunk_0_type;
  _phi_trunk_0_type phi_trunk_0;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _theta_knee_type;
  _theta_knee_type theta_knee;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _theta_ankle_type;
  _theta_ankle_type theta_ankle;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _d_s_type;
  _d_s_type d_s;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _d_c_type;
  _d_c_type d_c;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _v_s_type;
  _v_s_type v_s;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _v_c_type;
  _v_c_type v_c;

   typedef float _sim_time_type;
  _sim_time_type sim_time;





  typedef boost::shared_ptr< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerParameters_

typedef ::roboy_simulation_msgs::ControllerParameters_<std::allocator<void> > ControllerParameters;

typedef boost::shared_ptr< ::roboy_simulation_msgs::ControllerParameters > ControllerParametersPtr;
typedef boost::shared_ptr< ::roboy_simulation_msgs::ControllerParameters const> ControllerParametersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4339872af975f1c90e6139dc089f82f0";
  }

  static const char* value(const ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4339872af975f1c9ULL;
  static const uint64_t static_value2 = 0x0e6139dc089f82f0ULL;
};

template<class ContainerAllocator>
struct DataType< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboy_simulation_msgs/ControllerParameters";
  }

  static const char* value(const ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 roboy_id\n"
"float64 f_contact\n"
"float64 d_lift\n"
"float64 d_prep\n"
"float64 f_max\n"
"float64 psi_heading\n"
"float64 omega_heading\n"
"float64 v_forward\n"
"float64 v_com\n"
"float64 k_h\n"
"float64[] k_p_theta_left\n"
"float64[] k_p_theta_right\n"
"float64[] k_d_theta_left\n"
"float64[] k_d_theta_right\n"
"float64[] k_p_phi\n"
"float64[] k_d_phi\n"
"float64 k_v\n"
"float64 k_p\n"
"float64 k_q\n"
"float64 k_omega\n"
"float64 k_m_fplus\n"
"float64 c_hip_lift\n"
"float64 c_knee_lift\n"
"float64 c_stance_lift\n"
"float64 c_swing_prep\n"
"float64[] theta_groin_0\n"
"float64[] phi_groin_0\n"
"float64 theta_trunk_0\n"
"float64 phi_trunk_0\n"
"float64[] theta_knee\n"
"float64[] theta_ankle\n"
"float64[] d_s\n"
"float64[] d_c\n"
"float64[] v_s\n"
"float64[] v_c\n"
"float32 sim_time\n"
;
  }

  static const char* value(const ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roboy_id);
      stream.next(m.f_contact);
      stream.next(m.d_lift);
      stream.next(m.d_prep);
      stream.next(m.f_max);
      stream.next(m.psi_heading);
      stream.next(m.omega_heading);
      stream.next(m.v_forward);
      stream.next(m.v_com);
      stream.next(m.k_h);
      stream.next(m.k_p_theta_left);
      stream.next(m.k_p_theta_right);
      stream.next(m.k_d_theta_left);
      stream.next(m.k_d_theta_right);
      stream.next(m.k_p_phi);
      stream.next(m.k_d_phi);
      stream.next(m.k_v);
      stream.next(m.k_p);
      stream.next(m.k_q);
      stream.next(m.k_omega);
      stream.next(m.k_m_fplus);
      stream.next(m.c_hip_lift);
      stream.next(m.c_knee_lift);
      stream.next(m.c_stance_lift);
      stream.next(m.c_swing_prep);
      stream.next(m.theta_groin_0);
      stream.next(m.phi_groin_0);
      stream.next(m.theta_trunk_0);
      stream.next(m.phi_trunk_0);
      stream.next(m.theta_knee);
      stream.next(m.theta_ankle);
      stream.next(m.d_s);
      stream.next(m.d_c);
      stream.next(m.v_s);
      stream.next(m.v_c);
      stream.next(m.sim_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerParameters_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboy_simulation_msgs::ControllerParameters_<ContainerAllocator>& v)
  {
    s << indent << "roboy_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.roboy_id);
    s << indent << "f_contact: ";
    Printer<double>::stream(s, indent + "  ", v.f_contact);
    s << indent << "d_lift: ";
    Printer<double>::stream(s, indent + "  ", v.d_lift);
    s << indent << "d_prep: ";
    Printer<double>::stream(s, indent + "  ", v.d_prep);
    s << indent << "f_max: ";
    Printer<double>::stream(s, indent + "  ", v.f_max);
    s << indent << "psi_heading: ";
    Printer<double>::stream(s, indent + "  ", v.psi_heading);
    s << indent << "omega_heading: ";
    Printer<double>::stream(s, indent + "  ", v.omega_heading);
    s << indent << "v_forward: ";
    Printer<double>::stream(s, indent + "  ", v.v_forward);
    s << indent << "v_com: ";
    Printer<double>::stream(s, indent + "  ", v.v_com);
    s << indent << "k_h: ";
    Printer<double>::stream(s, indent + "  ", v.k_h);
    s << indent << "k_p_theta_left[]" << std::endl;
    for (size_t i = 0; i < v.k_p_theta_left.size(); ++i)
    {
      s << indent << "  k_p_theta_left[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.k_p_theta_left[i]);
    }
    s << indent << "k_p_theta_right[]" << std::endl;
    for (size_t i = 0; i < v.k_p_theta_right.size(); ++i)
    {
      s << indent << "  k_p_theta_right[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.k_p_theta_right[i]);
    }
    s << indent << "k_d_theta_left[]" << std::endl;
    for (size_t i = 0; i < v.k_d_theta_left.size(); ++i)
    {
      s << indent << "  k_d_theta_left[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.k_d_theta_left[i]);
    }
    s << indent << "k_d_theta_right[]" << std::endl;
    for (size_t i = 0; i < v.k_d_theta_right.size(); ++i)
    {
      s << indent << "  k_d_theta_right[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.k_d_theta_right[i]);
    }
    s << indent << "k_p_phi[]" << std::endl;
    for (size_t i = 0; i < v.k_p_phi.size(); ++i)
    {
      s << indent << "  k_p_phi[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.k_p_phi[i]);
    }
    s << indent << "k_d_phi[]" << std::endl;
    for (size_t i = 0; i < v.k_d_phi.size(); ++i)
    {
      s << indent << "  k_d_phi[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.k_d_phi[i]);
    }
    s << indent << "k_v: ";
    Printer<double>::stream(s, indent + "  ", v.k_v);
    s << indent << "k_p: ";
    Printer<double>::stream(s, indent + "  ", v.k_p);
    s << indent << "k_q: ";
    Printer<double>::stream(s, indent + "  ", v.k_q);
    s << indent << "k_omega: ";
    Printer<double>::stream(s, indent + "  ", v.k_omega);
    s << indent << "k_m_fplus: ";
    Printer<double>::stream(s, indent + "  ", v.k_m_fplus);
    s << indent << "c_hip_lift: ";
    Printer<double>::stream(s, indent + "  ", v.c_hip_lift);
    s << indent << "c_knee_lift: ";
    Printer<double>::stream(s, indent + "  ", v.c_knee_lift);
    s << indent << "c_stance_lift: ";
    Printer<double>::stream(s, indent + "  ", v.c_stance_lift);
    s << indent << "c_swing_prep: ";
    Printer<double>::stream(s, indent + "  ", v.c_swing_prep);
    s << indent << "theta_groin_0[]" << std::endl;
    for (size_t i = 0; i < v.theta_groin_0.size(); ++i)
    {
      s << indent << "  theta_groin_0[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.theta_groin_0[i]);
    }
    s << indent << "phi_groin_0[]" << std::endl;
    for (size_t i = 0; i < v.phi_groin_0.size(); ++i)
    {
      s << indent << "  phi_groin_0[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.phi_groin_0[i]);
    }
    s << indent << "theta_trunk_0: ";
    Printer<double>::stream(s, indent + "  ", v.theta_trunk_0);
    s << indent << "phi_trunk_0: ";
    Printer<double>::stream(s, indent + "  ", v.phi_trunk_0);
    s << indent << "theta_knee[]" << std::endl;
    for (size_t i = 0; i < v.theta_knee.size(); ++i)
    {
      s << indent << "  theta_knee[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.theta_knee[i]);
    }
    s << indent << "theta_ankle[]" << std::endl;
    for (size_t i = 0; i < v.theta_ankle.size(); ++i)
    {
      s << indent << "  theta_ankle[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.theta_ankle[i]);
    }
    s << indent << "d_s[]" << std::endl;
    for (size_t i = 0; i < v.d_s.size(); ++i)
    {
      s << indent << "  d_s[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.d_s[i]);
    }
    s << indent << "d_c[]" << std::endl;
    for (size_t i = 0; i < v.d_c.size(); ++i)
    {
      s << indent << "  d_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.d_c[i]);
    }
    s << indent << "v_s[]" << std::endl;
    for (size_t i = 0; i < v.v_s.size(); ++i)
    {
      s << indent << "  v_s[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.v_s[i]);
    }
    s << indent << "v_c[]" << std::endl;
    for (size_t i = 0; i < v.v_c.size(); ++i)
    {
      s << indent << "  v_c[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.v_c[i]);
    }
    s << indent << "sim_time: ";
    Printer<float>::stream(s, indent + "  ", v.sim_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOY_SIMULATION_MSGS_MESSAGE_CONTROLLERPARAMETERS_H
