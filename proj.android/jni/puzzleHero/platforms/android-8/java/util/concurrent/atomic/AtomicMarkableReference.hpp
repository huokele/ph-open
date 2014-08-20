/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicMarkableReference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicMarkableReference;
	class AtomicMarkableReference
		: public object<AtomicMarkableReference>
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

		explicit AtomicMarkableReference(jobject jobj)
		: object<AtomicMarkableReference>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AtomicMarkableReference(local_ref< java::lang::Object > const&, jboolean);
		local_ref< java::lang::Object > getReference();
		jboolean isMarked();
		local_ref< java::lang::Object > get(local_ref< array<jboolean,1> >  const&);
		jboolean weakCompareAndSet(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&, jboolean, jboolean);
		jboolean compareAndSet(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&, jboolean, jboolean);
		void set(local_ref< java::lang::Object >  const&, jboolean);
		jboolean attemptMark(local_ref< java::lang::Object >  const&, jboolean);
	}; //class AtomicMarkableReference

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicMarkableReference::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::concurrent::atomic::AtomicMarkableReference::AtomicMarkableReference(local_ref< java::lang::Object > const &a0, jboolean a1)
: object<java::util::concurrent::atomic::AtomicMarkableReference>(
	call_new_object<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(0),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::lang::Object > java::util::concurrent::atomic::AtomicMarkableReference::getReference()
{
	return call_method<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::concurrent::atomic::AtomicMarkableReference::isMarked()
{
	return call_method<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::atomic::AtomicMarkableReference::get(local_ref< array<jboolean,1> > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jboolean java::util::concurrent::atomic::AtomicMarkableReference::weakCompareAndSet(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1, jboolean a2, jboolean a3)
{
	return call_method<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean java::util::concurrent::atomic::AtomicMarkableReference::compareAndSet(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1, jboolean a2, jboolean a3)
{
	return call_method<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

void java::util::concurrent::atomic::AtomicMarkableReference::set(local_ref< java::lang::Object > const &a0, jboolean a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicMarkableReference::attemptMark(local_ref< java::lang::Object > const &a0, jboolean a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicMarkableReference::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicMarkableReference,"java/util/concurrent/atomic/AtomicMarkableReference")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,0,"<init>","(Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,1,"getReference","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,2,"isMarked","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,3,"get","([Z)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,4,"weakCompareAndSet","(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,5,"compareAndSet","(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,6,"set","(Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicMarkableReference,7,"attemptMark","(Ljava/lang/Object;Z)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
