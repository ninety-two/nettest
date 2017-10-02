#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RanoGame.events.EventManager
struct EventManager_t1486817501;
// System.Threading.Thread
struct Thread_t241561612;
// RanoGame.events.RealtimeEventListener
struct RealtimeEventListener_t4103198251;
// RanoGame.IO.ResCache
struct ResCache_t3718786578;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.IO.LoadManager
struct  LoadManager_t2517917975  : public Il2CppObject
{
public:
	// RanoGame.events.EventManager RanoGame.IO.LoadManager::m_EventManager
	EventManager_t1486817501 * ___m_EventManager_0;
	// System.Threading.Thread RanoGame.IO.LoadManager::m_Thread
	Thread_t241561612 * ___m_Thread_1;
	// System.Boolean RanoGame.IO.LoadManager::m_bQuit
	bool ___m_bQuit_2;
	// RanoGame.events.RealtimeEventListener RanoGame.IO.LoadManager::eventListener
	RealtimeEventListener_t4103198251 * ___eventListener_3;
	// RanoGame.IO.ResCache RanoGame.IO.LoadManager::m_ResCache
	ResCache_t3718786578 * ___m_ResCache_4;

public:
	inline static int32_t get_offset_of_m_EventManager_0() { return static_cast<int32_t>(offsetof(LoadManager_t2517917975, ___m_EventManager_0)); }
	inline EventManager_t1486817501 * get_m_EventManager_0() const { return ___m_EventManager_0; }
	inline EventManager_t1486817501 ** get_address_of_m_EventManager_0() { return &___m_EventManager_0; }
	inline void set_m_EventManager_0(EventManager_t1486817501 * value)
	{
		___m_EventManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventManager_0, value);
	}

	inline static int32_t get_offset_of_m_Thread_1() { return static_cast<int32_t>(offsetof(LoadManager_t2517917975, ___m_Thread_1)); }
	inline Thread_t241561612 * get_m_Thread_1() const { return ___m_Thread_1; }
	inline Thread_t241561612 ** get_address_of_m_Thread_1() { return &___m_Thread_1; }
	inline void set_m_Thread_1(Thread_t241561612 * value)
	{
		___m_Thread_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Thread_1, value);
	}

	inline static int32_t get_offset_of_m_bQuit_2() { return static_cast<int32_t>(offsetof(LoadManager_t2517917975, ___m_bQuit_2)); }
	inline bool get_m_bQuit_2() const { return ___m_bQuit_2; }
	inline bool* get_address_of_m_bQuit_2() { return &___m_bQuit_2; }
	inline void set_m_bQuit_2(bool value)
	{
		___m_bQuit_2 = value;
	}

	inline static int32_t get_offset_of_eventListener_3() { return static_cast<int32_t>(offsetof(LoadManager_t2517917975, ___eventListener_3)); }
	inline RealtimeEventListener_t4103198251 * get_eventListener_3() const { return ___eventListener_3; }
	inline RealtimeEventListener_t4103198251 ** get_address_of_eventListener_3() { return &___eventListener_3; }
	inline void set_eventListener_3(RealtimeEventListener_t4103198251 * value)
	{
		___eventListener_3 = value;
		Il2CppCodeGenWriteBarrier(&___eventListener_3, value);
	}

	inline static int32_t get_offset_of_m_ResCache_4() { return static_cast<int32_t>(offsetof(LoadManager_t2517917975, ___m_ResCache_4)); }
	inline ResCache_t3718786578 * get_m_ResCache_4() const { return ___m_ResCache_4; }
	inline ResCache_t3718786578 ** get_address_of_m_ResCache_4() { return &___m_ResCache_4; }
	inline void set_m_ResCache_4(ResCache_t3718786578 * value)
	{
		___m_ResCache_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ResCache_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
