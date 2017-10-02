#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.LinkedList`1<RanoGame.IO.ResCache/ResHandle>
struct LinkedList_1_t1432228886;
// RanoGame.IO.ResCache/Resources
struct Resources_t1821881390;
// RanoGame.IO.IResourceFile
struct IResourceFile_t2101357987;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.IO.ResCache
struct  ResCache_t3718786578  : public Il2CppObject
{
public:
	// System.Collections.Generic.LinkedList`1<RanoGame.IO.ResCache/ResHandle> RanoGame.IO.ResCache::m_LRU
	LinkedList_1_t1432228886 * ___m_LRU_0;
	// RanoGame.IO.ResCache/Resources RanoGame.IO.ResCache::m_Resources
	Resources_t1821881390 * ___m_Resources_1;
	// RanoGame.IO.IResourceFile RanoGame.IO.ResCache::m_File
	Il2CppObject * ___m_File_2;
	// System.UInt32 RanoGame.IO.ResCache::m_nCacheSize
	uint32_t ___m_nCacheSize_3;
	// System.UInt32 RanoGame.IO.ResCache::m_nAllocated
	uint32_t ___m_nAllocated_4;

public:
	inline static int32_t get_offset_of_m_LRU_0() { return static_cast<int32_t>(offsetof(ResCache_t3718786578, ___m_LRU_0)); }
	inline LinkedList_1_t1432228886 * get_m_LRU_0() const { return ___m_LRU_0; }
	inline LinkedList_1_t1432228886 ** get_address_of_m_LRU_0() { return &___m_LRU_0; }
	inline void set_m_LRU_0(LinkedList_1_t1432228886 * value)
	{
		___m_LRU_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_LRU_0, value);
	}

	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(ResCache_t3718786578, ___m_Resources_1)); }
	inline Resources_t1821881390 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline Resources_t1821881390 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(Resources_t1821881390 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Resources_1, value);
	}

	inline static int32_t get_offset_of_m_File_2() { return static_cast<int32_t>(offsetof(ResCache_t3718786578, ___m_File_2)); }
	inline Il2CppObject * get_m_File_2() const { return ___m_File_2; }
	inline Il2CppObject ** get_address_of_m_File_2() { return &___m_File_2; }
	inline void set_m_File_2(Il2CppObject * value)
	{
		___m_File_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_File_2, value);
	}

	inline static int32_t get_offset_of_m_nCacheSize_3() { return static_cast<int32_t>(offsetof(ResCache_t3718786578, ___m_nCacheSize_3)); }
	inline uint32_t get_m_nCacheSize_3() const { return ___m_nCacheSize_3; }
	inline uint32_t* get_address_of_m_nCacheSize_3() { return &___m_nCacheSize_3; }
	inline void set_m_nCacheSize_3(uint32_t value)
	{
		___m_nCacheSize_3 = value;
	}

	inline static int32_t get_offset_of_m_nAllocated_4() { return static_cast<int32_t>(offsetof(ResCache_t3718786578, ___m_nAllocated_4)); }
	inline uint32_t get_m_nAllocated_4() const { return ___m_nAllocated_4; }
	inline uint32_t* get_address_of_m_nAllocated_4() { return &___m_nAllocated_4; }
	inline void set_m_nAllocated_4(uint32_t value)
	{
		___m_nAllocated_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
