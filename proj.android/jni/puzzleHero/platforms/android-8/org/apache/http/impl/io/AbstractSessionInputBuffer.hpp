/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.AbstractSessionInputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class AbstractSessionInputBuffer;
	class AbstractSessionInputBuffer
		: public object<AbstractSessionInputBuffer>
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

		explicit AbstractSessionInputBuffer(jobject jobj)
		: object<AbstractSessionInputBuffer>(jobj)
		{
		}

		operator local_ref<org::apache::http::io::SessionInputBuffer>() const;
		operator local_ref<java::lang::Object>() const;


		AbstractSessionInputBuffer();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		jint read(local_ref< array<jbyte,1> >  const&);
		jint readLine(local_ref< org::apache::http::util::CharArrayBuffer >  const&);
		local_ref< java::lang::String > readLine();
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class AbstractSessionInputBuffer

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::AbstractSessionInputBuffer::operator local_ref<org::apache::http::io::SessionInputBuffer>() const
{
	return local_ref<org::apache::http::io::SessionInputBuffer>(get_jobject());
}

org::apache::http::impl::io::AbstractSessionInputBuffer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::io::AbstractSessionInputBuffer::AbstractSessionInputBuffer()
: object<org::apache::http::impl::io::AbstractSessionInputBuffer>(
	call_new_object<
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}





jint org::apache::http::impl::io::AbstractSessionInputBuffer::read()
{
	return call_method<
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint org::apache::http::impl::io::AbstractSessionInputBuffer::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0, a1, a2);
}

jint org::apache::http::impl::io::AbstractSessionInputBuffer::read(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0);
}

jint org::apache::http::impl::io::AbstractSessionInputBuffer::readLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return call_method<
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::impl::io::AbstractSessionInputBuffer::readLine()
{
	return call_method<
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::impl::io::AbstractSessionInputBuffer::getMetrics()
{
	return call_method<
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::io::AbstractSessionInputBuffer::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::apache::http::io::HttpTransportMetrics >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::AbstractSessionInputBuffer,"org/apache/http/impl/io/AbstractSessionInputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,1,"init","(Ljava/io/InputStream;ILorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,2,"fillBuffer","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,3,"hasBufferedData","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,4,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,5,"read","([BII)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,6,"read","([B)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,7,"readLine","(Lorg/apache/http/util/CharArrayBuffer;)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,8,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionInputBuffer,9,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONINPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
