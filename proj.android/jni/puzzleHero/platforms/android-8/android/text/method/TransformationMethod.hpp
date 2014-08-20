/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.TransformationMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_TRANSFORMATIONMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_TRANSFORMATIONMETHOD_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Rect.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class TransformationMethod;
	class TransformationMethod
		: public object<TransformationMethod>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit TransformationMethod(jobject jobj)
		: object<TransformationMethod>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::CharSequence > getTransformation(local_ref< java::lang::CharSequence >  const&, local_ref< android::view::View >  const&);
		void onFocusChanged(local_ref< android::view::View >  const&, local_ref< java::lang::CharSequence >  const&, jboolean, jint, local_ref< android::graphics::Rect >  const&);
	}; //class TransformationMethod

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_TRANSFORMATIONMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_TRANSFORMATIONMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_TRANSFORMATIONMETHOD_HPP_IMPL

namespace j2cpp {



android::text::method::TransformationMethod::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::CharSequence > android::text::method::TransformationMethod::getTransformation(local_ref< java::lang::CharSequence > const &a0, local_ref< android::view::View > const &a1)
{
	return call_method<
		android::text::method::TransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::TransformationMethod::J2CPP_METHOD_NAME(0),
		android::text::method::TransformationMethod::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0, a1);
}

void android::text::method::TransformationMethod::onFocusChanged(local_ref< android::view::View > const &a0, local_ref< java::lang::CharSequence > const &a1, jboolean a2, jint a3, local_ref< android::graphics::Rect > const &a4)
{
	return call_method<
		android::text::method::TransformationMethod::J2CPP_CLASS_NAME,
		android::text::method::TransformationMethod::J2CPP_METHOD_NAME(1),
		android::text::method::TransformationMethod::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}


J2CPP_DEFINE_CLASS(android::text::method::TransformationMethod,"android/text/method/TransformationMethod")
J2CPP_DEFINE_METHOD(android::text::method::TransformationMethod,0,"getTransformation","(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::method::TransformationMethod,1,"onFocusChanged","(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_TRANSFORMATIONMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
