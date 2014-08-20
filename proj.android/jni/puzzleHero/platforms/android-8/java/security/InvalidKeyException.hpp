/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.InvalidKeyException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INVALIDKEYEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_INVALIDKEYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }
namespace j2cpp { namespace java { namespace security { class KeyException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/KeyException.hpp>


namespace j2cpp {

namespace java { namespace security {

	class InvalidKeyException;
	class InvalidKeyException
		: public object<InvalidKeyException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit InvalidKeyException(jobject jobj)
		: object<InvalidKeyException>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::security::GeneralSecurityException>() const;
		operator local_ref<java::security::KeyException>() const;
		operator local_ref<java::io::Serializable>() const;


		InvalidKeyException(local_ref< java::lang::String > const&);
		InvalidKeyException();
		InvalidKeyException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		InvalidKeyException(local_ref< java::lang::Throwable > const&);
	}; //class InvalidKeyException

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INVALIDKEYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INVALIDKEYEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INVALIDKEYEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::InvalidKeyException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::InvalidKeyException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::security::InvalidKeyException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::security::InvalidKeyException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jobject());
}

java::security::InvalidKeyException::operator local_ref<java::security::KeyException>() const
{
	return local_ref<java::security::KeyException>(get_jobject());
}

java::security::InvalidKeyException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::security::InvalidKeyException::InvalidKeyException(local_ref< java::lang::String > const &a0)
: object<java::security::InvalidKeyException>(
	call_new_object<
		java::security::InvalidKeyException::J2CPP_CLASS_NAME,
		java::security::InvalidKeyException::J2CPP_METHOD_NAME(0),
		java::security::InvalidKeyException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::security::InvalidKeyException::InvalidKeyException()
: object<java::security::InvalidKeyException>(
	call_new_object<
		java::security::InvalidKeyException::J2CPP_CLASS_NAME,
		java::security::InvalidKeyException::J2CPP_METHOD_NAME(1),
		java::security::InvalidKeyException::J2CPP_METHOD_SIGNATURE(1)
	>()
)
{
}



java::security::InvalidKeyException::InvalidKeyException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::security::InvalidKeyException>(
	call_new_object<
		java::security::InvalidKeyException::J2CPP_CLASS_NAME,
		java::security::InvalidKeyException::J2CPP_METHOD_NAME(2),
		java::security::InvalidKeyException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



java::security::InvalidKeyException::InvalidKeyException(local_ref< java::lang::Throwable > const &a0)
: object<java::security::InvalidKeyException>(
	call_new_object<
		java::security::InvalidKeyException::J2CPP_CLASS_NAME,
		java::security::InvalidKeyException::J2CPP_METHOD_NAME(3),
		java::security::InvalidKeyException::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::security::InvalidKeyException,"java/security/InvalidKeyException")
J2CPP_DEFINE_METHOD(java::security::InvalidKeyException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::InvalidKeyException,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::InvalidKeyException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::InvalidKeyException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INVALIDKEYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
