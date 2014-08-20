/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.charset.spi.CharsetProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_HPP_DECL
#define J2CPP_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace charset { class Charset; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace charset { namespace spi {

	class CharsetProvider;
	class CharsetProvider
		: public object<CharsetProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CharsetProvider(jobject jobj)
		: object<CharsetProvider>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::util::Iterator > charsets();
		local_ref< java::nio::charset::Charset > charsetForName(local_ref< java::lang::String >  const&);
	}; //class CharsetProvider

} //namespace spi
} //namespace charset
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_HPP_IMPL
#define J2CPP_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_HPP_IMPL

namespace j2cpp {



java::nio::charset::spi::CharsetProvider::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::util::Iterator > java::nio::charset::spi::CharsetProvider::charsets()
{
	return call_method<
		java::nio::charset::spi::CharsetProvider::J2CPP_CLASS_NAME,
		java::nio::charset::spi::CharsetProvider::J2CPP_METHOD_NAME(1),
		java::nio::charset::spi::CharsetProvider::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::Iterator >
	>(get_jobject());
}

local_ref< java::nio::charset::Charset > java::nio::charset::spi::CharsetProvider::charsetForName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::nio::charset::spi::CharsetProvider::J2CPP_CLASS_NAME,
		java::nio::charset::spi::CharsetProvider::J2CPP_METHOD_NAME(2),
		java::nio::charset::spi::CharsetProvider::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::nio::charset::Charset >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::nio::charset::spi::CharsetProvider,"java/nio/charset/spi/CharsetProvider")
J2CPP_DEFINE_METHOD(java::nio::charset::spi::CharsetProvider,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::charset::spi::CharsetProvider,1,"charsets","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::nio::charset::spi::CharsetProvider,2,"charsetForName","(Ljava/lang/String;)Ljava/nio/charset/Charset;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
