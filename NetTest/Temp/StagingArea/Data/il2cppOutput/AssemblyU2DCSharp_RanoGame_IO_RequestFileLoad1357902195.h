#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGame_events_BaseEventData3336829727.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.IO.RequestFileLoad
struct  RequestFileLoad_t1357902195  : public BaseEventData_t3336829727
{
public:
	// System.String RanoGame.IO.RequestFileLoad::<filePath>k__BackingField
	String_t* ___U3CfilePathU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CfilePathU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RequestFileLoad_t1357902195, ___U3CfilePathU3Ek__BackingField_3)); }
	inline String_t* get_U3CfilePathU3Ek__BackingField_3() const { return ___U3CfilePathU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CfilePathU3Ek__BackingField_3() { return &___U3CfilePathU3Ek__BackingField_3; }
	inline void set_U3CfilePathU3Ek__BackingField_3(String_t* value)
	{
		___U3CfilePathU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CfilePathU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
