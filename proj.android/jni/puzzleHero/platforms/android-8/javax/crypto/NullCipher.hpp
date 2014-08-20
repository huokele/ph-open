/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.NullCipher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_NULLCIPHER_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_NULLCIPHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace crypto { class Cipher; } } }


#include <java/lang/Object.hpp>
#include <javax/crypto/Cipher.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class NullCipher;
	class NullCipher
		: public object<NullCipher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit NullCipher(jobject jobj)
		: object<NullCipher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::crypto::Cipher>() const;


		NullCipher();
	}; //class NullCipher

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_NULLCIPHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_NULLCIPHER_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_NULLCIPHER_HPP_IMPL

namespace j2cpp {



javax::crypto::NullCipher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::NullCipher::operator local_ref<javax::crypto::Cipher>() const
{
	return local_ref<javax::crypto::Cipher>(get_jobject());
}


javax::crypto::NullCipher::NullCipher()
: object<javax::crypto::NullCipher>(
	call_new_object<
		javax::crypto::NullCipher::J2CPP_CLASS_NAME,
		javax::crypto::NullCipher::J2CPP_METHOD_NAME(0),
		javax::crypto::NullCipher::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(javax::crypto::NullCipher,"javax/crypto/NullCipher")
J2CPP_DEFINE_METHOD(javax::crypto::NullCipher,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_NULLCIPHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
