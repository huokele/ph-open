/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.hardware.SensorManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_SENSORMANAGER_HPP_DECL
#define J2CPP_ANDROID_HARDWARE_SENSORMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace hardware { class Sensor; } } }
namespace j2cpp { namespace android { namespace hardware { class SensorListener; } } }
namespace j2cpp { namespace android { namespace hardware { class SensorEventListener; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <android/hardware/Sensor.hpp>
#include <android/hardware/SensorEventListener.hpp>
#include <android/hardware/SensorListener.hpp>
#include <android/os/Handler.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace hardware {

	class SensorManager;
	class SensorManager
		: public object<SensorManager>
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
		J2CPP_DECLARE_FIELD(39)
		J2CPP_DECLARE_FIELD(40)
		J2CPP_DECLARE_FIELD(41)
		J2CPP_DECLARE_FIELD(42)
		J2CPP_DECLARE_FIELD(43)
		J2CPP_DECLARE_FIELD(44)
		J2CPP_DECLARE_FIELD(45)
		J2CPP_DECLARE_FIELD(46)
		J2CPP_DECLARE_FIELD(47)
		J2CPP_DECLARE_FIELD(48)
		J2CPP_DECLARE_FIELD(49)
		J2CPP_DECLARE_FIELD(50)
		J2CPP_DECLARE_FIELD(51)
		J2CPP_DECLARE_FIELD(52)
		J2CPP_DECLARE_FIELD(53)
		J2CPP_DECLARE_FIELD(54)
		J2CPP_DECLARE_FIELD(55)

		explicit SensorManager(jobject jobj)
		: object<SensorManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getSensors();
		local_ref< java::util::List > getSensorList(jint);
		local_ref< android::hardware::Sensor > getDefaultSensor(jint);
		jboolean registerListener(local_ref< android::hardware::SensorListener >  const&, jint);
		jboolean registerListener(local_ref< android::hardware::SensorListener >  const&, jint, jint);
		void unregisterListener(local_ref< android::hardware::SensorListener >  const&, jint);
		void unregisterListener(local_ref< android::hardware::SensorListener >  const&);
		void unregisterListener(local_ref< android::hardware::SensorEventListener >  const&, local_ref< android::hardware::Sensor >  const&);
		void unregisterListener(local_ref< android::hardware::SensorEventListener >  const&);
		jboolean registerListener(local_ref< android::hardware::SensorEventListener >  const&, local_ref< android::hardware::Sensor >  const&, jint);
		jboolean registerListener(local_ref< android::hardware::SensorEventListener >  const&, local_ref< android::hardware::Sensor >  const&, jint, local_ref< android::os::Handler >  const&);
		static jboolean getRotationMatrix(local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);
		static jfloat getInclination(local_ref< array<jfloat,1> >  const&);
		static jboolean remapCoordinateSystem(local_ref< array<jfloat,1> >  const&, jint, jint, local_ref< array<jfloat,1> >  const&);
		static local_ref< array<jfloat,1> > getOrientation(local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > SENSOR_ORIENTATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > SENSOR_ACCELEROMETER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > SENSOR_TEMPERATURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > SENSOR_MAGNETIC_FIELD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > SENSOR_LIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > SENSOR_PROXIMITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > SENSOR_TRICORDER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > SENSOR_ORIENTATION_RAW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > SENSOR_ALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > SENSOR_MIN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > SENSOR_MAX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > DATA_X;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > DATA_Y;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > DATA_Z;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > RAW_DATA_INDEX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > RAW_DATA_X;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > RAW_DATA_Y;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > RAW_DATA_Z;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jfloat > STANDARD_GRAVITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jfloat > GRAVITY_SUN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jfloat > GRAVITY_MERCURY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jfloat > GRAVITY_VENUS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jfloat > GRAVITY_EARTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jfloat > GRAVITY_MOON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jfloat > GRAVITY_MARS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jfloat > GRAVITY_JUPITER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jfloat > GRAVITY_SATURN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jfloat > GRAVITY_URANUS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jfloat > GRAVITY_NEPTUNE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jfloat > GRAVITY_PLUTO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), jfloat > GRAVITY_DEATH_STAR_I;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), jfloat > GRAVITY_THE_ISLAND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), jfloat > MAGNETIC_FIELD_EARTH_MAX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), jfloat > MAGNETIC_FIELD_EARTH_MIN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), jfloat > LIGHT_SUNLIGHT_MAX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), jfloat > LIGHT_SUNLIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), jfloat > LIGHT_SHADE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), jfloat > LIGHT_OVERCAST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), jfloat > LIGHT_SUNRISE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), jfloat > LIGHT_CLOUDY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(40), J2CPP_FIELD_SIGNATURE(40), jfloat > LIGHT_FULLMOON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(41), J2CPP_FIELD_SIGNATURE(41), jfloat > LIGHT_NO_MOON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(42), J2CPP_FIELD_SIGNATURE(42), jint > SENSOR_DELAY_FASTEST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(43), J2CPP_FIELD_SIGNATURE(43), jint > SENSOR_DELAY_GAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(44), J2CPP_FIELD_SIGNATURE(44), jint > SENSOR_DELAY_UI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(45), J2CPP_FIELD_SIGNATURE(45), jint > SENSOR_DELAY_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(46), J2CPP_FIELD_SIGNATURE(46), jint > SENSOR_STATUS_UNRELIABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(47), J2CPP_FIELD_SIGNATURE(47), jint > SENSOR_STATUS_ACCURACY_LOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(48), J2CPP_FIELD_SIGNATURE(48), jint > SENSOR_STATUS_ACCURACY_MEDIUM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(49), J2CPP_FIELD_SIGNATURE(49), jint > SENSOR_STATUS_ACCURACY_HIGH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(50), J2CPP_FIELD_SIGNATURE(50), jint > AXIS_X;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(51), J2CPP_FIELD_SIGNATURE(51), jint > AXIS_Y;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(52), J2CPP_FIELD_SIGNATURE(52), jint > AXIS_Z;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(53), J2CPP_FIELD_SIGNATURE(53), jint > AXIS_MINUS_X;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(54), J2CPP_FIELD_SIGNATURE(54), jint > AXIS_MINUS_Y;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(55), J2CPP_FIELD_SIGNATURE(55), jint > AXIS_MINUS_Z;
	}; //class SensorManager

} //namespace hardware
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_SENSORMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_SENSORMANAGER_HPP_IMPL
#define J2CPP_ANDROID_HARDWARE_SENSORMANAGER_HPP_IMPL

