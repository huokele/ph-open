/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.conversation.RConversation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_CONVERSATION_RCONVERSATION_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_CONVERSATION_RCONVERSATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Field; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace storage { class MAutoDBItem; } } } } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace storage { class MDBItem; } } } } } }


#include <com/tencent/mm/sdk/storage/MAutoDBItem.hpp>
#include <com/tencent/mm/sdk/storage/MDBItem.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/reflect/Field.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace conversation {

	class RConversation;
	class RConversation
		: public object<RConversation>
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
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)

		explicit RConversation(jobject jobj)
		: object<RConversation>(jobj)
		, field_unReadCount(jobj)
		, field_chatmode(jobj)
		, field_status(jobj)
		, field_isSend(jobj)
		, field_conversationTime(jobj)
		, field_username(jobj)
		, field_content(jobj)
		, field_msgType(jobj)
		, field_customNotify(jobj)
		, field_showTips(jobj)
		, field_flag(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<com::tencent::mm::sdk::storage::MAutoDBItem>() const;
		operator local_ref<com::tencent::mm::sdk::storage::MDBItem>() const;


		local_ref< array< local_ref< java::lang::reflect::Field >, 1> > fields();
		static local_ref< array< local_ref< java::lang::reflect::Field >, 1> > getFields();
		RConversation();
		RConversation(local_ref< java::lang::String > const&);
		jint getUnReadCount();
		void setUnReadCount(jint);
		jint getStatus();
		void setStatus(jint);
		jint getIsSend();
		void setIsSend(jint);
		jint getChatmode();
		void setChatmode(jint);
		jlong getConversationTime();
		void setConversationTime(jlong);
		local_ref< java::lang::String > getUsername();
		void setUsername(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getCustomNotify();
		void setCustomNotify(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getContent();
		void setContent(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getMsgType();
		void setMsgType(local_ref< java::lang::String >  const&);
		jint getShowTips();
		void setShowTips(jint);
		jlong getFlag();
		void setFlag(jlong);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< array< local_ref< java::lang::String >, 1> > > COLUMNS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > NOT_SHOWN_TIPS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > HAS_SHOWN_TIPS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > FLAG_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > ROOM_MUTE_ON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > ROOM_MUTE_OFF;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > field_unReadCount;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > field_chatmode;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > field_status;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > field_isSend;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jlong > field_conversationTime;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > field_username;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > field_content;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > field_msgType;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::lang::String > > field_customNotify;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > field_showTips;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jlong > field_flag;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > COL_UNREAD_COUNT_INVALID_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > INDEX_UNREAD_COUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > INDEX_STATUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > INDEX_IS_SEND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > INDEX_CONVERSATION_TIME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > INDEX_USERNAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > INDEX_CONTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > INDEX_MSGTYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > INDEX_FLAG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), local_ref< java::lang::String > > OLD_TABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), local_ref< java::lang::String > > OLD_BOTTLE_TABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), local_ref< java::lang::String > > COL_UNREAD_COUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), local_ref< java::lang::String > > COL_CHATMODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), local_ref< java::lang::String > > COL_STATUS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), local_ref< java::lang::String > > COL_IS_SEND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), local_ref< java::lang::String > > COL_CONVERSATION_TIME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), local_ref< java::lang::String > > COL_USERNAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), local_ref< java::lang::String > > COL_CONTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), local_ref< java::lang::String > > COL_MSGTYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), local_ref< java::lang::String > > COL_FLAG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), jlong > MAX_TIME;
	}; //class RConversation

} //namespace conversation
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_CONVERSATION_RCONVERSATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_CONVERSATION_RCONVERSATION_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_CONVERSATION_RCONVERSATION_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::conversation::RConversation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

com::tencent::mm::sdk::conversation::RConversation::operator local_ref<com::tencent::mm::sdk::storage::MAutoDBItem>() const
{
	return local_ref<com::tencent::mm::sdk::storage::MAutoDBItem>(get_jobject());
}

