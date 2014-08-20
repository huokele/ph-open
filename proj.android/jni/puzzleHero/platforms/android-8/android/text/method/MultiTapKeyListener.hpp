/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.MultiTapKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_MULTITAPKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_MULTITAPKEYLISTENER_HPP_DECL


namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class SpanWatcher; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { namespace method { namespace TextKeyListener_ { class Capitalize; } } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class KeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MetaKeyKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { class BaseKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { class NoCopySpan; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/Editable.hpp>
#include <android/text/NoCopySpan.hpp>
#include <android/text/SpanWatcher.hpp>
#include <android/text/Spannable.hpp>
#include <android/text/method/BaseKeyListener.hpp>
#include <android/text/method/KeyListener.hpp>
#include <android/text/method/MetaKeyKeyListener.hpp>
#include <android/text/method/TextKeyListener.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class MultiTapKeyListener;
	class MultiTapKeyListener
		: public object<MultiTapKeyListener>
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

		explicit MultiTapKeyListener(jobject jobj)
		: object<MultiTapKeyListener>(jobj)
		{
		}

		operator local_ref<android::text::SpanWatcher>() const;
		operator local_ref<android::text::method::KeyListener>() const;
		operator local_ref<android::text::method::MetaKeyKeyListener>() const;
		operator local_ref<android::text::method::BaseKeyListener>() const;
		operator local_ref<android::text::NoCopySpan>() const;
		operator local_ref<java::lang::Object>() const;


		MultiTapKeyListener(local_ref< android::text::method::TextKeyListener_::Capitalize > const&, jboolean);
		static local_ref< android::text::method::MultiTapKeyListener > getInstance(jboolean, local_ref< android::text::method::TextKeyListener_::Capitalize >  const&);
		jint getInputType();
		jboolean onKeyDown(local_ref< android::view::View >  const&, local_ref< android::text::Editable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		void onSpanChanged(local_ref< android::text::Spannable >  const&, local_ref< java::lang::Object >  const&, jint, jint, jint, jint);
		void onSpanAdded(local_ref< android::text::Spannable >  const&, local_ref< java::lang::Object >  const&, jint, jint);
		void onSpanRemoved(local_ref< android::text::Spannable >  const&, local_ref< java::lang::Object >  const&, jint, jint);
	}; //class MultiTapKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_MULTITAPKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_MULTITAPKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_MULTITAPKEYLISTENER_HPP_IMPL

namespace j2cpp {



android::text::method::MultiTapKeyListener::operator local_ref<android::text::SpanWatcher>() const
{
	return local_ref<android::text::SpanWatcher>(get_jobject());
}

android::text::method::MultiTapKeyListener::operator local_ref<android::text::method::KeyListener>() const
{
	return local_ref<android::text::method::KeyListener>(get_jobject());
}

android::text::method::MultiTapKeyListener::operator local_ref<android::text::method::MetaKeyKeyListener>() const
{
	return local_ref<android::text::method::MetaKeyKeyListener>(get_jobject());
}

android::text::method::MultiTapKeyListener::operator local_ref<android::text::method::BaseKeyListener>() const
{
	return local_ref<android::text::method::BaseKeyListener>(get_jobject());
}

android::text::method::MultiTapKeyListener::operator local_ref<android::text::NoCopySpan>() const
{
	return local_ref<android::text::NoCopySpan>(get_jobject());
}

android::text::method::MultiTapKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::method::MultiTapKeyListener::MultiTapKeyListener(local_ref< android::text::method::TextKeyListener_::Capitalize > const &a0, jboolean a1)
: object<android::text::method::MultiTapKeyListener>(
	call_new_object<
		android::text::method::MultiTapKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_NAME(0),
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< android::text::method::MultiTapKeyListener > android::text::method::MultiTapKeyListener::getInstance(jboolean a0, local_ref< android::text::method::TextKeyListener_::Capitalize > const &a1)
{
	return call_static_method<
		android::text::method::MultiTapKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_NAME(1),
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::method::MultiTapKeyListener >
	>(a0, a1);
}

jint android::text::method::MultiTapKeyListener::getInputType()
{
	return call_method<
		android::text::method::MultiTapKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_NAME(2),
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jboolean android::text::method::MultiTapKeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::MultiTapKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_NAME(3),
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

void android::text::method::MultiTapKeyListener::onSpanChanged(local_ref< android::text::Spannable > const &a0, local_ref< java::lang::Object > const &a1, jint a2, jint a3, jint a4, jint a5)
{
	return call_method<
		android::text::method::MultiTapKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_NAME(4),
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::text::method::MultiTapKeyListener::onSpanAdded(local_ref< android::text::Spannable > const &a0, local_ref< java::lang::Object > const &a1, jint a2, jint a3)
{
	return call_method<
		android::text::method::MultiTapKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_NAME(5),
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::text::method::MultiTapKeyListener::onSpanRemoved(local_ref< android::text::Spannable > const &a0, local_ref< java::lang::Object > const &a1, jint a2, jint a3)
{
	return call_method<
		android::text::method::MultiTapKeyListener::J2CPP_CLASS_NAME,
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_NAME(6),
		android::text::method::MultiTapKeyListener::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::text::method::MultiTapKeyListener,"android/text/method/MultiTapKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::MultiTapKeyListener,0,"<init>","(Landroid/text/method/TextKeyListener$Capitalize;Z)V")
J2CPP_DEFINE_METHOD(android::text::method::MultiTapKeyListener,1,"getInstance","(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/MultiTapKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::MultiTapKeyListener,2,"getInputType","()I")
J2CPP_DEFINE_METHOD(android::text::method::MultiTapKeyListener,3,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MultiTapKeyListener,4,"onSpanChanged","(Landroid/text/Spannable;Ljava/lang/Object;IIII)V")
J2CPP_DEFINE_METHOD(android::text::method::MultiTapKeyListener,5,"onSpanAdded","(Landroid/text/Spannable;Ljava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(android::text::method::MultiTapKeyListener,6,"onSpanRemoved","(Landroid/text/Spannable;Ljava/lang/Object;II)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_MULTITAPKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
