/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Observer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_OBSERVER_HPP_DECL
#define J2CPP_JAVA_UTIL_OBSERVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Observable; } } }


#include <java/lang/Object.hpp>
#include <java/util/Observable.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Observer;
	class Observer
		: public object<Observer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Observer(jobject jobj)
		: object<Observer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void update(local_ref< java::util::Observable >  const&, local_ref< java::lang::Object >  const&);
	}; //class Observer

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_OBSERVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_OBSERVER_HPP_IMPL
#define J2CPP_JAVA_UTIL_OBSERVER_HPP_IMPL

namespace j2cpp {



java::util::Observer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::util::Observer::update(local_ref< java::util::Observable > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::Observer::J2CPP_CLASS_NAME,
		java::util::Observer::J2CPP_METHOD_NAME(0),
		java::util::Observer::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::Observer,"java/util/Observer")
J2CPP_DEFINE_METHOD(java::util::Observer,0,"update","(Ljava/util/Observable;Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_OBSERVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
