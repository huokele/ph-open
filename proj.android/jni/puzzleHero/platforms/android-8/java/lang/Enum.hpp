/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Enum
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ENUM_HPP_DECL
#define J2CPP_JAVA_LANG_ENUM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Enum;
	class Enum
		: public object<Enum>
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

		explicit Enum(jobject jobj)
		: object<Enum>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::io::Serializable>() const;


		local_ref< java::lang::String > name();
		jint ordinal();
		local_ref< java::lang::String > toString();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jint compareTo(local_ref< java::lang::Enum >  const&);
		local_ref< java::lang::Class > getDeclaringClass();
		static local_ref< java::lang::Enum > valueOf(local_ref< java::lang::Class >  const&, local_ref< java::lang::String >  const&);
		jint compareTo(local_ref< java::lang::Object >  const&);
	}; //class Enum

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ENUM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ENUM_HPP_IMPL
#define J2CPP_JAVA_LANG_ENUM_HPP_IMPL

namespace j2cpp {



java::lang::Enum::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::Enum::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::lang::Enum::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


local_ref< java::lang::String > java::lang::Enum::name()
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(1),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::lang::Enum::ordinal()
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(2),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Enum::toString()
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(3),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean java::lang::Enum::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(4),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

jint java::lang::Enum::hashCode()
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(5),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}


jint java::lang::Enum::compareTo(local_ref< java::lang::Enum > const &a0)
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(7),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::Class > java::lang::Enum::getDeclaringClass()
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(8),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Class >
	>(get_jobject());
}

local_ref< java::lang::Enum > java::lang::Enum::valueOf(local_ref< java::lang::Class > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(9),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Enum >
	>(a0, a1);
}

jint java::lang::Enum::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::Enum::J2CPP_CLASS_NAME,
		java::lang::Enum::J2CPP_METHOD_NAME(10),
		java::lang::Enum::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::lang::Enum,"java/lang/Enum")
J2CPP_DEFINE_METHOD(java::lang::Enum,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::lang::Enum,1,"name","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Enum,2,"ordinal","()I")
J2CPP_DEFINE_METHOD(java::lang::Enum,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Enum,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::Enum,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::Enum,6,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::Enum,7,"compareTo","(Ljava/lang/Enum;)I")
J2CPP_DEFINE_METHOD(java::lang::Enum,8,"getDeclaringClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::Enum,9,"valueOf","(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;")
J2CPP_DEFINE_METHOD(java::lang::Enum,10,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ENUM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
