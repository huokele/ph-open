/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.preference.PreferenceScreen
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCESCREEN_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCESCREEN_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Dialog; } } }
namespace j2cpp { namespace android { namespace preference { class PreferenceGroup; } } }
namespace j2cpp { namespace android { namespace preference { class Preference; } } }
namespace j2cpp { namespace android { namespace widget { class AdapterView; } } }
namespace j2cpp { namespace android { namespace widget { class ListView; } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemClickListener; } } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnDismissListener; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }


#include <android/app/Dialog.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/preference/Preference.hpp>
#include <android/preference/PreferenceGroup.hpp>
#include <android/view/View.hpp>
#include <android/widget/AdapterView.hpp>
#include <android/widget/ListAdapter.hpp>
#include <android/widget/ListView.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class PreferenceScreen;
	class PreferenceScreen
		: public object<PreferenceScreen>
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

		explicit PreferenceScreen(jobject jobj)
		: object<PreferenceScreen>(jobj)
		{
		}

		operator local_ref<android::preference::PreferenceGroup>() const;
		operator local_ref<android::preference::Preference>() const;
		operator local_ref<android::widget::AdapterView_::OnItemClickListener>() const;
		operator local_ref<android::content::DialogInterface_::OnDismissListener>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;


		local_ref< android::widget::ListAdapter > getRootAdapter();
		void bind(local_ref< android::widget::ListView >  const&);
		void onDismiss(local_ref< android::content::DialogInterface >  const&);
		local_ref< android::app::Dialog > getDialog();
		void onItemClick(local_ref< android::widget::AdapterView >  const&, local_ref< android::view::View >  const&, jint, jlong);
	}; //class PreferenceScreen

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCESCREEN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCESCREEN_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCESCREEN_HPP_IMPL

namespace j2cpp {



android::preference::PreferenceScreen::operator local_ref<android::preference::PreferenceGroup>() const
{
	return local_ref<android::preference::PreferenceGroup>(get_jobject());
}

android::preference::PreferenceScreen::operator local_ref<android::preference::Preference>() const
{
	return local_ref<android::preference::Preference>(get_jobject());
}

android::preference::PreferenceScreen::operator local_ref<android::widget::AdapterView_::OnItemClickListener>() const
{
	return local_ref<android::widget::AdapterView_::OnItemClickListener>(get_jobject());
}

android::preference::PreferenceScreen::operator local_ref<android::content::DialogInterface_::OnDismissListener>() const
{
	return local_ref<android::content::DialogInterface_::OnDismissListener>(get_jobject());
}

android::preference::PreferenceScreen::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::preference::PreferenceScreen::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}


local_ref< android::widget::ListAdapter > android::preference::PreferenceScreen::getRootAdapter()
{
	return call_method<
		android::preference::PreferenceScreen::J2CPP_CLASS_NAME,
		android::preference::PreferenceScreen::J2CPP_METHOD_NAME(1),
		android::preference::PreferenceScreen::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::widget::ListAdapter >
	>(get_jobject());
}


void android::preference::PreferenceScreen::bind(local_ref< android::widget::ListView > const &a0)
{
	return call_method<
		android::preference::PreferenceScreen::J2CPP_CLASS_NAME,
		android::preference::PreferenceScreen::J2CPP_METHOD_NAME(3),
		android::preference::PreferenceScreen::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


void android::preference::PreferenceScreen::onDismiss(local_ref< android::content::DialogInterface > const &a0)
{
	return call_method<
		android::preference::PreferenceScreen::J2CPP_CLASS_NAME,
		android::preference::PreferenceScreen::J2CPP_METHOD_NAME(5),
		android::preference::PreferenceScreen::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< android::app::Dialog > android::preference::PreferenceScreen::getDialog()
{
	return call_method<
		android::preference::PreferenceScreen::J2CPP_CLASS_NAME,
		android::preference::PreferenceScreen::J2CPP_METHOD_NAME(6),
		android::preference::PreferenceScreen::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::app::Dialog >
	>(get_jobject());
}

void android::preference::PreferenceScreen::onItemClick(local_ref< android::widget::AdapterView > const &a0, local_ref< android::view::View > const &a1, jint a2, jlong a3)
{
	return call_method<
		android::preference::PreferenceScreen::J2CPP_CLASS_NAME,
		android::preference::PreferenceScreen::J2CPP_METHOD_NAME(7),
		android::preference::PreferenceScreen::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}





J2CPP_DEFINE_CLASS(android::preference::PreferenceScreen,"android/preference/PreferenceScreen")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,1,"getRootAdapter","()Landroid/widget/ListAdapter;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,2,"onCreateRootAdapter","()Landroid/widget/ListAdapter;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,3,"bind","(Landroid/widget/ListView;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,4,"onClick","()V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,5,"onDismiss","(Landroid/content/DialogInterface;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,6,"getDialog","()Landroid/app/Dialog;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,7,"onItemClick","(Landroid/widget/AdapterView;Landroid/view/View;IJ)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,8,"isOnSameScreenAsChildren","()Z")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,9,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::preference::PreferenceScreen,10,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCESCREEN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
