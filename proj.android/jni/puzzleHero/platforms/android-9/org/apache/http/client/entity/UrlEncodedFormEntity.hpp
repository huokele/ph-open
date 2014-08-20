/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.entity.UrlEncodedFormEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class StringEntity; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/entity/AbstractHttpEntity.hpp>
#include <org/apache/http/entity/StringEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace entity {

	class UrlEncodedFormEntity;
	class UrlEncodedFormEntity
		: public object<UrlEncodedFormEntity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit UrlEncodedFormEntity(jobject jobj)
		: object<UrlEncodedFormEntity>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpEntity>() const;
		operator local_ref<org::apache::http::entity::StringEntity>() const;
		operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const;


		UrlEncodedFormEntity(local_ref< java::util::List > const&, local_ref< java::lang::String > const&);
		UrlEncodedFormEntity(local_ref< java::util::List > const&);
	}; //class UrlEncodedFormEntity

} //namespace entity
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::client::entity::UrlEncodedFormEntity::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

org::apache::http::client::entity::UrlEncodedFormEntity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::client::entity::UrlEncodedFormEntity::operator local_ref<org::apache::http::HttpEntity>() const
{
	return local_ref<org::apache::http::HttpEntity>(get_jobject());
}

org::apache::http::client::entity::UrlEncodedFormEntity::operator local_ref<org::apache::http::entity::StringEntity>() const
{
	return local_ref<org::apache::http::entity::StringEntity>(get_jobject());
}

org::apache::http::client::entity::UrlEncodedFormEntity::operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const
{
	return local_ref<org::apache::http::entity::AbstractHttpEntity>(get_jobject());
}


org::apache::http::client::entity::UrlEncodedFormEntity::UrlEncodedFormEntity(local_ref< java::util::List > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::client::entity::UrlEncodedFormEntity>(
	call_new_object<
		org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_CLASS_NAME,
		org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_NAME(0),
		org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



org::apache::http::client::entity::UrlEncodedFormEntity::UrlEncodedFormEntity(local_ref< java::util::List > const &a0)
: object<org::apache::http::client::entity::UrlEncodedFormEntity>(
	call_new_object<
		org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_CLASS_NAME,
		org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_NAME(1),
		org::apache::http::client::entity::UrlEncodedFormEntity::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::client::entity::UrlEncodedFormEntity,"org/apache/http/client/entity/UrlEncodedFormEntity")
J2CPP_DEFINE_METHOD(org::apache::http::client::entity::UrlEncodedFormEntity,0,"<init>","(Ljava/util/List;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::entity::UrlEncodedFormEntity,1,"<init>","(Ljava/util/List;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_ENTITY_URLENCODEDFORMENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
