/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.params.HttpConnectionParamBean
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpAbstractParamBean; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/params/HttpAbstractParamBean.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class HttpConnectionParamBean;
	class HttpConnectionParamBean
		: public object<HttpConnectionParamBean>
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

		explicit HttpConnectionParamBean(jobject jobj)
		: object<HttpConnectionParamBean>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const;


		HttpConnectionParamBean(local_ref< org::apache::http::params::HttpParams > const&);
		void setSoTimeout(jint);
		void setTcpNoDelay(jboolean);
		void setSocketBufferSize(jint);
		void setLinger(jint);
		void setConnectionTimeout(jint);
		void setStaleCheckingEnabled(jboolean);
	}; //class HttpConnectionParamBean

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_HPP_IMPL

namespace j2cpp {



org::apache::http::params::HttpConnectionParamBean::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::params::HttpConnectionParamBean::operator local_ref<org::apache::http::params::HttpAbstractParamBean>() const
{
	return local_ref<org::apache::http::params::HttpAbstractParamBean>(get_jobject());
}


org::apache::http::params::HttpConnectionParamBean::HttpConnectionParamBean(local_ref< org::apache::http::params::HttpParams > const &a0)
: object<org::apache::http::params::HttpConnectionParamBean>(
	call_new_object<
		org::apache::http::params::HttpConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_NAME(0),
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void org::apache::http::params::HttpConnectionParamBean::setSoTimeout(jint a0)
{
	return call_method<
		org::apache::http::params::HttpConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_NAME(1),
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpConnectionParamBean::setTcpNoDelay(jboolean a0)
{
	return call_method<
		org::apache::http::params::HttpConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_NAME(2),
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpConnectionParamBean::setSocketBufferSize(jint a0)
{
	return call_method<
		org::apache::http::params::HttpConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_NAME(3),
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpConnectionParamBean::setLinger(jint a0)
{
	return call_method<
		org::apache::http::params::HttpConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_NAME(4),
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpConnectionParamBean::setConnectionTimeout(jint a0)
{
	return call_method<
		org::apache::http::params::HttpConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_NAME(5),
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::params::HttpConnectionParamBean::setStaleCheckingEnabled(jboolean a0)
{
	return call_method<
		org::apache::http::params::HttpConnectionParamBean::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_NAME(6),
		org::apache::http::params::HttpConnectionParamBean::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::params::HttpConnectionParamBean,"org/apache/http/params/HttpConnectionParamBean")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParamBean,0,"<init>","(Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParamBean,1,"setSoTimeout","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParamBean,2,"setTcpNoDelay","(Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParamBean,3,"setSocketBufferSize","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParamBean,4,"setLinger","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParamBean,5,"setConnectionTimeout","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParamBean,6,"setStaleCheckingEnabled","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
