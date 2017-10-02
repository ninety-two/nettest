#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<RanoGame.IProcess>
struct List_1_t4077058302;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.process.ProcessManager
struct  ProcessManager_t3484849990  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<RanoGame.IProcess> RanoGame.process.ProcessManager::m_Processes
	List_1_t4077058302 * ___m_Processes_0;

public:
	inline static int32_t get_offset_of_m_Processes_0() { return static_cast<int32_t>(offsetof(ProcessManager_t3484849990, ___m_Processes_0)); }
	inline List_1_t4077058302 * get_m_Processes_0() const { return ___m_Processes_0; }
	inline List_1_t4077058302 ** get_address_of_m_Processes_0() { return &___m_Processes_0; }
	inline void set_m_Processes_0(List_1_t4077058302 * value)
	{
		___m_Processes_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Processes_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
