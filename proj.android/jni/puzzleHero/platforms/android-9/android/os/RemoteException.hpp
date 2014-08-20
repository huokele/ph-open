/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.RemoteException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace android { namespace util { class AndroidException; } } }


#include <android/util/AndroidException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace android { namespace os {

	class RemoteException;
	class RemoteException
		: public object<RemoteException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit RemoteException(jobject jobj)
		: object<RemoteException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<android::util::AndroidException>() const;


		RemoteException();
	}; //class RemoteException

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_IMPL

namespace j2cpp {



android::os::RemoteException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

android::os::RemoteException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

android::os::RemoteException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::os::RemoteException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::os::RemoteException::operator local_ref<android::util::AndroidException>() const
{
	return local_ref<android::util::AndroidException>(get_jobject());
}


android::os::RemoteException::RemoteException()
: object<android::os::RemoteException>(
	call_new_object<
		android::os::RemoteException::J2CPP_CLASS_NAME,
		android::os::RemoteException::J2CPP_METHOD_NAME(0),
		android::os::RemoteException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(android::os::RemoteException,"android/os/RemoteException")
J2CPP_DEFINE_METHOD(android::os::RemoteException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
