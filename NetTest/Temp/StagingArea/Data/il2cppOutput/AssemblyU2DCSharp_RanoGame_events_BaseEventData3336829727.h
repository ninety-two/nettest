#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RanoGame.events.EventType
struct EventType_t872040378;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.events.BaseEventData
struct  BaseEventData_t3336829727  : public Il2CppObject
{
public:
	// RanoGame.events.EventType RanoGame.events.BaseEventData::<Type>k__BackingField
	EventType_t872040378 * ___U3CTypeU3Ek__BackingField_0;
	// System.Single RanoGame.events.BaseEventData::<TimeStamp>k__BackingField
	float ___U3CTimeStampU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseEventData_t3336829727, ___U3CTypeU3Ek__BackingField_0)); }
	inline EventType_t872040378 * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline EventType_t872040378 ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(EventType_t872040378 * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTypeU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3336829727, ___U3CTimeStampU3Ek__BackingField_1)); }
	inline float get_U3CTimeStampU3Ek__BackingField_1() const { return ___U3CTimeStampU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTimeStampU3Ek__BackingField_1() { return &___U3CTimeStampU3Ek__BackingField_1; }
	inline void set_U3CTimeStampU3Ek__BackingField_1(float value)
	{
		___U3CTimeStampU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
