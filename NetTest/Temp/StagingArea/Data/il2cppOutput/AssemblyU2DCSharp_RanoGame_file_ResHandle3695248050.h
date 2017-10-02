#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RanoGame.file.Resource
struct Resource_t3778615714;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.file.ResHandle
struct  ResHandle_t3695248050  : public Il2CppObject
{
public:
	// RanoGame.file.Resource RanoGame.file.ResHandle::<resource>k__BackingField
	Resource_t3778615714 * ___U3CresourceU3Ek__BackingField_0;
	// System.Byte[] RanoGame.file.ResHandle::<buffer>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CbufferU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResHandle_t3695248050, ___U3CresourceU3Ek__BackingField_0)); }
	inline Resource_t3778615714 * get_U3CresourceU3Ek__BackingField_0() const { return ___U3CresourceU3Ek__BackingField_0; }
	inline Resource_t3778615714 ** get_address_of_U3CresourceU3Ek__BackingField_0() { return &___U3CresourceU3Ek__BackingField_0; }
	inline void set_U3CresourceU3Ek__BackingField_0(Resource_t3778615714 * value)
	{
		___U3CresourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CresourceU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CbufferU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResHandle_t3695248050, ___U3CbufferU3Ek__BackingField_1)); }
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
