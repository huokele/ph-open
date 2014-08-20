/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.contact.RContactAvatar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_CONTACT_RCONTACTAVATAR_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_CONTACT_RCONTACTAVATAR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace contact {

	class RContactAvatar;
	class RContactAvatar
		: public object<RContactAvatar>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit RContactAvatar(jobject jobj)
		: object<RContactAvatar>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		RContactAvatar();
	}; //class RContactAvatar

} //namespace contact
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_CONTACT_RCONTACTAVATAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_CONTACT_RCONTACTAVATAR_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_CONTACT_RCONTACTAVATAR_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::contact::RContactAvatar::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::tencent::mm::sdk::contact::RContactAvatar::RContactAvatar()
: object<com::tencent::mm::sdk::contact::RContactAvatar>(
	call_new_object<
		com::tencent::mm::sdk::contact::RContactAvatar::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::contact::RContactAvatar::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::contact::RContactAvatar::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::contact::RContactAvatar,"com/tencent/mm/sdk/contact/RContactAvatar")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::contact::RContactAvatar,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_CONTACT_RCONTACTAVATAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
