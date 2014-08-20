/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.ClientProtocolException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_CLIENTPROTOCOLEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_CLIENTPROTOCOLEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class ClientProtocolException;
	class ClientProtocolException
		: public object<ClientProtocolException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit ClientProtocolException(jobject jobj)
		: object<ClientProtocolException>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;


		ClientProtocolException();
		ClientProtocolException(local_ref< java::lang::String > const&);
		ClientProtocolException(local_ref< java::lang::Throwable > const&);
		ClientProtocolException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
	}; //class ClientProtocolException

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_CLIENTPROTOCOLEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_CLIENTPROTOCOLEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_CLIENTPROTOCOLEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::client::ClientProtocolException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::client::ClientProtocolException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

org::apache::http::client::ClientProtocolException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

org::apache::http::client::ClientProtocolException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

org::apache::http::client::ClientProtocolException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


org::apache::http::client::ClientProtocolException::ClientProtocolException()
: object<org::apache::http::client::ClientProtocolException>(
	call_new_object<
		org::apache::http::client::ClientProtocolException::J2CPP_CLASS_NAME,
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_NAME(0),
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



org::apache::http::client::ClientProtocolException::ClientProtocolException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::client::ClientProtocolException>(
	call_new_object<
		org::apache::http::client::ClientProtocolException::J2CPP_CLASS_NAME,
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_NAME(1),
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



org::apache::http::client::ClientProtocolException::ClientProtocolException(local_ref< java::lang::Throwable > const &a0)
: object<org::apache::http::client::ClientProtocolException>(
	call_new_object<
		org::apache::http::client::ClientProtocolException::J2CPP_CLASS_NAME,
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_NAME(2),
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



org::apache::http::client::ClientProtocolException::ClientProtocolException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<org::apache::http::client::ClientProtocolException>(
	call_new_object<
		org::apache::http::client::ClientProtocolException::J2CPP_CLASS_NAME,
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_NAME(3),
		org::apache::http::client::ClientProtocolException::J2CPP_METHOD_SIGNATURE(3)
	>(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::client::ClientProtocolException,"org/apache/http/client/ClientProtocolException")
J2CPP_DEFINE_METHOD(org::apache::http::client::ClientProtocolException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::ClientProtocolException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::ClientProtocolException,2,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::ClientProtocolException,3,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_CLIENTPROTOCOLEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
