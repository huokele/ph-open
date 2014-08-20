/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.ExtractedText
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class ExtractedText;
	class ExtractedText
		: public object<ExtractedText>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		explicit ExtractedText(jobject jobj)
		: object<ExtractedText>(jobj)
		, text(jobj)
		, startOffset(jobj)
		, partialStartOffset(jobj)
		, partialEndOffset(jobj)
		, selectionStart(jobj)
		, selectionEnd(jobj)
		, flags(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		ExtractedText();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::CharSequence > > text;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > startOffset;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > partialStartOffset;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > partialEndOffset;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > selectionStart;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > selectionEnd;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > FLAG_SINGLE_LINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > FLAG_SELECTING;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > flags;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ExtractedText

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::ExtractedText::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::inputmethod::ExtractedText::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::view::inputmethod::ExtractedText::ExtractedText()
: object<android::view::inputmethod::ExtractedText>(
	call_new_object<
		android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
		android::view::inputmethod::ExtractedText::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::ExtractedText::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, text(get_jobject())
, startOffset(get_jobject())
, partialStartOffset(get_jobject())
, partialEndOffset(get_jobject())
, selectionStart(get_jobject())
, selectionEnd(get_jobject())
, flags(get_jobject())
{
}


void android::view::inputmethod::ExtractedText::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
		android::view::inputmethod::ExtractedText::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::ExtractedText::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

jint android::view::inputmethod::ExtractedText::describeContents()
{
	return call_method<
		android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
		android::view::inputmethod::ExtractedText::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::ExtractedText::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}



static_field<
	android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_NAME(6),
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::view::inputmethod::ExtractedText::FLAG_SINGLE_LINE;

static_field<
	android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_NAME(7),
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::view::inputmethod::ExtractedText::FLAG_SELECTING;

static_field<
	android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_NAME(9),
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::os::Parcelable_::Creator >
> android::view::inputmethod::ExtractedText::CREATOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::ExtractedText,"android/view/inputmethod/ExtractedText")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,1,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,0,"text","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,1,"startOffset","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,2,"partialStartOffset","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,3,"partialEndOffset","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,4,"selectionStart","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,5,"selectionEnd","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,6,"FLAG_SINGLE_LINE","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,7,"FLAG_SELECTING","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,8,"flags","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,9,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
