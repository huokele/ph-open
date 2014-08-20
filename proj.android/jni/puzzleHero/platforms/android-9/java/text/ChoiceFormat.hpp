/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.ChoiceFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_CHOICEFORMAT_HPP_DECL
#define J2CPP_JAVA_TEXT_CHOICEFORMAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace text { class ParsePosition; } } }
namespace j2cpp { namespace java { namespace text { class FieldPosition; } } }
namespace j2cpp { namespace java { namespace text { class NumberFormat; } } }
namespace j2cpp { namespace java { namespace text { class Format; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/text/Format.hpp>
#include <java/text/NumberFormat.hpp>
#include <java/text/ParsePosition.hpp>


namespace j2cpp {

namespace java { namespace text {

	class ChoiceFormat;
	class ChoiceFormat
		: public object<ChoiceFormat>
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

		explicit ChoiceFormat(jobject jobj)
		: object<ChoiceFormat>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::text::NumberFormat>() const;
		operator local_ref<java::text::Format>() const;


		ChoiceFormat(local_ref< array<jdouble,1> > const&, local_ref< array< local_ref< java::lang::String >, 1> > const&);
		ChoiceFormat(local_ref< java::lang::String > const&);
		void applyPattern(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::StringBuffer > format(jdouble, local_ref< java::lang::StringBuffer >  const&, local_ref< java::text::FieldPosition >  const&);
		local_ref< java::lang::StringBuffer > format(jlong, local_ref< java::lang::StringBuffer >  const&, local_ref< java::text::FieldPosition >  const&);
		local_ref< array< local_ref< java::lang::Object >, 1> > getFormats();
		local_ref< array<jdouble,1> > getLimits();
		jint hashCode();
		static jdouble nextDouble(jdouble);
		static jdouble nextDouble(jdouble, jboolean);
		local_ref< java::lang::Number > parse(local_ref< java::lang::String >  const&, local_ref< java::text::ParsePosition >  const&);
		static jdouble previousDouble(jdouble);
		void setChoices(local_ref< array<jdouble,1> >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< java::lang::String > toPattern();
	}; //class ChoiceFormat

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_CHOICEFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_CHOICEFORMAT_HPP_IMPL
#define J2CPP_JAVA_TEXT_CHOICEFORMAT_HPP_IMPL

namespace j2cpp {



java::text::ChoiceFormat::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::text::ChoiceFormat::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::ChoiceFormat::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::text::ChoiceFormat::operator local_ref<java::text::NumberFormat>() const
{
	return local_ref<java::text::NumberFormat>(get_jobject());
}

java::text::ChoiceFormat::operator local_ref<java::text::Format>() const
{
	return local_ref<java::text::Format>(get_jobject());
}


java::text::ChoiceFormat::ChoiceFormat(local_ref< array<jdouble,1> > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
: object<java::text::ChoiceFormat>(
	call_new_object<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(0),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



java::text::ChoiceFormat::ChoiceFormat(local_ref< java::lang::String > const &a0)
: object<java::text::ChoiceFormat>(
	call_new_object<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(1),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void java::text::ChoiceFormat::applyPattern(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(2),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::text::ChoiceFormat::clone()
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(3),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::text::ChoiceFormat::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(4),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::text::ChoiceFormat::format(jdouble a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(5),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::StringBuffer >
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuffer > java::text::ChoiceFormat::format(jlong a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(6),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::StringBuffer >
	>(get_jobject(), a0, a1, a2);
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::text::ChoiceFormat::getFormats()
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(7),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array< local_ref< java::lang::Object >, 1> >
	>(get_jobject());
}

local_ref< array<jdouble,1> > java::text::ChoiceFormat::getLimits()
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(8),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array<jdouble,1> >
	>(get_jobject());
}

jint java::text::ChoiceFormat::hashCode()
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(9),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

jdouble java::text::ChoiceFormat::nextDouble(jdouble a0)
{
	return call_static_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(10),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(10), 
		jdouble
	>(a0);
}

jdouble java::text::ChoiceFormat::nextDouble(jdouble a0, jboolean a1)
{
	return call_static_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(11),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(11), 
		jdouble
	>(a0, a1);
}

local_ref< java::lang::Number > java::text::ChoiceFormat::parse(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(12),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Number >
	>(get_jobject(), a0, a1);
}

jdouble java::text::ChoiceFormat::previousDouble(jdouble a0)
{
	return call_static_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(13),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(13), 
		jdouble
	>(a0);
}

void java::text::ChoiceFormat::setChoices(local_ref< array<jdouble,1> > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(14),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::text::ChoiceFormat::toPattern()
{
	return call_method<
		java::text::ChoiceFormat::J2CPP_CLASS_NAME,
		java::text::ChoiceFormat::J2CPP_METHOD_NAME(15),
		java::text::ChoiceFormat::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::text::ChoiceFormat,"java/text/ChoiceFormat")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,0,"<init>","([D[java.lang.String)V")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,2,"applyPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,3,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,4,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,5,"format","(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,6,"format","(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,7,"getFormats","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,8,"getLimits","()[D")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,9,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,10,"nextDouble","(D)D")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,11,"nextDouble","(DZ)D")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,12,"parse","(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,13,"previousDouble","(D)D")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,14,"setChoices","([D[java.lang.String)V")
J2CPP_DEFINE_METHOD(java::text::ChoiceFormat,15,"toPattern","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_CHOICEFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
