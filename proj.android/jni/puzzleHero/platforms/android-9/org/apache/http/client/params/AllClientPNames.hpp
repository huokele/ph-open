/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.params.AllClientPNames
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_ALLCLIENTPNAMES_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_ALLCLIENTPNAMES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnManagerPNames; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnRoutePNames; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnConnectionPNames; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class CoreConnectionPNames; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class CoreProtocolPNames; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { namespace params { class CookieSpecPNames; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { namespace params { class AuthPNames; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace params { class ClientPNames; } } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/auth/params/AuthPNames.hpp>
#include <org/apache/http/client/params/ClientPNames.hpp>
#include <org/apache/http/conn/params/ConnConnectionPNames.hpp>
#include <org/apache/http/conn/params/ConnManagerPNames.hpp>
#include <org/apache/http/conn/params/ConnRoutePNames.hpp>
#include <org/apache/http/cookie/params/CookieSpecPNames.hpp>
#include <org/apache/http/params/CoreConnectionPNames.hpp>
#include <org/apache/http/params/CoreProtocolPNames.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace params {

	class AllClientPNames;
	class AllClientPNames
		: public object<AllClientPNames>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit AllClientPNames(jobject jobj)
		: object<AllClientPNames>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::params::ConnManagerPNames>() const;
		operator local_ref<org::apache::http::conn::params::ConnRoutePNames>() const;
		operator local_ref<org::apache::http::conn::params::ConnConnectionPNames>() const;
		operator local_ref<org::apache::http::params::CoreConnectionPNames>() const;
		operator local_ref<org::apache::http::params::CoreProtocolPNames>() const;
		operator local_ref<org::apache::http::cookie::params::CookieSpecPNames>() const;
		operator local_ref<org::apache::http::auth::params::AuthPNames>() const;
		operator local_ref<org::apache::http::client::params::ClientPNames>() const;

	}; //class AllClientPNames

} //namespace params
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_ALLCLIENTPNAMES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_ALLCLIENTPNAMES_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_ALLCLIENTPNAMES_HPP_IMPL

namespace j2cpp {



org::apache::http::client::params::AllClientPNames::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::conn::params::ConnManagerPNames>() const
{
	return local_ref<org::apache::http::conn::params::ConnManagerPNames>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::conn::params::ConnRoutePNames>() const
{
	return local_ref<org::apache::http::conn::params::ConnRoutePNames>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::conn::params::ConnConnectionPNames>() const
{
	return local_ref<org::apache::http::conn::params::ConnConnectionPNames>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::params::CoreConnectionPNames>() const
{
	return local_ref<org::apache::http::params::CoreConnectionPNames>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::params::CoreProtocolPNames>() const
{
	return local_ref<org::apache::http::params::CoreProtocolPNames>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::cookie::params::CookieSpecPNames>() const
{
	return local_ref<org::apache::http::cookie::params::CookieSpecPNames>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::auth::params::AuthPNames>() const
{
	return local_ref<org::apache::http::auth::params::AuthPNames>(get_jobject());
}

org::apache::http::client::params::AllClientPNames::operator local_ref<org::apache::http::client::params::ClientPNames>() const
{
	return local_ref<org::apache::http::client::params::ClientPNames>(get_jobject());
}

J2CPP_DEFINE_CLASS(org::apache::http::client::params::AllClientPNames,"org/apache/http/client/params/AllClientPNames")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_ALLCLIENTPNAMES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
