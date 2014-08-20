/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.parsers.FactoryConfigurationError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Error; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Error.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class FactoryConfigurationError;
	class FactoryConfigurationError
		: public object<FactoryConfigurationError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit FactoryConfigurationError(jobject jobj)
		: object<FactoryConfigurationError>(jobj)
		{
		}

		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Error>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		FactoryConfigurationError();
		FactoryConfigurationError(local_ref< java::lang::String > const&);
		FactoryConfigurationError(local_ref< java::lang::Exception > const&);
		FactoryConfigurationError(local_ref< java::lang::Exception > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getMessage();
		local_ref< java::lang::Exception > getException();
	}; //class FactoryConfigurationError

} //namespace parsers
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_IMPL

namespace j2cpp {



javax::xml::parsers::FactoryConfigurationError::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

javax::xml::parsers::FactoryConfigurationError::operator local_ref<java::lang::Error>() const
{
	return local_ref<java::lang::Error>(get_jobject());
}

javax::xml::parsers::FactoryConfigurationError::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::parsers::FactoryConfigurationError::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError()
: object<javax::xml::parsers::FactoryConfigurationError>(
	call_new_object<
		javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME,
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(0),
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError(local_ref< java::lang::String > const &a0)
: object<javax::xml::parsers::FactoryConfigurationError>(
	call_new_object<
		javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME,
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(1),
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError(local_ref< java::lang::Exception > const &a0)
: object<javax::xml::parsers::FactoryConfigurationError>(
	call_new_object<
		javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME,
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(2),
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



javax::xml::parsers::FactoryConfigurationError::FactoryConfigurationError(local_ref< java::lang::Exception > const &a0, local_ref< java::lang::String > const &a1)
: object<javax::xml::parsers::FactoryConfigurationError>(
	call_new_object<
		javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME,
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(3),
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1)
)
{
}


local_ref< java::lang::String > javax::xml::parsers::FactoryConfigurationError::getMessage()
{
	return call_method<
		javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME,
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(4),
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Exception > javax::xml::parsers::FactoryConfigurationError::getException()
{
	return call_method<
		javax::xml::parsers::FactoryConfigurationError::J2CPP_CLASS_NAME,
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_NAME(5),
		javax::xml::parsers::FactoryConfigurationError::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Exception >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::parsers::FactoryConfigurationError,"javax/xml/parsers/FactoryConfigurationError")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,2,"<init>","(Ljava/lang/Exception;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,3,"<init>","(Ljava/lang/Exception;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,4,"getMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::FactoryConfigurationError,5,"getException","()Ljava/lang/Exception;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_FACTORYCONFIGURATIONERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
