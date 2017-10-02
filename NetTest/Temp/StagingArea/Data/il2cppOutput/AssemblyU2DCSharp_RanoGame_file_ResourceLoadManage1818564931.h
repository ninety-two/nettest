#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RanoGame.file.ResCache
struct ResCache_t2338779870;
// System.Collections.Generic.LinkedList`1<RanoGame.file.Resource>
struct LinkedList_1_t4083323943;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<RanoGame.file.ResourceLoadManager/ILoaderEx>>
struct Dictionary_2_t3730216171;
// System.Object
struct Il2CppObject;
// System.Threading.Thread
struct Thread_t241561612;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.file.ResourceLoadManager
struct  ResourceLoadManager_t1818564931  : public Il2CppObject
{
public:
	// RanoGame.file.ResCache RanoGame.file.ResourceLoadManager::m_ResCache
	ResCache_t2338779870 * ___m_ResCache_0;
	// System.Boolean RanoGame.file.ResourceLoadManager::m_bQuit
	bool ___m_bQuit_1;
	// System.Collections.Generic.LinkedList`1<RanoGame.file.Resource> RanoGame.file.ResourceLoadManager::m_LoadResList
	LinkedList_1_t4083323943 * ___m_LoadResList_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<RanoGame.file.ResourceLoadManager/ILoaderEx>> RanoGame.file.ResourceLoadManager::m_WaitLoaders
	Dictionary_2_t3730216171 * ___m_WaitLoaders_3;
	// System.Object RanoGame.file.ResourceLoadManager::LockKey
	Il2CppObject * ___LockKey_4;
	// System.Threading.Thread RanoGame.file.ResourceLoadManager::m_Thread
	Thread_t241561612 * ___m_Thread_5;

public:
	inline static int32_t get_offset_of_m_ResCache_0() { return static_cast<int32_t>(offsetof(ResourceLoadManager_t1818564931, ___m_ResCache_0)); }
	inline ResCache_t2338779870 * get_m_ResCache_0() const { return ___m_ResCache_0; }
	inline ResCache_t2338779870 ** get_address_of_m_ResCache_0() { return &___m_ResCache_0; }
	inline void set_m_ResCache_0(ResCache_t2338779870 * value)
	{
		___m_ResCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ResCache_0, value);
	}

	inline static int32_t get_offset_of_m_bQuit_1() { return static_cast<int32_t>(offsetof(ResourceLoadManager_t1818564931, ___m_bQuit_1)); }
	inline bool get_m_bQuit_1() const { return ___m_bQuit_1; }
	inline bool* get_address_of_m_bQuit_1() { return &___m_bQuit_1; }
	inline void set_m_bQuit_1(bool value)
	{
		___m_bQuit_1 = value;
	}

	inline static int32_t get_offset_of_m_LoadResList_2() { return static_cast<int32_t>(offsetof(ResourceLoadManager_t1818564931, ___m_LoadResList_2)); }
	inline LinkedList_1_t4083323943 * get_m_LoadResList_2() const { return ___m_LoadResList_2; }
	inline LinkedList_1_t4083323943 ** get_address_of_m_LoadResList_2() { return &___m_LoadResList_2; }
	inline void set_m_LoadResList_2(LinkedList_1_t4083323943 * value)
	{
		___m_LoadResList_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_LoadResList_2, value);
	}

	inline static int32_t get_offset_of_m_WaitLoaders_3() { return static_cast<int32_t>(offsetof(ResourceLoadManager_t1818564931, ___m_WaitLoaders_3)); }
	inline Dictionary_2_t3730216171 * get_m_WaitLoaders_3() const { return ___m_WaitLoaders_3; }
	inline Dictionary_2_t3730216171 ** get_address_of_m_WaitLoaders_3() { return &___m_WaitLoaders_3; }
	inline void set_m_WaitLoaders_3(Dictionary_2_t3730216171 * value)
	{
		___m_WaitLoaders_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_WaitLoaders_3, value);
	}

	inline static int32_t get_offset_of_LockKey_4() { return static_cast<int32_t>(offsetof(ResourceLoadManager_t1818564931, ___LockKey_4)); }
	inline Il2CppObject * get_LockKey_4() const { return ___LockKey_4; }
	inline Il2CppObject ** get_address_of_LockKey_4() { return &___LockKey_4; }
	inline void set_LockKey_4(Il2CppObject * value)
	{
		___LockKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___LockKey_4, value);
	}

	inline static int32_t get_offset_of_m_Thread_5() { return static_cast<int32_t>(offsetof(ResourceLoadManager_t1818564931, ___m_Thread_5)); }
	inline Thread_t241561612 * get_m_Thread_5() const { return ___m_Thread_5; }
	inline Thread_t241561612 ** get_address_of_m_Thread_5() { return &___m_Thread_5; }
	inline void set_m_Thread_5(Thread_t241561612 * value)
	{
		___m_Thread_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Thread_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
