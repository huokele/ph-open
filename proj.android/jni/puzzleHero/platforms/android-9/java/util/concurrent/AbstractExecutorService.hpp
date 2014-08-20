/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.AbstractExecutorService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Callable; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Executor; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Future; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ExecutorService; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <java/util/concurrent/Callable.hpp>
#include <java/util/concurrent/Executor.hpp>
#include <java/util/concurrent/ExecutorService.hpp>
#include <java/util/concurrent/Future.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class AbstractExecutorService;
	class AbstractExecutorService
		: public object<AbstractExecutorService>
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

		explicit AbstractExecutorService(jobject jobj)
		: object<AbstractExecutorService>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::concurrent::Executor>() const;
		operator local_ref<java::util::concurrent::ExecutorService>() const;


		AbstractExecutorService();
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::util::concurrent::Callable >  const&);
		local_ref< java::lang::Object > invokeAny(local_ref< java::util::Collection >  const&);
		local_ref< java::lang::Object > invokeAny(local_ref< java::util::Collection >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::List > invokeAll(local_ref< java::util::Collection >  const&);
		local_ref< java::util::List > invokeAll(local_ref< java::util::Collection >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
	}; //class AbstractExecutorService

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::AbstractExecutorService::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::AbstractExecutorService::operator local_ref<java::util::concurrent::Executor>() const
{
	return local_ref<java::util::concurrent::Executor>(get_jobject());
}

java::util::concurrent::AbstractExecutorService::operator local_ref<java::util::concurrent::ExecutorService>() const
{
	return local_ref<java::util::concurrent::ExecutorService>(get_jobject());
}


java::util::concurrent::AbstractExecutorService::AbstractExecutorService()
: object<java::util::concurrent::AbstractExecutorService>(
	call_new_object<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(0),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}




local_ref< java::util::concurrent::Future > java::util::concurrent::AbstractExecutorService::submit(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(3),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::concurrent::Future >
	>(get_jobject(), a0);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::AbstractExecutorService::submit(local_ref< java::lang::Runnable > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(4),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::concurrent::Future >
	>(get_jobject(), a0, a1);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::AbstractExecutorService::submit(local_ref< java::util::concurrent::Callable > const &a0)
{
	return call_method<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(5),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::concurrent::Future >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::AbstractExecutorService::invokeAny(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(6),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::AbstractExecutorService::invokeAny(local_ref< java::util::Collection > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(7),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::util::List > java::util::concurrent::AbstractExecutorService::invokeAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(8),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::List >
	>(get_jobject(), a0);
}

local_ref< java::util::List > java::util::concurrent::AbstractExecutorService::invokeAll(local_ref< java::util::Collection > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::AbstractExecutorService::J2CPP_CLASS_NAME,
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_NAME(9),
		java::util::concurrent::AbstractExecutorService::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::List >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::AbstractExecutorService,"java/util/concurrent/AbstractExecutorService")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,1,"newTaskFor","(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/RunnableFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,2,"newTaskFor","(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/RunnableFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,3,"submit","(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,4,"submit","(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,5,"submit","(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,6,"invokeAny","(Ljava/util/Collection;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,7,"invokeAny","(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,8,"invokeAll","(Ljava/util/Collection;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::AbstractExecutorService,9,"invokeAll","(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
