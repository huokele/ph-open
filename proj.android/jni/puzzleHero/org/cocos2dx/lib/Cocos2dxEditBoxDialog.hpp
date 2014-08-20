/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.cocos2dx.lib.Cocos2dxEditBoxDialog
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXEDITBOXDIALOG_HPP_DECL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXEDITBOXDIALOG_HPP_DECL


namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace app { class Dialog; } } }
namespace j2cpp { namespace android { namespace widget { namespace TextView_ { class OnEditorActionListener; } } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/app/Dialog.hpp>
#include <android/content/Context.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/Window.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace cocos2dx { namespace lib {

	class Cocos2dxEditBoxDialog;
	namespace Cocos2dxEditBoxDialog_ {

		class _anounymous1;
		class _anounymous1
			: public object<_anounymous1>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)

			explicit _anounymous1(jobject jobj)
			: object<_anounymous1>(jobj)
			{
			}

			operator local_ref<java::lang::Runnable>() const;
			operator local_ref<java::lang::Object>() const;


			void run();

		}; //class _anounymous1

		class _anounymous2;
		class _anounymous2
			: public object<_anounymous2>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)

			explicit _anounymous2(jobject jobj)
			: object<_anounymous2>(jobj)
			{
			}

			operator local_ref<android::widget::TextView_::OnEditorActionListener>() const;
			operator local_ref<java::lang::Object>() const;


			jboolean onEditorAction(local_ref< android::widget::TextView >  const&, jint, local_ref< android::view::KeyEvent >  const&);

		}; //class _anounymous2

	} //namespace Cocos2dxEditBoxDialog_

	class Cocos2dxEditBoxDialog
		: public object<Cocos2dxEditBoxDialog>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
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
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)

		typedef Cocos2dxEditBoxDialog_::_anounymous1 _anounymous1;
		typedef Cocos2dxEditBoxDialog_::_anounymous2 _anounymous2;

		explicit Cocos2dxEditBoxDialog(jobject jobj)
		: object<Cocos2dxEditBoxDialog>(jobj)
		{
		}

		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;
		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::content::DialogInterface>() const;
		operator local_ref<android::app::Dialog>() const;
		operator local_ref<java::lang::Object>() const;


		Cocos2dxEditBoxDialog(local_ref< android::content::Context > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint, jint, jint, jint);

	}; //class Cocos2dxEditBoxDialog

} //namespace lib
} //namespace cocos2dx
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXEDITBOXDIALOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_COCOS2DX_LIB_COCOS2DXEDITBOXDIALOG_HPP_IMPL
#define J2CPP_ORG_COCOS2DX_LIB_COCOS2DXEDITBOXDIALOG_HPP_IMPL

namespace j2cpp {




org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1::operator local_ref<java::lang::Runnable>() const
{
	return local_ref<java::lang::Runnable>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1::run()
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1::J2CPP_METHOD_NAME(1),
		org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1,"org/cocos2dx/lib/Cocos2dxEditBoxDialog$1")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1,0,"<init>","(Lorg/cocos2dx/lib/Cocos2dxEditBoxDialog;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1,1,"run","()V")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous1,0,"this$0","Lorg/cocos2dx/lib/Cocos2dxEditBoxDialog;")


org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2::operator local_ref<android::widget::TextView_::OnEditorActionListener>() const
{
	return local_ref<android::widget::TextView_::OnEditorActionListener>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jboolean org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2::onEditorAction(local_ref< android::widget::TextView > const &a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2::J2CPP_METHOD_NAME(1),
		org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}



J2CPP_DEFINE_CLASS(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2,"org/cocos2dx/lib/Cocos2dxEditBoxDialog$2")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2,0,"<init>","(Lorg/cocos2dx/lib/Cocos2dxEditBoxDialog;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2,1,"onEditorAction","(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog_::_anounymous2,0,"this$0","Lorg/cocos2dx/lib/Cocos2dxEditBoxDialog;")



org::cocos2dx::lib::Cocos2dxEditBoxDialog::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxEditBoxDialog::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxEditBoxDialog::operator local_ref<android::content::DialogInterface>() const
{
	return local_ref<android::content::DialogInterface>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxEditBoxDialog::operator local_ref<android::app::Dialog>() const
{
	return local_ref<android::app::Dialog>(get_jobject());
}

org::cocos2dx::lib::Cocos2dxEditBoxDialog::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::cocos2dx::lib::Cocos2dxEditBoxDialog::Cocos2dxEditBoxDialog(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, jint a3, jint a4, jint a5, jint a6)
: object<org::cocos2dx::lib::Cocos2dxEditBoxDialog>(
	call_new_object<
		org::cocos2dx::lib::Cocos2dxEditBoxDialog::J2CPP_CLASS_NAME,
		org::cocos2dx::lib::Cocos2dxEditBoxDialog::J2CPP_METHOD_NAME(0),
		org::cocos2dx::lib::Cocos2dxEditBoxDialog::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3, a4, a5, a6)
)
{
}








J2CPP_DEFINE_CLASS(org::cocos2dx::lib::Cocos2dxEditBoxDialog,"org/cocos2dx/lib/Cocos2dxEditBoxDialog")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,0,"<init>","(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;IIII)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,1,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,2,"convertDipsToPixels","(F)I")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,3,"openKeyboard","()V")
J2CPP_DEFINE_METHOD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,4,"closeKeyboard","()V")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,0,"kEditBoxInputModeAny","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,1,"kEditBoxInputModeEmailAddr","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,2,"kEditBoxInputModeNumeric","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,3,"kEditBoxInputModePhoneNumber","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,4,"kEditBoxInputModeUrl","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,5,"kEditBoxInputModeDecimal","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,6,"kEditBoxInputModeSingleLine","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,7,"kEditBoxInputFlagPassword","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,8,"kEditBoxInputFlagSensitive","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,9,"kEditBoxInputFlagInitialCapsWord","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,10,"kEditBoxInputFlagInitialCapsSentence","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,11,"kEditBoxInputFlagInitialCapsAllCharacters","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,12,"kKeyboardReturnTypeDefault","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,13,"kKeyboardReturnTypeDone","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,14,"kKeyboardReturnTypeSend","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,15,"kKeyboardReturnTypeSearch","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,16,"kKeyboardReturnTypeGo","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,17,"mInputEditText","Landroid/widget/EditText;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,18,"mTextViewTitle","Landroid/widget/TextView;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,19,"mTitle","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,20,"mMessage","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,21,"mInputMode","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,22,"mInputFlag","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,23,"mReturnType","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,24,"mMaxLength","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,25,"mInputFlagConstraints","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,26,"mInputModeContraints","I")
J2CPP_DEFINE_FIELD(org::cocos2dx::lib::Cocos2dxEditBoxDialog,27,"mIsMultiline","Z")

} //namespace j2cpp

#endif //J2CPP_ORG_COCOS2DX_LIB_COCOS2DXEDITBOXDIALOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
