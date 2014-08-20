/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.InterruptibleChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_INTERRUPTIBLECHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_INTERRUPTIBLECHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Channel; } } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }


#include <java/io/Closeable.hpp>
#include <java/lang/Object.hpp>
#include <java/nio/channels/Channel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class InterruptibleChannel;
	class InterruptibleChannel
		: public object<InterruptibleChannel>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit InterruptibleChannel(jobject jobj)
		: object<InterruptibleChannel>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::nio::channels::Channel>() const;
		operator local_ref<java::io::Closeable>() const;


		void close();
	}; //class InterruptibleChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_INTERRUPTIBLECHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_INTERRUPTIBLECHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_INTERRUPTIBLECHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::InterruptibleChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::InterruptibleChannel::operator local_ref<java::nio::channels::Channel>() const
{
	return local_ref<java::nio::channels::Channel>(get_jobject());
}

java::nio::channels::InterruptibleChannel::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

void java::nio::channels::InterruptibleChannel::close()
{
	return call_method<
		java::nio::channels::InterruptibleChannel::J2CPP_CLASS_NAME,
		java::nio::channels::InterruptibleChannel::J2CPP_METHOD_NAME(0),
		java::nio::channels::InterruptibleChannel::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::nio::channels::InterruptibleChannel,"java/nio/channels/InterruptibleChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::InterruptibleChannel,0,"close","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_INTERRUPTIBLECHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
