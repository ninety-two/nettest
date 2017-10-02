#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.IO.ResCache/ResHandle
struct  ResHandle_t1127520657  : public Il2CppObject
{
public:
	// System.String RanoGame.IO.ResCache/ResHandle::<filePath>k__BackingField
	String_t* ___U3CfilePathU3Ek__BackingField_0;
	// System.Byte[] RanoGame.IO.ResCache/ResHandle::<buffer>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CbufferU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CfilePathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResHandle_t1127520657, ___U3CfilePathU3Ek__BackingField_0)); }
	inline String_t* get_U3CfilePathU3Ek__BackingField_0() const { return ___U3CfilePathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CfilePathU3Ek__BackingField_0() { return &___U3CfilePathU3Ek__BackingField_0; }
	inline void set_U3CfilePathU3Ek__BackingField_0(String_t* value)
	{
		___U3CfilePathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CfilePathU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CbufferU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResHandle_t1127520657, ___U3CbufferU3Ek__BackingField_1)); }
	inline ByteU5BU5D_t3397334013* get_U3CbufferU3Ek__BackingField_1() const { return ___U3CbufferU3Ek__BackingField_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CbufferU3Ek__BackingField_1() { return &___U3CbufferU3Ek__BackingField_1; }
	inline void set_U3CbufferU3Ek__BackingField_1(ByteU5BU5D_t3397334013* value)
	{
		___U3CbufferU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbufferU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