com::tencent::mm::sdk::conversation::RConversation::operator local_ref<com::tencent::mm::sdk::storage::MDBItem>() const
{
	return local_ref<com::tencent::mm::sdk::storage::MDBItem>(get_jobject());
}

local_ref< array< local_ref< java::lang::reflect::Field >, 1> > com::tencent::mm::sdk::conversation::RConversation::fields()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::lang::reflect::Field >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::reflect::Field >, 1> > com::tencent::mm::sdk::conversation::RConversation::getFields()
{
	return call_static_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< java::lang::reflect::Field >, 1> >
	>();
}


com::tencent::mm::sdk::conversation::RConversation::RConversation()
: object<com::tencent::mm::sdk::conversation::RConversation>(
	call_new_object<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(2)
	>()
)
, field_unReadCount(get_jobject())
, field_chatmode(get_jobject())
, field_status(get_jobject())
, field_isSend(get_jobject())
, field_conversationTime(get_jobject())
, field_username(get_jobject())
, field_content(get_jobject())
, field_msgType(get_jobject())
, field_customNotify(get_jobject())
, field_showTips(get_jobject())
, field_flag(get_jobject())
{
}



com::tencent::mm::sdk::conversation::RConversation::RConversation(local_ref< java::lang::String > const &a0)
: object<com::tencent::mm::sdk::conversation::RConversation>(
	call_new_object<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
, field_unReadCount(get_jobject())
, field_chatmode(get_jobject())
, field_status(get_jobject())
, field_isSend(get_jobject())
, field_conversationTime(get_jobject())
, field_username(get_jobject())
, field_content(get_jobject())
, field_msgType(get_jobject())
, field_customNotify(get_jobject())
, field_showTips(get_jobject())
, field_flag(get_jobject())
{
}


jint com::tencent::mm::sdk::conversation::RConversation::getUnReadCount()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setUnReadCount(jint a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(5),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

jint com::tencent::mm::sdk::conversation::RConversation::getStatus()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(6),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setStatus(jint a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(7),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

jint com::tencent::mm::sdk::conversation::RConversation::getIsSend()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(8),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setIsSend(jint a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(9),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

jint com::tencent::mm::sdk::conversation::RConversation::getChatmode()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(10),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setChatmode(jint a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(11),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

jlong com::tencent::mm::sdk::conversation::RConversation::getConversationTime()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(12),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(12), 
		jlong
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setConversationTime(jlong a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(13),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > com::tencent::mm::sdk::conversation::RConversation::getUsername()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(14),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setUsername(local_ref< java::lang::String > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(15),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > com::tencent::mm::sdk::conversation::RConversation::getCustomNotify()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(16),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setCustomNotify(local_ref< java::lang::String > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(17),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > com::tencent::mm::sdk::conversation::RConversation::getContent()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(18),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setContent(local_ref< java::lang::String > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(19),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > com::tencent::mm::sdk::conversation::RConversation::getMsgType()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(20),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setMsgType(local_ref< java::lang::String > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(21),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0);
}

jint com::tencent::mm::sdk::conversation::RConversation::getShowTips()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(22),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setShowTips(jint a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(23),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject(), a0);
}

jlong com::tencent::mm::sdk::conversation::RConversation::getFlag()
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(24),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(24), 
		jlong
	>(get_jobject());
}

void com::tencent::mm::sdk::conversation::RConversation::setFlag(jlong a0)
{
	return call_method<
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_NAME(25),
		com::tencent::mm::sdk::conversation::RConversation::J2CPP_METHOD_SIGNATURE(25), 
		void
	>(get_jobject(), a0);
}



static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(1),
	local_ref< array< local_ref< java::lang::String >, 1> >
> com::tencent::mm::sdk::conversation::RConversation::COLUMNS;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(2),
	jint
> com::tencent::mm::sdk::conversation::RConversation::NOT_SHOWN_TIPS;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(3),
	jint
> com::tencent::mm::sdk::conversation::RConversation::HAS_SHOWN_TIPS;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(4),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(4),
	jint
> com::tencent::mm::sdk::conversation::RConversation::FLAG_NORMAL;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(5),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(5),
	jint
> com::tencent::mm::sdk::conversation::RConversation::ROOM_MUTE_ON;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(6),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(6),
	jint
> com::tencent::mm::sdk::conversation::RConversation::ROOM_MUTE_OFF;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(18),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(18),
	jint
> com::tencent::mm::sdk::conversation::RConversation::COL_UNREAD_COUNT_INVALID_VALUE;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(19),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(19),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_UNREAD_COUNT;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(20),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(20),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_STATUE;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(21),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(21),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_IS_SEND;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(22),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(22),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_CONVERSATION_TIME;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(23),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(23),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_USERNAME;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(24),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(24),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_CONTENT;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(25),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(25),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_MSGTYPE;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(26),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(26),
	jint
> com::tencent::mm::sdk::conversation::RConversation::INDEX_FLAG;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(27),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(27),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::OLD_TABLE;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(28),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(28),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::OLD_BOTTLE_TABLE;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(29),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(29),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_UNREAD_COUNT;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(30),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(30),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_CHATMODE;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(31),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(31),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_STATUS;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(32),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(32),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_IS_SEND;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(33),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(33),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_CONVERSATION_TIME;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(34),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(34),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_USERNAME;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(35),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(35),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_CONTENT;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(36),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(36),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_MSGTYPE;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(37),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(37),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::conversation::RConversation::COL_FLAG;

static_field<
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_NAME(38),
	com::tencent::mm::sdk::conversation::RConversation::J2CPP_FIELD_SIGNATURE(38),
	jlong
> com::tencent::mm::sdk::conversation::RConversation::MAX_TIME;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::conversation::RConversation,"com/tencent/mm/sdk/conversation/RConversation")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,0,"fields","()[java.lang.reflect.Field")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,1,"getFields","()[java.lang.reflect.Field")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,2,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,4,"getUnReadCount","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,5,"setUnReadCount","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,6,"getStatus","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,7,"setStatus","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,8,"getIsSend","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,9,"setIsSend","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,10,"getChatmode","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,11,"setChatmode","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,12,"getConversationTime","()J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,13,"setConversationTime","(J)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,14,"getUsername","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,15,"setUsername","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,16,"getCustomNotify","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,17,"setCustomNotify","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,18,"getContent","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,19,"setContent","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,20,"getMsgType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,21,"setMsgType","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,22,"getShowTips","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,23,"setShowTips","(I)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,24,"getFlag","()J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,25,"setFlag","(J)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::conversation::RConversation,26,"<clinit>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,0,"p","[java.lang.reflect.Field")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,1,"COLUMNS","[java.lang.String")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,2,"NOT_SHOWN_TIPS","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,3,"HAS_SHOWN_TIPS","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,4,"FLAG_NORMAL","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,5,"ROOM_MUTE_ON","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,6,"ROOM_MUTE_OFF","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,7,"field_unReadCount","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,8,"field_chatmode","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,9,"field_status","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,10,"field_isSend","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,11,"field_conversationTime","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,12,"field_username","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,13,"field_content","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,14,"field_msgType","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,15,"field_customNotify","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,16,"field_showTips","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,17,"field_flag","J")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,18,"COL_UNREAD_COUNT_INVALID_VALUE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,19,"INDEX_UNREAD_COUNT","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,20,"INDEX_STATUE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,21,"INDEX_IS_SEND","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,22,"INDEX_CONVERSATION_TIME","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,23,"INDEX_USERNAME","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,24,"INDEX_CONTENT","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,25,"INDEX_MSGTYPE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,26,"INDEX_FLAG","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,27,"OLD_TABLE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,28,"OLD_BOTTLE_TABLE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,29,"COL_UNREAD_COUNT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,30,"COL_CHATMODE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,31,"COL_STATUS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,32,"COL_IS_SEND","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,33,"COL_CONVERSATION_TIME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,34,"COL_USERNAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,35,"COL_CONTENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,36,"COL_MSGTYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,37,"COL_FLAG","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::conversation::RConversation,38,"MAX_TIME","J")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_CONVERSATION_RCONVERSATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
