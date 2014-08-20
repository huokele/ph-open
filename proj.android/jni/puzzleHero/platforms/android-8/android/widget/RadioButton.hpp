/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.RadioButton
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RADIOBUTTON_HPP_DECL
#define J2CPP_ANDROID_WIDGET_RADIOBUTTON_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { class Button; } } }
namespace j2cpp { namespace android { namespace widget { class CompoundButton; } } }
namespace j2cpp { namespace android { namespace widget { class Checkable; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnPreDrawListener; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewTreeObserver.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/Button.hpp>
#include <android/widget/Checkable.hpp>
#include <android/widget/CompoundButton.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class RadioButton;
	class RadioButton
		: public object<RadioButton>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit RadioButton(jobject jobj)
		: object<RadioButton>(jobj)
		{
		}

		operator local_ref<android::widget::TextView>() const;
		operator local_ref<android::widget::Button>() const;
		operator local_ref<android::widget::CompoundButton>() const;
		operator local_ref<android::widget::Checkable>() const;
		operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<java::lang::Object>() const;


		RadioButton(local_ref< android::content::Context > const&);
		RadioButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		RadioButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void toggle();
	}; //class RadioButton

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RADIOBUTTON_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RADIOBUTTON_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_RADIOBUTTON_HPP_IMPL

namespace j2cpp {



android::widget::RadioButton::operator local_ref<android::widget::TextView>() const
{
	return local_ref<android::widget::TextView>(get_jobject());
}

android::widget::RadioButton::operator local_ref<android::widget::Button>() const
{
	return local_ref<android::widget::Button>(get_jobject());
}

android::widget::RadioButton::operator local_ref<android::widget::CompoundButton>() const
{
	return local_ref<android::widget::CompoundButton>(get_jobject());
}

android::widget::RadioButton::operator local_ref<android::widget::Checkable>() const
{
	return local_ref<android::widget::Checkable>(get_jobject());
}

android::widget::RadioButton::operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const
{
	return local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>(get_jobject());
}

android::widget::RadioButton::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::RadioButton::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::RadioButton::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::RadioButton::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::RadioButton::RadioButton(local_ref< android::content::Context > const &a0)
: object<android::widget::RadioButton>(
	call_new_object<
		android::widget::RadioButton::J2CPP_CLASS_NAME,
		android::widget::RadioButton::J2CPP_METHOD_NAME(0),
		android::widget::RadioButton::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::RadioButton::RadioButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::RadioButton>(
	call_new_object<
		android::widget::RadioButton::J2CPP_CLASS_NAME,
		android::widget::RadioButton::J2CPP_METHOD_NAME(1),
		android::widget::RadioButton::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::RadioButton::RadioButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::RadioButton>(
	call_new_object<
		android::widget::RadioButton::J2CPP_CLASS_NAME,
		android::widget::RadioButton::J2CPP_METHOD_NAME(2),
		android::widget::RadioButton::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::RadioButton::toggle()
{
	return call_method<
		android::widget::RadioButton::J2CPP_CLASS_NAME,
		android::widget::RadioButton::J2CPP_METHOD_NAME(3),
		android::widget::RadioButton::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::RadioButton,"android/widget/RadioButton")
J2CPP_DEFINE_METHOD(android::widget::RadioButton,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioButton,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioButton,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::RadioButton,3,"toggle","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RADIOBUTTON_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