namespace j2cpp {



android::hardware::SensorManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::hardware::SensorManager::getSensors()
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(1),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::util::List > android::hardware::SensorManager::getSensorList(jint a0)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(2),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::List >
	>(get_jobject(), a0);
}

local_ref< android::hardware::Sensor > android::hardware::SensorManager::getDefaultSensor(jint a0)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(3),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::hardware::Sensor >
	>(get_jobject(), a0);
}

jboolean android::hardware::SensorManager::registerListener(local_ref< android::hardware::SensorListener > const &a0, jint a1)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(4),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::hardware::SensorManager::registerListener(local_ref< android::hardware::SensorListener > const &a0, jint a1, jint a2)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(5),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

void android::hardware::SensorManager::unregisterListener(local_ref< android::hardware::SensorListener > const &a0, jint a1)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(6),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}

void android::hardware::SensorManager::unregisterListener(local_ref< android::hardware::SensorListener > const &a0)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(7),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::hardware::SensorManager::unregisterListener(local_ref< android::hardware::SensorEventListener > const &a0, local_ref< android::hardware::Sensor > const &a1)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(8),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void android::hardware::SensorManager::unregisterListener(local_ref< android::hardware::SensorEventListener > const &a0)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(9),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

jboolean android::hardware::SensorManager::registerListener(local_ref< android::hardware::SensorEventListener > const &a0, local_ref< android::hardware::Sensor > const &a1, jint a2)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(10),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::hardware::SensorManager::registerListener(local_ref< android::hardware::SensorEventListener > const &a0, local_ref< android::hardware::Sensor > const &a1, jint a2, local_ref< android::os::Handler > const &a3)
{
	return call_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(11),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean android::hardware::SensorManager::getRotationMatrix(local_ref< array<jfloat,1> > const &a0, local_ref< array<jfloat,1> > const &a1, local_ref< array<jfloat,1> > const &a2, local_ref< array<jfloat,1> > const &a3)
{
	return call_static_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(12),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(a0, a1, a2, a3);
}

jfloat android::hardware::SensorManager::getInclination(local_ref< array<jfloat,1> > const &a0)
{
	return call_static_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(13),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(13), 
		jfloat
	>(a0);
}

jboolean android::hardware::SensorManager::remapCoordinateSystem(local_ref< array<jfloat,1> > const &a0, jint a1, jint a2, local_ref< array<jfloat,1> > const &a3)
{
	return call_static_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(14),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(a0, a1, a2, a3);
}

local_ref< array<jfloat,1> > android::hardware::SensorManager::getOrientation(local_ref< array<jfloat,1> > const &a0, local_ref< array<jfloat,1> > const &a1)
{
	return call_static_method<
		android::hardware::SensorManager::J2CPP_CLASS_NAME,
		android::hardware::SensorManager::J2CPP_METHOD_NAME(15),
		android::hardware::SensorManager::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array<jfloat,1> >
	>(a0, a1);
}


static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(0),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::hardware::SensorManager::SENSOR_ORIENTATION;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(1),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::hardware::SensorManager::SENSOR_ACCELEROMETER;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(2),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::hardware::SensorManager::SENSOR_TEMPERATURE;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(3),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::hardware::SensorManager::SENSOR_MAGNETIC_FIELD;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(4),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::hardware::SensorManager::SENSOR_LIGHT;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(5),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::hardware::SensorManager::SENSOR_PROXIMITY;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(6),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::hardware::SensorManager::SENSOR_TRICORDER;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(7),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::hardware::SensorManager::SENSOR_ORIENTATION_RAW;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(8),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::hardware::SensorManager::SENSOR_ALL;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(9),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::hardware::SensorManager::SENSOR_MIN;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(10),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::hardware::SensorManager::SENSOR_MAX;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(11),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::hardware::SensorManager::DATA_X;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(12),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::hardware::SensorManager::DATA_Y;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(13),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::hardware::SensorManager::DATA_Z;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(14),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::hardware::SensorManager::RAW_DATA_INDEX;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(15),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::hardware::SensorManager::RAW_DATA_X;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(16),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::hardware::SensorManager::RAW_DATA_Y;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(17),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::hardware::SensorManager::RAW_DATA_Z;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(18),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(18),
	jfloat
> android::hardware::SensorManager::STANDARD_GRAVITY;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(19),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(19),
	jfloat
> android::hardware::SensorManager::GRAVITY_SUN;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(20),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(20),
	jfloat
> android::hardware::SensorManager::GRAVITY_MERCURY;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(21),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(21),
	jfloat
> android::hardware::SensorManager::GRAVITY_VENUS;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(22),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(22),
	jfloat
> android::hardware::SensorManager::GRAVITY_EARTH;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(23),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(23),
	jfloat
> android::hardware::SensorManager::GRAVITY_MOON;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(24),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(24),
	jfloat
> android::hardware::SensorManager::GRAVITY_MARS;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(25),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(25),
	jfloat
> android::hardware::SensorManager::GRAVITY_JUPITER;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(26),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(26),
	jfloat
> android::hardware::SensorManager::GRAVITY_SATURN;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(27),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(27),
	jfloat
> android::hardware::SensorManager::GRAVITY_URANUS;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(28),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(28),
	jfloat
> android::hardware::SensorManager::GRAVITY_NEPTUNE;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(29),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(29),
	jfloat
> android::hardware::SensorManager::GRAVITY_PLUTO;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(30),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(30),
	jfloat
> android::hardware::SensorManager::GRAVITY_DEATH_STAR_I;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(31),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(31),
	jfloat
> android::hardware::SensorManager::GRAVITY_THE_ISLAND;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(32),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(32),
	jfloat
> android::hardware::SensorManager::MAGNETIC_FIELD_EARTH_MAX;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(33),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(33),
	jfloat
> android::hardware::SensorManager::MAGNETIC_FIELD_EARTH_MIN;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(34),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(34),
	jfloat
> android::hardware::SensorManager::LIGHT_SUNLIGHT_MAX;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(35),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(35),
	jfloat
> android::hardware::SensorManager::LIGHT_SUNLIGHT;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(36),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(36),
	jfloat
> android::hardware::SensorManager::LIGHT_SHADE;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(37),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(37),
	jfloat
> android::hardware::SensorManager::LIGHT_OVERCAST;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(38),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(38),
	jfloat
> android::hardware::SensorManager::LIGHT_SUNRISE;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(39),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(39),
	jfloat
> android::hardware::SensorManager::LIGHT_CLOUDY;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(40),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(40),
	jfloat
> android::hardware::SensorManager::LIGHT_FULLMOON;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(41),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(41),
	jfloat
> android::hardware::SensorManager::LIGHT_NO_MOON;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(42),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(42),
	jint
> android::hardware::SensorManager::SENSOR_DELAY_FASTEST;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(43),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(43),
	jint
> android::hardware::SensorManager::SENSOR_DELAY_GAME;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(44),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(44),
	jint
> android::hardware::SensorManager::SENSOR_DELAY_UI;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(45),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(45),
	jint
> android::hardware::SensorManager::SENSOR_DELAY_NORMAL;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(46),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(46),
	jint
> android::hardware::SensorManager::SENSOR_STATUS_UNRELIABLE;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(47),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(47),
	jint
> android::hardware::SensorManager::SENSOR_STATUS_ACCURACY_LOW;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(48),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(48),
	jint
> android::hardware::SensorManager::SENSOR_STATUS_ACCURACY_MEDIUM;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(49),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(49),
	jint
> android::hardware::SensorManager::SENSOR_STATUS_ACCURACY_HIGH;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(50),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(50),
	jint
> android::hardware::SensorManager::AXIS_X;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(51),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(51),
	jint
> android::hardware::SensorManager::AXIS_Y;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(52),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(52),
	jint
> android::hardware::SensorManager::AXIS_Z;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(53),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(53),
	jint
> android::hardware::SensorManager::AXIS_MINUS_X;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(54),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(54),
	jint
> android::hardware::SensorManager::AXIS_MINUS_Y;

static_field<
	android::hardware::SensorManager::J2CPP_CLASS_NAME,
	android::hardware::SensorManager::J2CPP_FIELD_NAME(55),
	android::hardware::SensorManager::J2CPP_FIELD_SIGNATURE(55),
	jint
> android::hardware::SensorManager::AXIS_MINUS_Z;


J2CPP_DEFINE_CLASS(android::hardware::SensorManager,"android/hardware/SensorManager")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,1,"getSensors","()I")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,2,"getSensorList","(I)Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,3,"getDefaultSensor","(I)Landroid/hardware/Sensor;")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,4,"registerListener","(Landroid/hardware/SensorListener;I)Z")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,5,"registerListener","(Landroid/hardware/SensorListener;II)Z")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,6,"unregisterListener","(Landroid/hardware/SensorListener;I)V")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,7,"unregisterListener","(Landroid/hardware/SensorListener;)V")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,8,"unregisterListener","(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;)V")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,9,"unregisterListener","(Landroid/hardware/SensorEventListener;)V")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,10,"registerListener","(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,11,"registerListener","(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;ILandroid/os/Handler;)Z")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,12,"getRotationMatrix","([F[F[F[F)Z")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,13,"getInclination","([F)F")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,14,"remapCoordinateSystem","([FII[F)Z")
J2CPP_DEFINE_METHOD(android::hardware::SensorManager,15,"getOrientation","([F[F)[F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,0,"SENSOR_ORIENTATION","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,1,"SENSOR_ACCELEROMETER","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,2,"SENSOR_TEMPERATURE","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,3,"SENSOR_MAGNETIC_FIELD","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,4,"SENSOR_LIGHT","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,5,"SENSOR_PROXIMITY","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,6,"SENSOR_TRICORDER","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,7,"SENSOR_ORIENTATION_RAW","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,8,"SENSOR_ALL","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,9,"SENSOR_MIN","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,10,"SENSOR_MAX","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,11,"DATA_X","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,12,"DATA_Y","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,13,"DATA_Z","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,14,"RAW_DATA_INDEX","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,15,"RAW_DATA_X","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,16,"RAW_DATA_Y","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,17,"RAW_DATA_Z","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,18,"STANDARD_GRAVITY","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,19,"GRAVITY_SUN","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,20,"GRAVITY_MERCURY","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,21,"GRAVITY_VENUS","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,22,"GRAVITY_EARTH","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,23,"GRAVITY_MOON","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,24,"GRAVITY_MARS","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,25,"GRAVITY_JUPITER","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,26,"GRAVITY_SATURN","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,27,"GRAVITY_URANUS","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,28,"GRAVITY_NEPTUNE","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,29,"GRAVITY_PLUTO","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,30,"GRAVITY_DEATH_STAR_I","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,31,"GRAVITY_THE_ISLAND","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,32,"MAGNETIC_FIELD_EARTH_MAX","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,33,"MAGNETIC_FIELD_EARTH_MIN","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,34,"LIGHT_SUNLIGHT_MAX","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,35,"LIGHT_SUNLIGHT","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,36,"LIGHT_SHADE","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,37,"LIGHT_OVERCAST","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,38,"LIGHT_SUNRISE","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,39,"LIGHT_CLOUDY","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,40,"LIGHT_FULLMOON","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,41,"LIGHT_NO_MOON","F")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,42,"SENSOR_DELAY_FASTEST","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,43,"SENSOR_DELAY_GAME","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,44,"SENSOR_DELAY_UI","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,45,"SENSOR_DELAY_NORMAL","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,46,"SENSOR_STATUS_UNRELIABLE","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,47,"SENSOR_STATUS_ACCURACY_LOW","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,48,"SENSOR_STATUS_ACCURACY_MEDIUM","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,49,"SENSOR_STATUS_ACCURACY_HIGH","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,50,"AXIS_X","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,51,"AXIS_Y","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,52,"AXIS_Z","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,53,"AXIS_MINUS_X","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,54,"AXIS_MINUS_Y","I")
J2CPP_DEFINE_FIELD(android::hardware::SensorManager,55,"AXIS_MINUS_Z","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_SENSORMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
