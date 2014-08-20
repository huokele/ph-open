/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.platformtools.NetStatusUtil
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_NETSTATUSUTIL_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_NETSTATUSUTIL_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace platformtools {

	class NetStatusUtil;
	class NetStatusUtil
		: public object<NetStatusUtil>
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

		explicit NetStatusUtil(jobject jobj)
		: object<NetStatusUtil>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		NetStatusUtil();
		static void dumpNetStatus(local_ref< android::content::Context >  const&);
		static jboolean isConnected(local_ref< android::content::Context >  const&);
		static local_ref< java::lang::String > getNetTypeString(local_ref< android::content::Context >  const&);
		static jint getNetType(local_ref< android::content::Context >  const&);
		static jboolean is2G(local_ref< android::content::Context >  const&);
		static jboolean is4G(local_ref< android::content::Context >  const&);
		static jboolean isWap(local_ref< android::content::Context >  const&);
		static jboolean isWap(jint);
		static jboolean is2G(jint);
		static jboolean is4G(jint);
		static jboolean is3G(jint);
		static jboolean isMobile(local_ref< android::content::Context >  const&);
		static jboolean isMobile(jint);
		static jboolean is3G(local_ref< android::content::Context >  const&);
		static jboolean isWifi(local_ref< android::content::Context >  const&);
		static jboolean isWifi(jint);
		static void startSettingItent(local_ref< android::content::Context >  const&, jint);
		static jint getWifiSleeepPolicy(local_ref< android::content::Context >  const&);
		static jboolean isLimited(jint);
		static jint getBackgroundLimitType(local_ref< android::content::Context >  const&);
		static jboolean isRestrictBacground(local_ref< android::content::Context >  const&);
		static jboolean isImmediatelyDestroyActivities(local_ref< android::content::Context >  const&);
		static jboolean checkFromXml(jint);
		static jboolean runRootCommand();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NON_NETWORK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > WIFI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > UNINET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > UNIWAP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > WAP_3G;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > NET_3G;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > CMWAP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > CMNET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > CTWAP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > CTNET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > MOBILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > LTE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > POLICY_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > POLICY_REJECT_METERED_BACKGROUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > TBACKGROUND_NOT_LIMITED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > TBACKGROUND_PROCESS_LIMITED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > TBACKGROUND_DATA_LIMITED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > TBACKGROUND_WIFI_LIMITED;
	}; //class NetStatusUtil

} //namespace platformtools
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_NETSTATUSUTIL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_NETSTATUSUTIL_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_NETSTATUSUTIL_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::platformtools::NetStatusUtil::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::tencent::mm::sdk::platformtools::NetStatusUtil::NetStatusUtil()
: object<com::tencent::mm::sdk::platformtools::NetStatusUtil>(
	call_new_object<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void com::tencent::mm::sdk::platformtools::NetStatusUtil::dumpNetStatus(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isConnected(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(a0);
}

local_ref< java::lang::String > com::tencent::mm::sdk::platformtools::NetStatusUtil::getNetTypeString(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(a0);
}

jint com::tencent::mm::sdk::platformtools::NetStatusUtil::getNetType(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::is2G(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(5),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::is4G(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(6),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isWap(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(7),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isWap(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(8),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::is2G(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(9),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::is4G(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(10),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::is3G(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(11),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isMobile(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(12),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isMobile(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(13),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::is3G(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(14),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isWifi(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(15),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isWifi(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(16),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(a0);
}


void com::tencent::mm::sdk::platformtools::NetStatusUtil::startSettingItent(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(18),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(a0, a1);
}

jint com::tencent::mm::sdk::platformtools::NetStatusUtil::getWifiSleeepPolicy(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(19),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isLimited(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(20),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(a0);
}

jint com::tencent::mm::sdk::platformtools::NetStatusUtil::getBackgroundLimitType(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(21),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isRestrictBacground(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(22),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::isImmediatelyDestroyActivities(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(23),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::checkFromXml(jint a0)
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(24),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(a0);
}

jboolean com::tencent::mm::sdk::platformtools::NetStatusUtil::runRootCommand()
{
	return call_static_method<
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_NAME(25),
		com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>();
}


static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(0),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(0),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::NON_NETWORK;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(1),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::WIFI;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(2),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::UNINET;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(3),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::UNIWAP;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(4),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(4),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::WAP_3G;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(5),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(5),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::NET_3G;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(6),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(6),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::CMWAP;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(7),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(7),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::CMNET;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(8),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(8),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::CTWAP;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(9),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(9),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::CTNET;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(10),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(10),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::MOBILE;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(11),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(11),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::LTE;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(12),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(12),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::POLICY_NONE;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(13),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(13),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::POLICY_REJECT_METERED_BACKGROUND;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(14),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(14),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::TBACKGROUND_NOT_LIMITED;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(15),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(15),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::TBACKGROUND_PROCESS_LIMITED;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(16),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(16),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::TBACKGROUND_DATA_LIMITED;

static_field<
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_NAME(17),
	com::tencent::mm::sdk::platformtools::NetStatusUtil::J2CPP_FIELD_SIGNATURE(17),
	jint
> com::tencent::mm::sdk::platformtools::NetStatusUtil::TBACKGROUND_WIFI_LIMITED;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::platformtools::NetStatusUtil,"com/tencent/mm/sdk/platformtools/NetStatusUtil")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,1,"dumpNetStatus","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,2,"isConnected","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,3,"getNetTypeString","(Landroid/content/Context;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,4,"getNetType","(Landroid/content/Context;)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,5,"is2G","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,6,"is4G","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,7,"isWap","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,8,"isWap","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,9,"is2G","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,10,"is4G","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,11,"is3G","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,12,"isMobile","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,13,"isMobile","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,14,"is3G","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,15,"isWifi","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,16,"isWifi","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,17,"a","(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,18,"startSettingItent","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,19,"getWifiSleeepPolicy","(Landroid/content/Context;)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,20,"isLimited","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,21,"getBackgroundLimitType","(Landroid/content/Context;)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,22,"isRestrictBacground","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,23,"isImmediatelyDestroyActivities","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,24,"checkFromXml","(I)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::platformtools::NetStatusUtil,25,"runRootCommand","()Z")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,0,"NON_NETWORK","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,1,"WIFI","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,2,"UNINET","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,3,"UNIWAP","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,4,"WAP_3G","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,5,"NET_3G","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,6,"CMWAP","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,7,"CMNET","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,8,"CTWAP","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,9,"CTNET","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,10,"MOBILE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,11,"LTE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,12,"POLICY_NONE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,13,"POLICY_REJECT_METERED_BACKGROUND","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,14,"TBACKGROUND_NOT_LIMITED","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,15,"TBACKGROUND_PROCESS_LIMITED","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,16,"TBACKGROUND_DATA_LIMITED","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::platformtools::NetStatusUtil,17,"TBACKGROUND_WIFI_LIMITED","I")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLATFORMTOOLS_NETSTATUSUTIL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
