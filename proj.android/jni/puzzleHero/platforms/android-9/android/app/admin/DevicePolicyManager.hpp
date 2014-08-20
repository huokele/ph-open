/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.admin.DevicePolicyManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_HPP_DECL
#define J2CPP_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }


#include <android/content/ComponentName.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace app { namespace admin {

	class DevicePolicyManager;
	class DevicePolicyManager
		: public object<DevicePolicyManager>
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

		explicit DevicePolicyManager(jobject jobj)
		: object<DevicePolicyManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean isAdminActive(local_ref< android::content::ComponentName >  const&);
		local_ref< java::util::List > getActiveAdmins();
		void removeActiveAdmin(local_ref< android::content::ComponentName >  const&);
		void setPasswordQuality(local_ref< android::content::ComponentName >  const&, jint);
		jint getPasswordQuality(local_ref< android::content::ComponentName >  const&);
		void setPasswordMinimumLength(local_ref< android::content::ComponentName >  const&, jint);
		jint getPasswordMinimumLength(local_ref< android::content::ComponentName >  const&);
		jint getPasswordMaximumLength(jint);
		jboolean isActivePasswordSufficient();
		jint getCurrentFailedPasswordAttempts();
		void setMaximumFailedPasswordsForWipe(local_ref< android::content::ComponentName >  const&, jint);
		jint getMaximumFailedPasswordsForWipe(local_ref< android::content::ComponentName >  const&);
		jboolean resetPassword(local_ref< java::lang::String >  const&, jint);
		void setMaximumTimeToLock(local_ref< android::content::ComponentName >  const&, jlong);
		jlong getMaximumTimeToLock(local_ref< android::content::ComponentName >  const&);
		void lockNow();
		void wipeData(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ACTION_ADD_DEVICE_ADMIN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > EXTRA_DEVICE_ADMIN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_ADD_EXPLANATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > ACTION_SET_NEW_PASSWORD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > PASSWORD_QUALITY_UNSPECIFIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > PASSWORD_QUALITY_SOMETHING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > PASSWORD_QUALITY_NUMERIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > PASSWORD_QUALITY_ALPHABETIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > PASSWORD_QUALITY_ALPHANUMERIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > RESET_PASSWORD_REQUIRE_ENTRY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > WIPE_EXTERNAL_STORAGE;
	}; //class DevicePolicyManager

} //namespace admin
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_HPP_IMPL
#define J2CPP_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_HPP_IMPL

namespace j2cpp {



android::app::admin::DevicePolicyManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jboolean android::app::admin::DevicePolicyManager::isAdminActive(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(1),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::List > android::app::admin::DevicePolicyManager::getActiveAdmins()
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(2),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::List >
	>(get_jobject());
}

void android::app::admin::DevicePolicyManager::removeActiveAdmin(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(3),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::app::admin::DevicePolicyManager::setPasswordQuality(local_ref< android::content::ComponentName > const &a0, jint a1)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(4),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

jint android::app::admin::DevicePolicyManager::getPasswordQuality(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(5),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumLength(local_ref< android::content::ComponentName > const &a0, jint a1)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(6),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

jint android::app::admin::DevicePolicyManager::getPasswordMinimumLength(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(7),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

jint android::app::admin::DevicePolicyManager::getPasswordMaximumLength(jint a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(8),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0);
}

jboolean android::app::admin::DevicePolicyManager::isActivePasswordSufficient()
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(9),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject());
}

jint android::app::admin::DevicePolicyManager::getCurrentFailedPasswordAttempts()
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(10),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

void android::app::admin::DevicePolicyManager::setMaximumFailedPasswordsForWipe(local_ref< android::content::ComponentName > const &a0, jint a1)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(11),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

jint android::app::admin::DevicePolicyManager::getMaximumFailedPasswordsForWipe(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(12),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject(), a0);
}

