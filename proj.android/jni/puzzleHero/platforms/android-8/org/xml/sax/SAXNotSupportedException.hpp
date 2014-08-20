/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.SAXNotSupportedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_SAXNOTSUPPORTEDEXCEPTION_HPP_DECL
#define J2CPP_ORG_XML_SAX_SAXNOTSUPPORTEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { class SAXException; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <org/xml/sax/SAXException.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class SAXNotSupportedException;
	class SAXNotSupportedException
		: public object<SAXNotSupportedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SAXNotSupportedException(jobject jobj)
		: object<SAXNotSupportedException>(jobj)
		{
		}

		operator local_ref<org::xml::sax::SAXException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::Serializable>() const;


		SAXNotSupportedException();
		SAXNotSupportedException(local_ref< java::lang::String > const&);
	}; //class SAXNotSupportedException

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_SAXNOTSUPPORTEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_SAXNOTSUPPORTEDEXCEPTION_HPP_IMPL
#define J2CPP_ORG_XML_SAX_SAXNOTSUPPORTEDEXCEPTION_HPP_IMPL

namespace j2cpp {



org::xml::sax::SAXNotSupportedException::operator local_ref<org::xml::sax::SAXException>() const
{
	return local_ref<org::xml::sax::SAXException>(get_jobject());
}

org::xml::sax::SAXNotSupportedException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::xml::sax::SAXNotSupportedException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

org::xml::sax::SAXNotSupportedException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

org::xml::sax::SAXNotSupportedException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


org::xml::sax::SAXNotSupportedException::SAXNotSupportedException()
: object<org::xml::sax::SAXNotSupportedException>(
	call_new_object<
		org::xml::sax::SAXNotSupportedException::J2CPP_CLASS_NAME,
		org::xml::sax::SAXNotSupportedException::J2CPP_METHOD_NAME(0),
		org::xml::sax::SAXNotSupportedException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::xml::sax::SAXNotSupportedException::SAXNotSupportedException(local_ref< java::lang::String > const &a0)
: object<org::xml::sax::SAXNotSupportedException>(
	call_new_object<
		org::xml::sax::SAXNotSupportedException::J2CPP_CLASS_NAME,
		org::xml::sax::SAXNotSupportedException::J2CPP_METHOD_NAME(1),
		org::xml::sax::SAXNotSupportedException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(org::xml::sax::SAXNotSupportedException,"org/xml/sax/SAXNotSupportedException")
J2CPP_DEFINE_METHOD(org::xml::sax::SAXNotSupportedException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::SAXNotSupportedException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_SAXNOTSUPPORTEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
