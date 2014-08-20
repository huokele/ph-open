/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.AutoCompleteTextView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { namespace Filter_ { class FilterListener; } } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemSelectedListener; } } } }
namespace j2cpp { namespace android { namespace widget { class EditText; } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace AutoCompleteTextView_ { class Validator; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnPreDrawListener; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewTreeObserver.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/view/inputmethod/CompletionInfo.hpp>
#include <android/widget/AdapterView.hpp>
#include <android/widget/AutoCompleteTextView.hpp>
#include <android/widget/EditText.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/ListAdapter.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class AutoCompleteTextView;
	namespace AutoCompleteTextView_ {

		class Validator;
		class Validator
			: public object<Validator>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit Validator(jobject jobj)
			: object<Validator>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean isValid(local_ref< java::lang::CharSequence >  const&);
			local_ref< java::lang::CharSequence > fixText(local_ref< java::lang::CharSequence >  const&);
		}; //class Validator

	} //namespace AutoCompleteTextView_

	class AutoCompleteTextView
		: public object<AutoCompleteTextView>
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
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)

		typedef AutoCompleteTextView_::Validator Validator;

		explicit AutoCompleteTextView(jobject jobj)
		: object<AutoCompleteTextView>(jobj)
		{
		}

		operator local_ref<android::widget::TextView>() const;
		operator local_ref<android::widget::Filter_::FilterListener>() const;
		operator local_ref<android::widget::EditText>() const;
		operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<java::lang::Object>() const;


