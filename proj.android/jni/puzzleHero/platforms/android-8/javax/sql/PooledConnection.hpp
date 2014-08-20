/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.sql.PooledConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_POOLEDCONNECTION_HPP_DECL
#define J2CPP_JAVAX_SQL_POOLEDCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }
namespace j2cpp { namespace javax { namespace sql { class ConnectionEventListener; } } }


#include <java/lang/Object.hpp>
#include <java/sql/Connection.hpp>
#include <javax/sql/ConnectionEventListener.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class PooledConnection;
	class PooledConnection
		: public object<PooledConnection>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit PooledConnection(jobject jobj)
		: object<PooledConnection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void addConnectionEventListener(local_ref< javax::sql::ConnectionEventListener >  const&);
		void close();
		local_ref< java::sql::Connection > getConnection();
		void removeConnectionEventListener(local_ref< javax::sql::ConnectionEventListener >  const&);
	}; //class PooledConnection

} //namespace sql
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_POOLEDCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_POOLEDCONNECTION_HPP_IMPL
#define J2CPP_JAVAX_SQL_POOLEDCONNECTION_HPP_IMPL

namespace j2cpp {



javax::sql::PooledConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void javax::sql::PooledConnection::addConnectionEventListener(local_ref< javax::sql::ConnectionEventListener > const &a0)
{
	return call_method<
		javax::sql::PooledConnection::J2CPP_CLASS_NAME,
		javax::sql::PooledConnection::J2CPP_METHOD_NAME(0),
		javax::sql::PooledConnection::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

void javax::sql::PooledConnection::close()
{
	return call_method<
		javax::sql::PooledConnection::J2CPP_CLASS_NAME,
		javax::sql::PooledConnection::J2CPP_METHOD_NAME(1),
		javax::sql::PooledConnection::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

local_ref< java::sql::Connection > javax::sql::PooledConnection::getConnection()
{
	return call_method<
		javax::sql::PooledConnection::J2CPP_CLASS_NAME,
		javax::sql::PooledConnection::J2CPP_METHOD_NAME(2),
		javax::sql::PooledConnection::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::sql::Connection >
	>(get_jobject());
}

void javax::sql::PooledConnection::removeConnectionEventListener(local_ref< javax::sql::ConnectionEventListener > const &a0)
{
	return call_method<
		javax::sql::PooledConnection::J2CPP_CLASS_NAME,
		javax::sql::PooledConnection::J2CPP_METHOD_NAME(3),
		javax::sql::PooledConnection::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::sql::PooledConnection,"javax/sql/PooledConnection")
J2CPP_DEFINE_METHOD(javax::sql::PooledConnection,0,"addConnectionEventListener","(Ljavax/sql/ConnectionEventListener;)V")
J2CPP_DEFINE_METHOD(javax::sql::PooledConnection,1,"close","()V")
J2CPP_DEFINE_METHOD(javax::sql::PooledConnection,2,"getConnection","()Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(javax::sql::PooledConnection,3,"removeConnectionEventListener","(Ljavax/sql/ConnectionEventListener;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_POOLEDCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
