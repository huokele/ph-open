/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.CopyOnWriteArraySet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace util { class AbstractSet; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/AbstractSet.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class CopyOnWriteArraySet;
	class CopyOnWriteArraySet
		: public object<CopyOnWriteArraySet>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)

		explicit CopyOnWriteArraySet(jobject jobj)
		: object<CopyOnWriteArraySet>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Iterable>() const;
		operator local_ref<java::util::AbstractSet>() const;
		operator local_ref<java::util::Collection>() const;
		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::Set>() const;
		operator local_ref<java::io::Serializable>() const;


		CopyOnWriteArraySet();
		CopyOnWriteArraySet(local_ref< java::util::Collection > const&);
		jint size();
		jboolean isEmpty();
		jboolean contains(local_ref< java::lang::Object >  const&);
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		void clear();
		jboolean remove(local_ref< java::lang::Object >  const&);
		jboolean add(local_ref< java::lang::Object >  const&);
		jboolean containsAll(local_ref< java::util::Collection >  const&);
		jboolean addAll(local_ref< java::util::Collection >  const&);
		jboolean removeAll(local_ref< java::util::Collection >  const&);
		jboolean retainAll(local_ref< java::util::Collection >  const&);
		local_ref< java::util::Iterator > iterator();
		jboolean equals(local_ref< java::lang::Object >  const&);
	}; //class CopyOnWriteArraySet

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_IMPL

namespace j2cpp {



java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::lang::Iterable>() const
{
	return local_ref<java::lang::Iterable>(get_jobject());
}

java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::util::AbstractSet>() const
{
	return local_ref<java::util::AbstractSet>(get_jobject());
}

java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::util::Collection>() const
{
	return local_ref<java::util::Collection>(get_jobject());
}

java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::util::Set>() const
{
	return local_ref<java::util::Set>(get_jobject());
}

java::util::concurrent::CopyOnWriteArraySet::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::CopyOnWriteArraySet::CopyOnWriteArraySet()
: object<java::util::concurrent::CopyOnWriteArraySet>(
	call_new_object<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(0),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::concurrent::CopyOnWriteArraySet::CopyOnWriteArraySet(local_ref< java::util::Collection > const &a0)
: object<java::util::concurrent::CopyOnWriteArraySet>(
	call_new_object<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(1),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint java::util::concurrent::CopyOnWriteArraySet::size()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(2),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jboolean java::util::concurrent::CopyOnWriteArraySet::isEmpty()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(3),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

jboolean java::util::concurrent::CopyOnWriteArraySet::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(4),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::CopyOnWriteArraySet::toArray()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(5),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::concurrent::CopyOnWriteArraySet::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(6),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject(), a0);
}

void java::util::concurrent::CopyOnWriteArraySet::clear()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(7),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

jboolean java::util::concurrent::CopyOnWriteArraySet::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(8),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArraySet::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(9),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArraySet::containsAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(10),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArraySet::addAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(11),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArraySet::removeAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(12),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::CopyOnWriteArraySet::retainAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(13),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::Iterator > java::util::concurrent::CopyOnWriteArraySet::iterator()
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(14),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

jboolean java::util::concurrent::CopyOnWriteArraySet::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_CLASS_NAME,
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_NAME(15),
		java::util::concurrent::CopyOnWriteArraySet::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::CopyOnWriteArraySet,"java/util/concurrent/CopyOnWriteArraySet")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,1,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,2,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,3,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,4,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,5,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,6,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,7,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,8,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,9,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,10,"containsAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,11,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,12,"removeAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,13,"retainAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,14,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArraySet,15,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
