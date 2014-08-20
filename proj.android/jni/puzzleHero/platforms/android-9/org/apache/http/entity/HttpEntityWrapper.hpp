/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.entity.HttpEntityWrapper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace entity {

	class HttpEntityWrapper;
	class HttpEntityWrapper
		: public object<HttpEntityWrapper>
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
		J2CPP_DECLARE_FIELD(0)

		explicit HttpEntityWrapper(jobject jobj)
		: object<HttpEntityWrapper>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpEntity>() const;


		HttpEntityWrapper(local_ref< org::apache::http::HttpEntity > const&);
		jboolean isRepeatable();
		jboolean isChunked();
		jlong getContentLength();
		local_ref< org::apache::http::Header > getContentType();
		local_ref< org::apache::http::Header > getContentEncoding();
		local_ref< java::io::InputStream > getContent();
		void writeTo(local_ref< java::io::OutputStream >  const&);
		jboolean isStreaming();
		void consumeContent();

	}; //class HttpEntityWrapper

} //namespace entity
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_HPP_IMPL

namespace j2cpp {



org::apache::http::entity::HttpEntityWrapper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::entity::HttpEntityWrapper::operator local_ref<org::apache::http::HttpEntity>() const
{
	return local_ref<org::apache::http::HttpEntity>(get_jobject());
}


org::apache::http::entity::HttpEntityWrapper::HttpEntityWrapper(local_ref< org::apache::http::HttpEntity > const &a0)
: object<org::apache::http::entity::HttpEntityWrapper>(
	call_new_object<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(0),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jboolean org::apache::http::entity::HttpEntityWrapper::isRepeatable()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(1),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

jboolean org::apache::http::entity::HttpEntityWrapper::isChunked()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(2),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

jlong org::apache::http::entity::HttpEntityWrapper::getContentLength()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(3),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::entity::HttpEntityWrapper::getContentType()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(4),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::Header >
	>(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::entity::HttpEntityWrapper::getContentEncoding()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(5),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::Header >
	>(get_jobject());
}

local_ref< java::io::InputStream > org::apache::http::entity::HttpEntityWrapper::getContent()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(6),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

void org::apache::http::entity::HttpEntityWrapper::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(7),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

jboolean org::apache::http::entity::HttpEntityWrapper::isStreaming()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(8),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject());
}

void org::apache::http::entity::HttpEntityWrapper::consumeContent()
{
	return call_method<
		org::apache::http::entity::HttpEntityWrapper::J2CPP_CLASS_NAME,
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_NAME(9),
		org::apache::http::entity::HttpEntityWrapper::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::entity::HttpEntityWrapper,"org/apache/http/entity/HttpEntityWrapper")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,0,"<init>","(Lorg/apache/http/HttpEntity;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,1,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,2,"isChunked","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,3,"getContentLength","()J")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,4,"getContentType","()Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,5,"getContentEncoding","()Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,6,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,7,"writeTo","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,8,"isStreaming","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::HttpEntityWrapper,9,"consumeContent","()V")
J2CPP_DEFINE_FIELD(org::apache::http::entity::HttpEntityWrapper,0,"wrappedEntity","Lorg/apache/http/HttpEntity;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
