#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<System.Object>
struct Action_1_t2491248677;
// RanoGame.file.ResourceLoadManager
struct ResourceLoadManager_t1818564931;
// RanoGame.file.Resource
struct Resource_t3778615714;
// RanoGame.file.ResHandle
struct ResHandle_t3695248050;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.file.ResourceLoadManager/CachedLoaderBase`1<System.Object>
struct  CachedLoaderBase_1_t2753080485  : public Il2CppObject
{
public:
	// System.Action`1<TEgo> RanoGame.file.ResourceLoadManager/CachedLoaderBase`1::OnComplete
	Action_1_t2491248677 * ___OnComplete_0;
	// System.Action`1<TEgo> RanoGame.file.ResourceLoadManager/CachedLoaderBase`1::OnError
	Action_1_t2491248677 * ___OnError_1;
	// RanoGame.file.ResourceLoadManager RanoGame.file.ResourceLoadManager/CachedLoaderBase`1::m_Manager
	ResourceLoadManager_t1818564931 * ___m_Manager_2;
	// RanoGame.file.Resource RanoGame.file.ResourceLoadManager/CachedLoaderBase`1::<resource>k__BackingField
	Resource_t3778615714 * ___U3CresourceU3Ek__BackingField_3;
	// RanoGame.file.ResHandle RanoGame.file.ResourceLoadManager/CachedLoaderBase`1::<handle>k__BackingField
	ResHandle_t3695248050 * ___U3ChandleU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_OnComplete_0() { return static_cast<int32_t>(offsetof(CachedLoaderBase_1_t2753080485, ___OnComplete_0)); }
	inline Action_1_t2491248677 * get_OnComplete_0() const { return ___OnComplete_0; }
	inline Action_1_t2491248677 ** get_address_of_OnComplete_0() { return &___OnComplete_0; }
	inline void set_OnComplete_0(Action_1_t2491248677 * value)
	{
		___OnComplete_0 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_0, value);
	}

	inline static int32_t get_offset_of_OnError_1() { return static_cast<int32_t>(offsetof(CachedLoaderBase_1_t2753080485, ___OnError_1)); }
	inline Action_1_t2491248677 * get_OnError_1() const { return ___OnError_1; }
	inline Action_1_t2491248677 ** get_address_of_OnError_1() { return &___OnError_1; }
	inline void set_OnError_1(Action_1_t2491248677 * value)
	{
		___OnError_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnError_1, value);
	}

	inline static int32_t get_offset_of_m_Manager_2() { return static_cast<int32_t>(offsetof(CachedLoaderBase_1_t2753080485, ___m_Manager_2)); }
	inline ResourceLoadManager_t1818564931 * get_m_Manager_2() const { return ___m_Manager_2; }
	inline ResourceLoadManager_t1818564931 ** get_address_of_m_Manager_2() { return &___m_Manager_2; }
	inline void set_m_Manager_2(ResourceLoadManager_t1818564931 * value)
	{
		___m_Manager_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Manager_2, value);
	}

	inline static int32_t get_offset_of_U3CresourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CachedLoaderBase_1_t2753080485, ___U3CresourceU3Ek__BackingField_3)); }
	inline Resource_t3778615714 * get_U3CresourceU3Ek__BackingField_3() const { return ___U3CresourceU3Ek__BackingField_3; }
	inline Resource_t3778615714 ** get_address_of_U3CresourceU3Ek__BackingField_3() { return &___U3CresourceU3Ek__BackingField_3; }
	inline void set_U3CresourceU3Ek__BackingField_3(Resource_t3778615714 * value)
	{
		___U3CresourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CresourceU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CachedLoaderBase_1_t2753080485, ___U3ChandleU3Ek__BackingField_4)); }
	inline ResHandle_t3695248050 * get_U3ChandleU3Ek__BackingField_4() const { return ___U3ChandleU3Ek__BackingField_4; }
	inline ResHandle_t3695248050 ** get_address_of_U3ChandleU3Ek__BackingField_4() { return &___U3ChandleU3Ek__BackingField_4; }
	inline void set_U3ChandleU3Ek__BackingField_4(ResHandle_t3695248050 * value)
	{
		___U3ChandleU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChandleU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
