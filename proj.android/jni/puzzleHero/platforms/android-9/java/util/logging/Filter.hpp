/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.logging.Filter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FILTER_HPP_DECL
#define J2CPP_JAVA_UTIL_LOGGING_FILTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace logging { class LogRecord; } } } }


#include <java/lang/Object.hpp>
#include <java/util/logging/LogRecord.hpp>


namespace j2cpp {

namespace java { namespace util { namespace logging {

	class Filter;
	class Filter
		: public object<Filter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Filter(jobject jobj)
		: object<Filter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean isLoggable(local_ref< java::util::logging::LogRecord >  const&);
	}; //class Filter

} //namespace logging
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LOGGING_FILTER_HPP_IMPL
#define J2CPP_JAVA_UTIL_LOGGING_FILTER_HPP_IMPL

namespace j2cpp {



java::util::logging::Filter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::util::logging::Filter::isLoggable(local_ref< java::util::logging::LogRecord > const &a0)
{
	return call_method<
		java::util::logging::Filter::J2CPP_CLASS_NAME,
		java::util::logging::Filter::J2CPP_METHOD_NAME(0),
		java::util::logging::Filter::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::logging::Filter,"java/util/logging/Filter")
J2CPP_DEFINE_METHOD(java::util::logging::Filter,0,"isLoggable","(Ljava/util/logging/LogRecord;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LOGGING_FILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
