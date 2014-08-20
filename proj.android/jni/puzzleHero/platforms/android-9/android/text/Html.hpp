/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.Html
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_HTML_HPP_DECL
#define J2CPP_ANDROID_TEXT_HTML_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { namespace Html_ { class TagHandler; } } } }
namespace j2cpp { namespace android { namespace text { class Spanned; } } }
namespace j2cpp { namespace android { namespace text { namespace Html_ { class ImageGetter; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }


#include <android/graphics/drawable/Drawable.hpp>
#include <android/text/Editable.hpp>
#include <android/text/Html.hpp>
#include <android/text/Spanned.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/xml/sax/XMLReader.hpp>


namespace j2cpp {

namespace android { namespace text {

	class Html;
	namespace Html_ {

		class TagHandler;
		class TagHandler
			: public object<TagHandler>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit TagHandler(jobject jobj)
			: object<TagHandler>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void handleTag(jboolean, local_ref< java::lang::String >  const&, local_ref< android::text::Editable >  const&, local_ref< org::xml::sax::XMLReader >  const&);
		}; //class TagHandler

		class ImageGetter;
		class ImageGetter
			: public object<ImageGetter>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ImageGetter(jobject jobj)
			: object<ImageGetter>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< android::graphics::drawable::Drawable > getDrawable(local_ref< java::lang::String >  const&);
		}; //class ImageGetter

	} //namespace Html_

	class Html
		: public object<Html>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		typedef Html_::TagHandler TagHandler;
		typedef Html_::ImageGetter ImageGetter;

		explicit Html(jobject jobj)
		: object<Html>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< android::text::Spanned > fromHtml(local_ref< java::lang::String >  const&);
		static local_ref< android::text::Spanned > fromHtml(local_ref< java::lang::String >  const&, local_ref< android::text::Html_::ImageGetter >  const&, local_ref< android::text::Html_::TagHandler >  const&);
		static local_ref< java::lang::String > toHtml(local_ref< android::text::Spanned >  const&);
	}; //class Html

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_HTML_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_HTML_HPP_IMPL
#define J2CPP_ANDROID_TEXT_HTML_HPP_IMPL

namespace j2cpp {




android::text::Html_::TagHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::text::Html_::TagHandler::handleTag(jboolean a0, local_ref< java::lang::String > const &a1, local_ref< android::text::Editable > const &a2, local_ref< org::xml::sax::XMLReader > const &a3)
{
	return call_method<
		android::text::Html_::TagHandler::J2CPP_CLASS_NAME,
		android::text::Html_::TagHandler::J2CPP_METHOD_NAME(0),
		android::text::Html_::TagHandler::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(android::text::Html_::TagHandler,"android/text/Html$TagHandler")
J2CPP_DEFINE_METHOD(android::text::Html_::TagHandler,0,"handleTag","(ZLjava/lang/String;Landroid/text/Editable;Lorg/xml/sax/XMLReader;)V")


android::text::Html_::ImageGetter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::text::Html_::ImageGetter::getDrawable(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::text::Html_::ImageGetter::J2CPP_CLASS_NAME,
		android::text::Html_::ImageGetter::J2CPP_METHOD_NAME(0),
		android::text::Html_::ImageGetter::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::Html_::ImageGetter,"android/text/Html$ImageGetter")
J2CPP_DEFINE_METHOD(android::text::Html_::ImageGetter,0,"getDrawable","(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;")



android::text::Html::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< android::text::Spanned > android::text::Html::fromHtml(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::text::Html::J2CPP_CLASS_NAME,
		android::text::Html::J2CPP_METHOD_NAME(1),
		android::text::Html::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::Spanned >
	>(a0);
}

local_ref< android::text::Spanned > android::text::Html::fromHtml(local_ref< java::lang::String > const &a0, local_ref< android::text::Html_::ImageGetter > const &a1, local_ref< android::text::Html_::TagHandler > const &a2)
{
	return call_static_method<
		android::text::Html::J2CPP_CLASS_NAME,
		android::text::Html::J2CPP_METHOD_NAME(2),
		android::text::Html::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::text::Spanned >
	>(a0, a1, a2);
}

local_ref< java::lang::String > android::text::Html::toHtml(local_ref< android::text::Spanned > const &a0)
{
	return call_static_method<
		android::text::Html::J2CPP_CLASS_NAME,
		android::text::Html::J2CPP_METHOD_NAME(3),
		android::text::Html::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(a0);
}


J2CPP_DEFINE_CLASS(android::text::Html,"android/text/Html")
J2CPP_DEFINE_METHOD(android::text::Html,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::Html,1,"fromHtml","(Ljava/lang/String;)Landroid/text/Spanned;")
J2CPP_DEFINE_METHOD(android::text::Html,2,"fromHtml","(Ljava/lang/String;Landroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;")
J2CPP_DEFINE_METHOD(android::text::Html,3,"toHtml","(Landroid/text/Spanned;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_HTML_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
