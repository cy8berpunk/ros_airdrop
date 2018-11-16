// Generated by gencpp from file mission_node/start_missionResponse.msg
// DO NOT EDIT!


#ifndef MISSION_NODE_MESSAGE_START_MISSIONRESPONSE_H
#define MISSION_NODE_MESSAGE_START_MISSIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mission_node
{
template <class ContainerAllocator>
struct start_missionResponse_
{
  typedef start_missionResponse_<ContainerAllocator> Type;

  start_missionResponse_()
    : mission_status(0)  {
    }
  start_missionResponse_(const ContainerAllocator& _alloc)
    : mission_status(0)  {
  (void)_alloc;
    }



   typedef int64_t _mission_status_type;
  _mission_status_type mission_status;





  typedef boost::shared_ptr< ::mission_node::start_missionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mission_node::start_missionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct start_missionResponse_

typedef ::mission_node::start_missionResponse_<std::allocator<void> > start_missionResponse;

typedef boost::shared_ptr< ::mission_node::start_missionResponse > start_missionResponsePtr;
typedef boost::shared_ptr< ::mission_node::start_missionResponse const> start_missionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mission_node::start_missionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mission_node::start_missionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mission_node

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mission_node::start_missionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mission_node::start_missionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mission_node::start_missionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mission_node::start_missionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mission_node::start_missionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mission_node::start_missionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mission_node::start_missionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c59dae9ebc238d37356f7d711e72da76";
  }

  static const char* value(const ::mission_node::start_missionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc59dae9ebc238d37ULL;
  static const uint64_t static_value2 = 0x356f7d711e72da76ULL;
};

template<class ContainerAllocator>
struct DataType< ::mission_node::start_missionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mission_node/start_missionResponse";
  }

  static const char* value(const ::mission_node::start_missionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mission_node::start_missionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 mission_status\n\
\n\
";
  }

  static const char* value(const ::mission_node::start_missionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mission_node::start_missionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mission_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct start_missionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mission_node::start_missionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mission_node::start_missionResponse_<ContainerAllocator>& v)
  {
    s << indent << "mission_status: ";
    Printer<int64_t>::stream(s, indent + "  ", v.mission_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MISSION_NODE_MESSAGE_START_MISSIONRESPONSE_H
