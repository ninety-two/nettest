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
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.IO.FileLoad
struct  FileLoad_t1984782256  : public BaseEventData_t3336829727
{
public:
	// System.String RanoGame.IO.FileLoad::<filePath>k__BackingField
	String_t* ___U3CfilePathU3Ek__BackingField_3;
	// System.Byte[] RanoGame.IO.FileLoad::<buffer>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CbufferU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CfilePathU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FileLoad_t1984782256, ___U3CfilePathU3Ek__BackingField_3)); }
	inline String_t* get_U3CfilePathU3Ek__BackingField_3() const { return ___U3CfilePathU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CfilePathU3Ek__BackingField_3() { return &___U3CfilePathU3Ek__BackingField_3; }
	inline void set_U3CfilePathU3Ek__BackingField_3(String_t* value)
	{
		___U3CfilePathU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CfilePathU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CbufferU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FileLoad_t1984782256, ___U3CbufferU3Ek__BackingField_4)); }
	inline ByteU5BU5D_t3397334013* get_U3CbufferU3Ek__BackingField_4() const { return ___U3CbufferU3Ek__BackingField_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CbufferU3Ek__BackingField_4() { return &___U3CbufferU3Ek__BackingField_4; }
	inline void set_U3CbufferU3Ek__BackingField_4(ByteU5BU5D_t3397334013* value)
	{
		___U3CbufferU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbufferU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
