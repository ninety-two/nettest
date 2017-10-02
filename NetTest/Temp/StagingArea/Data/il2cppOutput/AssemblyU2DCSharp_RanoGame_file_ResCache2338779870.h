#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// RanoGame.file.IResourceFile
struct IResourceFile_t1893664197;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.file.ResCache
struct  ResCache_t2338779870  : public Il2CppObject
{
public:
	// System.Object RanoGame.file.ResCache::lockKey
	Il2CppObject * ___lockKey_0;
	// RanoGame.file.IResourceFile RanoGame.file.ResCache::m_File
	Il2CppObject * ___m_File_1;

public:
	inline static int32_t get_offset_of_lockKey_0() { return static_cast<int32_t>(offsetof(ResCache_t2338779870, ___lockKey_0)); }
	inline Il2CppObject * get_lockKey_0() const { return ___lockKey_0; }
	inline Il2CppObject ** get_address_of_lockKey_0() { return &___lockKey_0; }
	inline void set_lockKey_0(Il2CppObject * value)
	{
		___lockKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___lockKey_0, value);
	}

	inline static int32_t get_offset_of_m_File_1() { return static_cast<int32_t>(offsetof(ResCache_t2338779870, ___m_File_1)); }
	inline Il2CppObject * get_m_File_1() const { return ___m_File_1; }
	inline Il2CppObject ** get_address_of_m_File_1() { return &___m_File_1; }
	inline void set_m_File_1(Il2CppObject * value)
	{
		___m_File_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_File_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
