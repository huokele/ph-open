/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.SocketInputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace io { class AbstractSessionInputBuffer; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/net/Socket.hpp>
#include <org/apache/http/impl/io/AbstractSessionInputBuffer.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class SocketInputBuffer;
	class SocketInputBuffer
		: public object<SocketInputBuffer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SocketInputBuffer(jobject jobj)
		: object<SocketInputBuffer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::io::AbstractSessionInputBuffer>() const;
		operator local_ref<org::apache::http::io::SessionInputBuffer>() const;


		SocketInputBuffer(local_ref< java::net::Socket > const&, jint, local_ref< org::apache::http::params::HttpParams > const&);
		jboolean isDataAvailable(jint);
	}; //class SocketInputBuffer

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::SocketInputBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::io::SocketInputBuffer::operator local_ref<org::apache::http::impl::io::AbstractSessionInputBuffer>() const
{
	return local_ref<org::apache::http::impl::io::AbstractSessionInputBuffer>(get_jobject());
}

org::apache::http::impl::io::SocketInputBuffer::operator local_ref<org::apache::http::io::SessionInputBuffer>() const
{
	return local_ref<org::apache::http::io::SessionInputBuffer>(get_jobject());
}


org::apache::http::impl::io::SocketInputBuffer::SocketInputBuffer(local_ref< java::net::Socket > const &a0, jint a1, local_ref< org::apache::http::params::HttpParams > const &a2)
: object<org::apache::http::impl::io::SocketInputBuffer>(
	call_new_object<
		org::apache::http::impl::io::SocketInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::SocketInputBuffer::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::SocketInputBuffer::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


jboolean org::apache::http::impl::io::SocketInputBuffer::isDataAvailable(jint a0)
{
	return call_method<
		org::apache::http::impl::io::SocketInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::SocketInputBuffer::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::io::SocketInputBuffer::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::SocketInputBuffer,"org/apache/http/impl/io/SocketInputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::SocketInputBuffer,0,"<init>","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::SocketInputBuffer,1,"isDataAvailable","(I)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
