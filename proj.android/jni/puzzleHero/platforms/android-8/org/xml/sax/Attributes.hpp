/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.Attributes
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_ATTRIBUTES_HPP_DECL
#define J2CPP_ORG_XML_SAX_ATTRIBUTES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class Attributes;
	class Attributes
		: public object<Attributes>
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

		explicit Attributes(jobject jobj)
		: object<Attributes>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getLength();
		local_ref< java::lang::String > getURI(jint);
		local_ref< java::lang::String > getLocalName(jint);
		local_ref< java::lang::String > getQName(jint);
		local_ref< java::lang::String > getType(jint);
		local_ref< java::lang::String > getValue(jint);
		jint getIndex(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jint getIndex(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getType(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getType(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getValue(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getValue(local_ref< java::lang::String >  const&);
	}; //class Attributes

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_ATTRIBUTES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_ATTRIBUTES_HPP_IMPL
#define J2CPP_ORG_XML_SAX_ATTRIBUTES_HPP_IMPL

namespace j2cpp {



org::xml::sax::Attributes::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint org::xml::sax::Attributes::getLength()
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(0),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(0), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > org::xml::sax::Attributes::getURI(jint a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(1),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getLocalName(jint a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(2),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getQName(jint a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(3),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getType(jint a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(4),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getValue(jint a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(5),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jint org::xml::sax::Attributes::getIndex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(6),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0, a1);
}

jint org::xml::sax::Attributes::getIndex(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(7),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getType(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(8),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getType(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(9),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(10),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > org::xml::sax::Attributes::getValue(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::Attributes::J2CPP_CLASS_NAME,
		org::xml::sax::Attributes::J2CPP_METHOD_NAME(11),
		org::xml::sax::Attributes::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::xml::sax::Attributes,"org/xml/sax/Attributes")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,0,"getLength","()I")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,1,"getURI","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,2,"getLocalName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,3,"getQName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,4,"getType","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,5,"getValue","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,6,"getIndex","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,7,"getIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,8,"getType","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,9,"getType","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,10,"getValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::Attributes,11,"getValue","(Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_ATTRIBUTES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