		AutoCompleteTextView(local_ref< android::content::Context > const&);
		AutoCompleteTextView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		AutoCompleteTextView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		void setOnClickListener(local_ref< android::view::View_::OnClickListener >  const&);
		void setCompletionHint(local_ref< java::lang::CharSequence >  const&);
		jint getDropDownWidth();
		void setDropDownWidth(jint);
		jint getDropDownHeight();
		void setDropDownHeight(jint);
		jint getDropDownAnchor();
		void setDropDownAnchor(jint);
		local_ref< android::graphics::drawable::Drawable > getDropDownBackground();
		void setDropDownBackgroundDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void setDropDownBackgroundResource(jint);
		void setDropDownVerticalOffset(jint);
		jint getDropDownVerticalOffset();
		void setDropDownHorizontalOffset(jint);
		jint getDropDownHorizontalOffset();
		jint getThreshold();
		void setThreshold(jint);
		void setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener >  const&);
		void setOnItemSelectedListener(local_ref< android::widget::AdapterView_::OnItemSelectedListener >  const&);
		local_ref< android::widget::AdapterView_::OnItemClickListener > getItemClickListener();
		local_ref< android::widget::AdapterView_::OnItemSelectedListener > getItemSelectedListener();
		local_ref< android::widget::AdapterView_::OnItemClickListener > getOnItemClickListener();
		local_ref< android::widget::AdapterView_::OnItemSelectedListener > getOnItemSelectedListener();
		local_ref< android::widget::ListAdapter > getAdapter();
		void setAdapter(local_ref< android::widget::ListAdapter >  const&);
		jboolean onKeyPreIme(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyDown(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean enoughToFilter();
		jboolean isPopupShowing();
		void clearListSelection();
		void setListSelection(jint);
		jint getListSelection();
		void performCompletion();
		void onCommitCompletion(local_ref< android::view::inputmethod::CompletionInfo >  const&);
		jboolean isPerformingCompletion();
		void onFilterComplete(jint);
		void onWindowFocusChanged(jboolean);
		void dismissDropDown();
		void showDropDown();
		void setValidator(local_ref< android::widget::AutoCompleteTextView_::Validator >  const&);
		local_ref< android::widget::AutoCompleteTextView_::Validator > getValidator();
		void performValidation();
	}; //class AutoCompleteTextView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_HPP_IMPL

namespace j2cpp {




android::widget::AutoCompleteTextView_::Validator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::widget::AutoCompleteTextView_::Validator::isValid(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView_::Validator::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView_::Validator::J2CPP_METHOD_NAME(0),
		android::widget::AutoCompleteTextView_::Validator::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::widget::AutoCompleteTextView_::Validator::fixText(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView_::Validator::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView_::Validator::J2CPP_METHOD_NAME(1),
		android::widget::AutoCompleteTextView_::Validator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::CharSequence >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::AutoCompleteTextView_::Validator,"android/widget/AutoCompleteTextView$Validator")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView_::Validator,0,"isValid","(Ljava/lang/CharSequence;)Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView_::Validator,1,"fixText","(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;")



android::widget::AutoCompleteTextView::operator local_ref<android::widget::TextView>() const
{
	return local_ref<android::widget::TextView>(get_jobject());
}

android::widget::AutoCompleteTextView::operator local_ref<android::widget::Filter_::FilterListener>() const
{
	return local_ref<android::widget::Filter_::FilterListener>(get_jobject());
}

android::widget::AutoCompleteTextView::operator local_ref<android::widget::EditText>() const
{
	return local_ref<android::widget::EditText>(get_jobject());
}

android::widget::AutoCompleteTextView::operator local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>() const
{
	return local_ref<android::view::ViewTreeObserver_::OnPreDrawListener>(get_jobject());
}

android::widget::AutoCompleteTextView::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::AutoCompleteTextView::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::AutoCompleteTextView::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::AutoCompleteTextView::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::AutoCompleteTextView::AutoCompleteTextView(local_ref< android::content::Context > const &a0)
: object<android::widget::AutoCompleteTextView>(
	call_new_object<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(0),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::AutoCompleteTextView::AutoCompleteTextView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::AutoCompleteTextView>(
	call_new_object<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(1),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::AutoCompleteTextView::AutoCompleteTextView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::AutoCompleteTextView>(
	call_new_object<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(2),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


void android::widget::AutoCompleteTextView::setOnClickListener(local_ref< android::view::View_::OnClickListener > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(3),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::widget::AutoCompleteTextView::setCompletionHint(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(4),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AutoCompleteTextView::getDropDownWidth()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(5),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setDropDownWidth(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(6),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AutoCompleteTextView::getDropDownHeight()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(7),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setDropDownHeight(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(8),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AutoCompleteTextView::getDropDownAnchor()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(9),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setDropDownAnchor(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(10),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::widget::AutoCompleteTextView::getDropDownBackground()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(11),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setDropDownBackgroundDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(12),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void android::widget::AutoCompleteTextView::setDropDownBackgroundResource(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(13),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void android::widget::AutoCompleteTextView::setDropDownVerticalOffset(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(14),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AutoCompleteTextView::getDropDownVerticalOffset()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(15),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setDropDownHorizontalOffset(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(16),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AutoCompleteTextView::getDropDownHorizontalOffset()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(17),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

jint android::widget::AutoCompleteTextView::getThreshold()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(18),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setThreshold(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(19),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void android::widget::AutoCompleteTextView::setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(20),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

void android::widget::AutoCompleteTextView::setOnItemSelectedListener(local_ref< android::widget::AdapterView_::OnItemSelectedListener > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(21),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0);
}

local_ref< android::widget::AdapterView_::OnItemClickListener > android::widget::AutoCompleteTextView::getItemClickListener()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(22),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::widget::AdapterView_::OnItemClickListener >
	>(get_jobject());
}

local_ref< android::widget::AdapterView_::OnItemSelectedListener > android::widget::AutoCompleteTextView::getItemSelectedListener()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(23),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< android::widget::AdapterView_::OnItemSelectedListener >
	>(get_jobject());
}

local_ref< android::widget::AdapterView_::OnItemClickListener > android::widget::AutoCompleteTextView::getOnItemClickListener()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(24),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< android::widget::AdapterView_::OnItemClickListener >
	>(get_jobject());
}

local_ref< android::widget::AdapterView_::OnItemSelectedListener > android::widget::AutoCompleteTextView::getOnItemSelectedListener()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(25),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< android::widget::AdapterView_::OnItemSelectedListener >
	>(get_jobject());
}

local_ref< android::widget::ListAdapter > android::widget::AutoCompleteTextView::getAdapter()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(26),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< android::widget::ListAdapter >
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setAdapter(local_ref< android::widget::ListAdapter > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(27),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::AutoCompleteTextView::onKeyPreIme(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(28),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(28), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::widget::AutoCompleteTextView::onKeyUp(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(29),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(29), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::widget::AutoCompleteTextView::onKeyDown(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(30),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(30), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::widget::AutoCompleteTextView::enoughToFilter()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(31),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(31), 
		jboolean
	>(get_jobject());
}

jboolean android::widget::AutoCompleteTextView::isPopupShowing()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(32),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(32), 
		jboolean
	>(get_jobject());
}


void android::widget::AutoCompleteTextView::clearListSelection()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(34),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setListSelection(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(35),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}

jint android::widget::AutoCompleteTextView::getListSelection()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(36),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(36), 
		jint
	>(get_jobject());
}


void android::widget::AutoCompleteTextView::performCompletion()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(38),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(38), 
		void
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::onCommitCompletion(local_ref< android::view::inputmethod::CompletionInfo > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(39),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(39), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::AutoCompleteTextView::isPerformingCompletion()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(40),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(40), 
		jboolean
	>(get_jobject());
}


void android::widget::AutoCompleteTextView::onFilterComplete(jint a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(42),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(42), 
		void
	>(get_jobject(), a0);
}

void android::widget::AutoCompleteTextView::onWindowFocusChanged(jboolean a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(43),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(43), 
		void
	>(get_jobject(), a0);
}





void android::widget::AutoCompleteTextView::dismissDropDown()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(48),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(48), 
		void
	>(get_jobject());
}


void android::widget::AutoCompleteTextView::showDropDown()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(50),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(50), 
		void
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::setValidator(local_ref< android::widget::AutoCompleteTextView_::Validator > const &a0)
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(51),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(51), 
		void
	>(get_jobject(), a0);
}

local_ref< android::widget::AutoCompleteTextView_::Validator > android::widget::AutoCompleteTextView::getValidator()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(52),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(52), 
		local_ref< android::widget::AutoCompleteTextView_::Validator >
	>(get_jobject());
}

void android::widget::AutoCompleteTextView::performValidation()
{
	return call_method<
		android::widget::AutoCompleteTextView::J2CPP_CLASS_NAME,
		android::widget::AutoCompleteTextView::J2CPP_METHOD_NAME(53),
		android::widget::AutoCompleteTextView::J2CPP_METHOD_SIGNATURE(53), 
		void
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(android::widget::AutoCompleteTextView,"android/widget/AutoCompleteTextView")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,3,"setOnClickListener","(Landroid/view/View$OnClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,4,"setCompletionHint","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,5,"getDropDownWidth","()I")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,6,"setDropDownWidth","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,7,"getDropDownHeight","()I")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,8,"setDropDownHeight","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,9,"getDropDownAnchor","()I")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,10,"setDropDownAnchor","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,11,"getDropDownBackground","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,12,"setDropDownBackgroundDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,13,"setDropDownBackgroundResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,14,"setDropDownVerticalOffset","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,15,"getDropDownVerticalOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,16,"setDropDownHorizontalOffset","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,17,"getDropDownHorizontalOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,18,"getThreshold","()I")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,19,"setThreshold","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,20,"setOnItemClickListener","(Landroid/widget/AdapterView$OnItemClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,21,"setOnItemSelectedListener","(Landroid/widget/AdapterView$OnItemSelectedListener;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,22,"getItemClickListener","()Landroid/widget/AdapterView$OnItemClickListener;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,23,"getItemSelectedListener","()Landroid/widget/AdapterView$OnItemSelectedListener;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,24,"getOnItemClickListener","()Landroid/widget/AdapterView$OnItemClickListener;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,25,"getOnItemSelectedListener","()Landroid/widget/AdapterView$OnItemSelectedListener;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,26,"getAdapter","()Landroid/widget/ListAdapter;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,27,"setAdapter","(Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,28,"onKeyPreIme","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,29,"onKeyUp","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,30,"onKeyDown","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,31,"enoughToFilter","()Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,32,"isPopupShowing","()Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,33,"convertSelectionToString","(Ljava/lang/Object;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,34,"clearListSelection","()V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,35,"setListSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,36,"getListSelection","()I")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,37,"performFiltering","(Ljava/lang/CharSequence;I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,38,"performCompletion","()V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,39,"onCommitCompletion","(Landroid/view/inputmethod/CompletionInfo;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,40,"isPerformingCompletion","()Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,41,"replaceText","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,42,"onFilterComplete","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,43,"onWindowFocusChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,44,"onDisplayHint","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,45,"onFocusChanged","(ZILandroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,46,"onAttachedToWindow","()V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,47,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,48,"dismissDropDown","()V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,49,"setFrame","(IIII)Z")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,50,"showDropDown","()V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,51,"setValidator","(Landroid/widget/AutoCompleteTextView$Validator;)V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,52,"getValidator","()Landroid/widget/AutoCompleteTextView$Validator;")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,53,"performValidation","()V")
J2CPP_DEFINE_METHOD(android::widget::AutoCompleteTextView,54,"getFilter","()Landroid/widget/Filter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_AUTOCOMPLETETEXTVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
