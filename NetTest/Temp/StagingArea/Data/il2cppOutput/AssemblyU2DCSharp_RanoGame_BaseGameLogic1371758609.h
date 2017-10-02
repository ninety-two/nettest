#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<RanoGame.IGameView>
struct List_1_t2260217734;
// RanoGame.process.ProcessManager
struct ProcessManager_t3484849990;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.BaseGameLogic
struct  BaseGameLogic_t1371758609  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<RanoGame.IGameView> RanoGame.BaseGameLogic::m_GameViews
	List_1_t2260217734 * ___m_GameViews_0;
	// RanoGame.process.ProcessManager RanoGame.BaseGameLogic::m_ProcessManager
	ProcessManager_t3484849990 * ___m_ProcessManager_1;
	// System.UInt32 RanoGame.BaseGameLogic::m_LastActorId
	uint32_t ___m_LastActorId_2;
	// System.UInt32 RanoGame.BaseGameLogic::lastViewId
	uint32_t ___lastViewId_3;

public:
	inline static int32_t get_offset_of_m_GameViews_0() { return static_cast<int32_t>(offsetof(BaseGameLogic_t1371758609, ___m_GameViews_0)); }
	inline List_1_t2260217734 * get_m_GameViews_0() const { return ___m_GameViews_0; }
	inline List_1_t2260217734 ** get_address_of_m_GameViews_0() { return &___m_GameViews_0; }
	inline void set_m_GameViews_0(List_1_t2260217734 * value)
	{
		___m_GameViews_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameViews_0, value);
	}

	inline static int32_t get_offset_of_m_ProcessManager_1() { return static_cast<int32_t>(offsetof(BaseGameLogic_t1371758609, ___m_ProcessManager_1)); }
	inline ProcessManager_t3484849990 * get_m_ProcessManager_1() const { return ___m_ProcessManager_1; }
	inline ProcessManager_t3484849990 ** get_address_of_m_ProcessManager_1() { return &___m_ProcessManager_1; }
	inline void set_m_ProcessManager_1(ProcessManager_t3484849990 * value)
	{
		___m_ProcessManager_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ProcessManager_1, value);
	}

	inline static int32_t get_offset_of_m_LastActorId_2() { return static_cast<int32_t>(offsetof(BaseGameLogic_t1371758609, ___m_LastActorId_2)); }
	inline uint32_t get_m_LastActorId_2() const { return ___m_LastActorId_2; }
	inline uint32_t* get_address_of_m_LastActorId_2() { return &___m_LastActorId_2; }
	inline void set_m_LastActorId_2(uint32_t value)
	{
		___m_LastActorId_2 = value;
	}

	inline static int32_t get_offset_of_lastViewId_3() { return static_cast<int32_t>(offsetof(BaseGameLogic_t1371758609, ___lastViewId_3)); }
	inline uint32_t get_lastViewId_3() const { return ___lastViewId_3; }
	inline uint32_t* get_address_of_lastViewId_3() { return &___lastViewId_3; }
	inline void set_lastViewId_3(uint32_t value)
	{
		___lastViewId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