jboolean android::app::admin::DevicePolicyManager::resetPassword(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(13),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::app::admin::DevicePolicyManager::setMaximumTimeToLock(local_ref< android::content::ComponentName > const &a0, jlong a1)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(14),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

jlong android::app::admin::DevicePolicyManager::getMaximumTimeToLock(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(15),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(15), 
		jlong
	>(get_jobject(), a0);
}

void android::app::admin::DevicePolicyManager::lockNow()
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(16),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject());
}

void android::app::admin::DevicePolicyManager::wipeData(jint a0)
{
	return call_method<
		android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_NAME(17),
		android::app::admin::DevicePolicyManager::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(0),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::app::admin::DevicePolicyManager::ACTION_ADD_DEVICE_ADMIN;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(1),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::app::admin::DevicePolicyManager::EXTRA_DEVICE_ADMIN;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(2),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::app::admin::DevicePolicyManager::EXTRA_ADD_EXPLANATION;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(3),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::app::admin::DevicePolicyManager::ACTION_SET_NEW_PASSWORD;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(4),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::app::admin::DevicePolicyManager::PASSWORD_QUALITY_UNSPECIFIED;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(5),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::app::admin::DevicePolicyManager::PASSWORD_QUALITY_SOMETHING;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(6),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::app::admin::DevicePolicyManager::PASSWORD_QUALITY_NUMERIC;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(7),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::app::admin::DevicePolicyManager::PASSWORD_QUALITY_ALPHABETIC;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(8),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::app::admin::DevicePolicyManager::PASSWORD_QUALITY_ALPHANUMERIC;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(9),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::app::admin::DevicePolicyManager::RESET_PASSWORD_REQUIRE_ENTRY;

static_field<
	android::app::admin::DevicePolicyManager::J2CPP_CLASS_NAME,
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_NAME(10),
	android::app::admin::DevicePolicyManager::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::app::admin::DevicePolicyManager::WIPE_EXTERNAL_STORAGE;


J2CPP_DEFINE_CLASS(android::app::admin::DevicePolicyManager,"android/app/admin/DevicePolicyManager")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,1,"isAdminActive","(Landroid/content/ComponentName;)Z")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,2,"getActiveAdmins","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,3,"removeActiveAdmin","(Landroid/content/ComponentName;)V")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,4,"setPasswordQuality","(Landroid/content/ComponentName;I)V")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,5,"getPasswordQuality","(Landroid/content/ComponentName;)I")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,6,"setPasswordMinimumLength","(Landroid/content/ComponentName;I)V")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,7,"getPasswordMinimumLength","(Landroid/content/ComponentName;)I")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,8,"getPasswordMaximumLength","(I)I")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,9,"isActivePasswordSufficient","()Z")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,10,"getCurrentFailedPasswordAttempts","()I")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,11,"setMaximumFailedPasswordsForWipe","(Landroid/content/ComponentName;I)V")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,12,"getMaximumFailedPasswordsForWipe","(Landroid/content/ComponentName;)I")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,13,"resetPassword","(Ljava/lang/String;I)Z")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,14,"setMaximumTimeToLock","(Landroid/content/ComponentName;J)V")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,15,"getMaximumTimeToLock","(Landroid/content/ComponentName;)J")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,16,"lockNow","()V")
J2CPP_DEFINE_METHOD(android::app::admin::DevicePolicyManager,17,"wipeData","(I)V")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,0,"ACTION_ADD_DEVICE_ADMIN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,1,"EXTRA_DEVICE_ADMIN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,2,"EXTRA_ADD_EXPLANATION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,3,"ACTION_SET_NEW_PASSWORD","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,4,"PASSWORD_QUALITY_UNSPECIFIED","I")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,5,"PASSWORD_QUALITY_SOMETHING","I")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,6,"PASSWORD_QUALITY_NUMERIC","I")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,7,"PASSWORD_QUALITY_ALPHABETIC","I")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,8,"PASSWORD_QUALITY_ALPHANUMERIC","I")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,9,"RESET_PASSWORD_REQUIRE_ENTRY","I")
J2CPP_DEFINE_FIELD(android::app::admin::DevicePolicyManager,10,"WIPE_EXTERNAL_STORAGE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ADMIN_DEVICEPOLICYMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
