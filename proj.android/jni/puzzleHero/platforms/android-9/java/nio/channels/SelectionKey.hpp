/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.SelectionKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTIONKEY_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTIONKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Selector; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class SelectableChannel; } } } }


#include <java/lang/Object.hpp>
#include <java/nio/channels/SelectableChannel.hpp>
#include <java/nio/channels/Selector.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class SelectionKey;
	class SelectionKey
		: public object<SelectionKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit SelectionKey(jobject jobj)
		: object<SelectionKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > attach(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > attachment();
		void cancel();
		local_ref< java::nio::channels::SelectableChannel > channel();
		jint interestOps();
		local_ref< java::nio::channels::SelectionKey > interestOps(jint);
		jboolean isAcceptable();
		jboolean isConnectable();
		jboolean isReadable();
		jboolean isValid();
		jboolean isWritable();
		jint readyOps();
		local_ref< java::nio::channels::Selector > selector();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > OP_ACCEPT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > OP_CONNECT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > OP_READ;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > OP_WRITE;
	}; //class SelectionKey

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTIONKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTIONKEY_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTIONKEY_HPP_IMPL

namespace j2cpp {



java::nio::channels::SelectionKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::Object > java::nio::channels::SelectionKey::attach(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(1),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::nio::channels::SelectionKey::attachment()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(2),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

void java::nio::channels::SelectionKey::cancel()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(3),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

local_ref< java::nio::channels::SelectableChannel > java::nio::channels::SelectionKey::channel()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(4),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::nio::channels::SelectableChannel >
	>(get_jobject());
}

jint java::nio::channels::SelectionKey::interestOps()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(5),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

local_ref< java::nio::channels::SelectionKey > java::nio::channels::SelectionKey::interestOps(jint a0)
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(6),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::nio::channels::SelectionKey >
	>(get_jobject(), a0);
}

jboolean java::nio::channels::SelectionKey::isAcceptable()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(7),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

jboolean java::nio::channels::SelectionKey::isConnectable()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(8),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

jboolean java::nio::channels::SelectionKey::isReadable()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(9),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

jboolean java::nio::channels::SelectionKey::isValid()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(10),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

jboolean java::nio::channels::SelectionKey::isWritable()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(11),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

jint java::nio::channels::SelectionKey::readyOps()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(12),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

local_ref< java::nio::channels::Selector > java::nio::channels::SelectionKey::selector()
{
	return call_method<
		java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
		java::nio::channels::SelectionKey::J2CPP_METHOD_NAME(13),
		java::nio::channels::SelectionKey::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::nio::channels::Selector >
	>(get_jobject());
}


static_field<
	java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
	java::nio::channels::SelectionKey::J2CPP_FIELD_NAME(0),
	java::nio::channels::SelectionKey::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::nio::channels::SelectionKey::OP_ACCEPT;

static_field<
	java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
	java::nio::channels::SelectionKey::J2CPP_FIELD_NAME(1),
	java::nio::channels::SelectionKey::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::nio::channels::SelectionKey::OP_CONNECT;

static_field<
	java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
	java::nio::channels::SelectionKey::J2CPP_FIELD_NAME(2),
	java::nio::channels::SelectionKey::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::nio::channels::SelectionKey::OP_READ;

static_field<
	java::nio::channels::SelectionKey::J2CPP_CLASS_NAME,
	java::nio::channels::SelectionKey::J2CPP_FIELD_NAME(3),
	java::nio::channels::SelectionKey::J2CPP_FIELD_SIGNATURE(3),
	jint
> java::nio::channels::SelectionKey::OP_WRITE;


J2CPP_DEFINE_CLASS(java::nio::channels::SelectionKey,"java/nio/channels/SelectionKey")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,1,"attach","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,2,"attachment","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,3,"cancel","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,4,"channel","()Ljava/nio/channels/SelectableChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,5,"interestOps","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,6,"interestOps","(I)Ljava/nio/channels/SelectionKey;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,7,"isAcceptable","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,8,"isConnectable","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,9,"isReadable","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,10,"isValid","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,11,"isWritable","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,12,"readyOps","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectionKey,13,"selector","()Ljava/nio/channels/Selector;")
J2CPP_DEFINE_FIELD(java::nio::channels::SelectionKey,0,"OP_ACCEPT","I")
J2CPP_DEFINE_FIELD(java::nio::channels::SelectionKey,1,"OP_CONNECT","I")
J2CPP_DEFINE_FIELD(java::nio::channels::SelectionKey,2,"OP_READ","I")
J2CPP_DEFINE_FIELD(java::nio::channels::SelectionKey,3,"OP_WRITE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTIONKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
