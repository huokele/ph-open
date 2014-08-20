/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.algorithm.TypeTransform
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_TYPETRANSFORM_HPP_DECL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_TYPETRANSFORM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace algorithm {

	class TypeTransform;
	class TypeTransform
		: public object<TypeTransform>
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

		explicit TypeTransform(jobject jobj)
		: object<TypeTransform>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< array<jbyte,1> > intToByteArrayLH(jint);
		static local_ref< array<jbyte,1> > longToByteArrayLH(jlong);
		static local_ref< array<jbyte,1> > intToByteArrayHL(jint);
		static local_ref< array<jbyte,1> > longToByteArrayHL(jlong);
		static jint byteArrayLHToInt(local_ref< array<jbyte,1> >  const&);
		static jint byteArrayLHToInt(local_ref< array<jbyte,1> >  const&, jint);
		static jlong byteArrayLHToLong(local_ref< array<jbyte,1> >  const&);
		static jlong byteArrayLHToLong(local_ref< array<jbyte,1> >  const&, jint);
		static jint byteArrayHLToInt(local_ref< array<jbyte,1> >  const&);
		static jint byteArrayHLToInt(local_ref< array<jbyte,1> >  const&, jint);
		static jlong byteArrayHLToLong(local_ref< array<jbyte,1> >  const&, jint);
		static jlong byteArrayHLToLong(local_ref< array<jbyte,1> >  const&);
	}; //class TypeTransform

} //namespace algorithm
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_TYPETRANSFORM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_TYPETRANSFORM_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_TYPETRANSFORM_HPP_IMPL

namespace j2cpp {



com::tencent::mm::algorithm::TypeTransform::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



local_ref< array<jbyte,1> > com::tencent::mm::algorithm::TypeTransform::intToByteArrayLH(jint a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(2),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jbyte,1> >
	>(a0);
}

local_ref< array<jbyte,1> > com::tencent::mm::algorithm::TypeTransform::longToByteArrayLH(jlong a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(3),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jbyte,1> >
	>(a0);
}

local_ref< array<jbyte,1> > com::tencent::mm::algorithm::TypeTransform::intToByteArrayHL(jint a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(4),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jbyte,1> >
	>(a0);
}

local_ref< array<jbyte,1> > com::tencent::mm::algorithm::TypeTransform::longToByteArrayHL(jlong a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(5),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array<jbyte,1> >
	>(a0);
}

jint com::tencent::mm::algorithm::TypeTransform::byteArrayLHToInt(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(6),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(a0);
}

jint com::tencent::mm::algorithm::TypeTransform::byteArrayLHToInt(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(7),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(a0, a1);
}

jlong com::tencent::mm::algorithm::TypeTransform::byteArrayLHToLong(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(8),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(8), 
		jlong
	>(a0);
}

jlong com::tencent::mm::algorithm::TypeTransform::byteArrayLHToLong(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(9),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(a0, a1);
}

jint com::tencent::mm::algorithm::TypeTransform::byteArrayHLToInt(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(10),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(a0);
}

jint com::tencent::mm::algorithm::TypeTransform::byteArrayHLToInt(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(11),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(a0, a1);
}

jlong com::tencent::mm::algorithm::TypeTransform::byteArrayHLToLong(local_ref< array<jbyte,1> > const &a0, jint a1)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(12),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(12), 
		jlong
	>(a0, a1);
}

jlong com::tencent::mm::algorithm::TypeTransform::byteArrayHLToLong(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::TypeTransform::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_NAME(13),
		com::tencent::mm::algorithm::TypeTransform::J2CPP_METHOD_SIGNATURE(13), 
		jlong
	>(a0);
}


J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::TypeTransform,"com/tencent/mm/algorithm/TypeTransform")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,1,"a","([B)[B")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,2,"intToByteArrayLH","(I)[B")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,3,"longToByteArrayLH","(J)[B")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,4,"intToByteArrayHL","(I)[B")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,5,"longToByteArrayHL","(J)[B")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,6,"byteArrayLHToInt","([B)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,7,"byteArrayLHToInt","([BI)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,8,"byteArrayLHToLong","([B)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,9,"byteArrayLHToLong","([BI)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,10,"byteArrayHLToInt","([B)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,11,"byteArrayHLToInt","([BI)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,12,"byteArrayHLToLong","([BI)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::TypeTransform,13,"byteArrayHLToLong","([B)J")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_TYPETRANSFORM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
