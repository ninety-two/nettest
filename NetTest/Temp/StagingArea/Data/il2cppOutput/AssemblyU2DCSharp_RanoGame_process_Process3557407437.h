#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RanoGame_ProcessStateFlags3859706599.h"

// RanoGame.IProcess
struct IProcess_t412969874;
// System.Action`1<RanoGame.IProcess>
struct Action_1_t214769256;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.process.Process
struct  Process_t3557407437  : public Il2CppObject
{
public:
	// System.Int32 RanoGame.process.Process::m_nType
	int32_t ___m_nType_0;
	// System.Boolean RanoGame.process.Process::m_bKill
	bool ___m_bKill_1;
	// System.Boolean RanoGame.process.Process::m_bActive
	bool ___m_bActive_2;
	// System.Boolean RanoGame.process.Process::m_bPaused
	bool ___m_bPaused_3;
	// System.Boolean RanoGame.process.Process::m_bInitialUpdate
	bool ___m_bInitialUpdate_4;
	// RanoGame.IProcess RanoGame.process.Process::m_Next
	Il2CppObject * ___m_Next_5;
	// RanoGame.ProcessStateFlags RanoGame.process.Process::m_ProcessFlags
	int32_t ___m_ProcessFlags_6;
	// System.Action`1<RanoGame.IProcess> RanoGame.process.Process::OnAttached
	Action_1_t214769256 * ___OnAttached_7;
	// System.Action`1<RanoGame.IProcess> RanoGame.process.Process::OnDetached
	Action_1_t214769256 * ___OnDetached_8;

public:
	inline static int32_t get_offset_of_m_nType_0() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___m_nType_0)); }
	inline int32_t get_m_nType_0() const { return ___m_nType_0; }
	inline int32_t* get_address_of_m_nType_0() { return &___m_nType_0; }
	inline void set_m_nType_0(int32_t value)
	{
		___m_nType_0 = value;
	}

	inline static int32_t get_offset_of_m_bKill_1() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___m_bKill_1)); }
	inline bool get_m_bKill_1() const { return ___m_bKill_1; }
	inline bool* get_address_of_m_bKill_1() { return &___m_bKill_1; }
	inline void set_m_bKill_1(bool value)
	{
		___m_bKill_1 = value;
	}

	inline static int32_t get_offset_of_m_bActive_2() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___m_bActive_2)); }
	inline bool get_m_bActive_2() const { return ___m_bActive_2; }
	inline bool* get_address_of_m_bActive_2() { return &___m_bActive_2; }
	inline void set_m_bActive_2(bool value)
	{
		___m_bActive_2 = value;
	}

	inline static int32_t get_offset_of_m_bPaused_3() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___m_bPaused_3)); }
	inline bool get_m_bPaused_3() const { return ___m_bPaused_3; }
	inline bool* get_address_of_m_bPaused_3() { return &___m_bPaused_3; }
	inline void set_m_bPaused_3(bool value)
	{
		___m_bPaused_3 = value;
	}

	inline static int32_t get_offset_of_m_bInitialUpdate_4() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___m_bInitialUpdate_4)); }
	inline bool get_m_bInitialUpdate_4() const { return ___m_bInitialUpdate_4; }
	inline bool* get_address_of_m_bInitialUpdate_4() { return &___m_bInitialUpdate_4; }
	inline void set_m_bInitialUpdate_4(bool value)
	{
		___m_bInitialUpdate_4 = value;
	}

	inline static int32_t get_offset_of_m_Next_5() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___m_Next_5)); }
	inline Il2CppObject * get_m_Next_5() const { return ___m_Next_5; }
	inline Il2CppObject ** get_address_of_m_Next_5() { return &___m_Next_5; }
	inline void set_m_Next_5(Il2CppObject * value)
	{
		___m_Next_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Next_5, value);
	}

	inline static int32_t get_offset_of_m_ProcessFlags_6() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___m_ProcessFlags_6)); }
	inline int32_t get_m_ProcessFlags_6() const { return ___m_ProcessFlags_6; }
	inline int32_t* get_address_of_m_ProcessFlags_6() { return &___m_ProcessFlags_6; }
	inline void set_m_ProcessFlags_6(int32_t value)
	{
		___m_ProcessFlags_6 = value;
	}

	inline static int32_t get_offset_of_OnAttached_7() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___OnAttached_7)); }
	inline Action_1_t214769256 * get_OnAttached_7() const { return ___OnAttached_7; }
	inline Action_1_t214769256 ** get_address_of_OnAttached_7() { return &___OnAttached_7; }
	inline void set_OnAttached_7(Action_1_t214769256 * value)
	{
		___OnAttached_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnAttached_7, value);
	}

	inline static int32_t get_offset_of_OnDetached_8() { return static_cast<int32_t>(offsetof(Process_t3557407437, ___OnDetached_8)); }
	inline Action_1_t214769256 * get_OnDetached_8() const { return ___OnDetached_8; }
	inline Action_1_t214769256 ** get_address_of_OnDetached_8() { return &___OnDetached_8; }
	inline void set_OnDetached_8(Action_1_t214769256 * value)
	{
		___OnDetached_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnDetached_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
