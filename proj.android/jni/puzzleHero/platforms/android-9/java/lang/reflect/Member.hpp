/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.Member
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_MEMBER_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_MEMBER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Member;
	class Member
		: public object<Member>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit Member(jobject jobj)
		: object<Member>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Class > getDeclaringClass();
		jint getModifiers();
		local_ref< java::lang::String > getName();
		jboolean isSynthetic();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > PUBLIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > DECLARED;
	}; //class Member

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_MEMBER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_MEMBER_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_MEMBER_HPP_IMPL

namespace j2cpp {



java::lang::reflect::Member::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Class > java::lang::reflect::Member::getDeclaringClass()
{
	return call_method<
		java::lang::reflect::Member::J2CPP_CLASS_NAME,
		java::lang::reflect::Member::J2CPP_METHOD_NAME(0),
		java::lang::reflect::Member::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Class >
	>(get_jobject());
}

jint java::lang::reflect::Member::getModifiers()
{
	return call_method<
		java::lang::reflect::Member::J2CPP_CLASS_NAME,
		java::lang::reflect::Member::J2CPP_METHOD_NAME(1),
		java::lang::reflect::Member::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::reflect::Member::getName()
{
	return call_method<
		java::lang::reflect::Member::J2CPP_CLASS_NAME,
		java::lang::reflect::Member::J2CPP_METHOD_NAME(2),
		java::lang::reflect::Member::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean java::lang::reflect::Member::isSynthetic()
{
	return call_method<
		java::lang::reflect::Member::J2CPP_CLASS_NAME,
		java::lang::reflect::Member::J2CPP_METHOD_NAME(3),
		java::lang::reflect::Member::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}


static_field<
	java::lang::reflect::Member::J2CPP_CLASS_NAME,
	java::lang::reflect::Member::J2CPP_FIELD_NAME(0),
	java::lang::reflect::Member::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::lang::reflect::Member::PUBLIC;

static_field<
	java::lang::reflect::Member::J2CPP_CLASS_NAME,
	java::lang::reflect::Member::J2CPP_FIELD_NAME(1),
	java::lang::reflect::Member::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::lang::reflect::Member::DECLARED;


J2CPP_DEFINE_CLASS(java::lang::reflect::Member,"java/lang/reflect/Member")
J2CPP_DEFINE_METHOD(java::lang::reflect::Member,0,"getDeclaringClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Member,1,"getModifiers","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Member,2,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Member,3,"isSynthetic","()Z")
J2CPP_DEFINE_FIELD(java::lang::reflect::Member,0,"PUBLIC","I")
J2CPP_DEFINE_FIELD(java::lang::reflect::Member,1,"DECLARED","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_MEMBER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
