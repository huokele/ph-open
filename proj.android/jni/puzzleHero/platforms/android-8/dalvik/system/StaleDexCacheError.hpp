/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: dalvik.system.StaleDexCacheError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_STALEDEXCACHEERROR_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_STALEDEXCACHEERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class VirtualMachineError; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Error; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/VirtualMachineError.hpp>


namespace j2cpp {

namespace dalvik { namespace system {

	class StaleDexCacheError;
	class StaleDexCacheError
		: public object<StaleDexCacheError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit StaleDexCacheError(jobject jobj)
		: object<StaleDexCacheError>(jobj)
		{
		}

		operator local_ref<java::lang::VirtualMachineError>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Error>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::Serializable>() const;


		StaleDexCacheError();
		StaleDexCacheError(local_ref< java::lang::String > const&);
	}; //class StaleDexCacheError

} //namespace system
} //namespace dalvik

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_STALEDEXCACHEERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_STALEDEXCACHEERROR_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_STALEDEXCACHEERROR_HPP_IMPL

namespace j2cpp {



dalvik::system::StaleDexCacheError::operator local_ref<java::lang::VirtualMachineError>() const
{
	return local_ref<java::lang::VirtualMachineError>(get_jobject());
}

dalvik::system::StaleDexCacheError::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

dalvik::system::StaleDexCacheError::operator local_ref<java::lang::Error>() const
{
	return local_ref<java::lang::Error>(get_jobject());
}

dalvik::system::StaleDexCacheError::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

dalvik::system::StaleDexCacheError::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


dalvik::system::StaleDexCacheError::StaleDexCacheError()
: object<dalvik::system::StaleDexCacheError>(
	call_new_object<
		dalvik::system::StaleDexCacheError::J2CPP_CLASS_NAME,
		dalvik::system::StaleDexCacheError::J2CPP_METHOD_NAME(0),
		dalvik::system::StaleDexCacheError::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



dalvik::system::StaleDexCacheError::StaleDexCacheError(local_ref< java::lang::String > const &a0)
: object<dalvik::system::StaleDexCacheError>(
	call_new_object<
		dalvik::system::StaleDexCacheError::J2CPP_CLASS_NAME,
		dalvik::system::StaleDexCacheError::J2CPP_METHOD_NAME(1),
		dalvik::system::StaleDexCacheError::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(dalvik::system::StaleDexCacheError,"dalvik/system/StaleDexCacheError")
J2CPP_DEFINE_METHOD(dalvik::system::StaleDexCacheError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(dalvik::system::StaleDexCacheError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_STALEDEXCACHEERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
