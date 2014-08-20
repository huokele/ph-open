/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.animation.LinearInterpolator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/animation/Interpolator.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class LinearInterpolator;
	class LinearInterpolator
		: public object<LinearInterpolator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit LinearInterpolator(jobject jobj)
		: object<LinearInterpolator>(jobj)
		{
		}

		operator local_ref<android::view::animation::Interpolator>() const;
		operator local_ref<java::lang::Object>() const;


		LinearInterpolator();
		LinearInterpolator(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		jfloat getInterpolation(jfloat);
	}; //class LinearInterpolator

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_HPP_IMPL

namespace j2cpp {



android::view::animation::LinearInterpolator::operator local_ref<android::view::animation::Interpolator>() const
{
	return local_ref<android::view::animation::Interpolator>(get_jobject());
}

android::view::animation::LinearInterpolator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::animation::LinearInterpolator::LinearInterpolator()
: object<android::view::animation::LinearInterpolator>(
	call_new_object<
		android::view::animation::LinearInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::LinearInterpolator::J2CPP_METHOD_NAME(0),
		android::view::animation::LinearInterpolator::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::view::animation::LinearInterpolator::LinearInterpolator(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::view::animation::LinearInterpolator>(
	call_new_object<
		android::view::animation::LinearInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::LinearInterpolator::J2CPP_METHOD_NAME(1),
		android::view::animation::LinearInterpolator::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


jfloat android::view::animation::LinearInterpolator::getInterpolation(jfloat a0)
{
	return call_method<
		android::view::animation::LinearInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::LinearInterpolator::J2CPP_METHOD_NAME(2),
		android::view::animation::LinearInterpolator::J2CPP_METHOD_SIGNATURE(2), 
		jfloat
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::animation::LinearInterpolator,"android/view/animation/LinearInterpolator")
J2CPP_DEFINE_METHOD(android::view::animation::LinearInterpolator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::animation::LinearInterpolator,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::LinearInterpolator,2,"getInterpolation","(F)F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
