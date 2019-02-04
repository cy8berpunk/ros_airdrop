// Generated by gencpp from file cc_node/a_operation_landingRequest.msg
// DO NOT EDIT!


#ifndef CC_NODE_MESSAGE_A_OPERATION_LANDINGREQUEST_H
#define CC_NODE_MESSAGE_A_OPERATION_LANDINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cc_node
{
template <class ContainerAllocator>
struct a_operation_landingRequest_
{
  typedef a_operation_landingRequest_<ContainerAllocator> Type;

  a_operation_landingRequest_()
    : a_operation_landing_reason()  {
    }
  a_operation_landingRequest_(const ContainerAllocator& _alloc)
    : a_operation_landing_reason(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _a_operation_landing_reason_type;
  _a_operation_landing_reason_type a_operation_landing_reason;





  typedef boost::shared_ptr< ::cc_node::a_operation_landingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cc_node::a_operation_landingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct a_operation_landingRequest_

typedef ::cc_node::a_operation_landingRequest_<std::allocator<void> > a_operation_landingRequest;

typedef boost::shared_ptr< ::cc_node::a_operation_landingRequest > a_operation_landingRequestPtr;
typedef boost::shared_ptr< ::cc_node::a_operation_landingRequest const> a_operation_landingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cc_node::a_operation_landingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cc_node

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'cc_node': ['/home/pi/airdrop_ros/src/cc_node/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cc_node::a_operation_landingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cc_node::a_operation_landingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cc_node::a_operation_landingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8d9449150d5fae54194aaadf5d3b93be";
  }

  static const char* value(const ::cc_node::a_operation_landingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8d9449150d5fae54ULL;
  static const uint64_t static_value2 = 0x194aaadf5d3b93beULL;
};

template<class ContainerAllocator>
struct DataType< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc_node/a_operation_landingRequest";
  }

  static const char* value(const ::cc_node::a_operation_landingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string a_operation_landing_reason\n\
";
  }

  static const char* value(const ::cc_node::a_operation_landingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.a_operation_landing_reason);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct a_operation_landingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cc_node::a_operation_landingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cc_node::a_operation_landingRequest_<ContainerAllocator>& v)
  {
    s << indent << "a_operation_landing_reason: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.a_operation_landing_reason);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CC_NODE_MESSAGE_A_OPERATION_LANDINGREQUEST_H
