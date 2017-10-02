#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGame_process_Process3557407437.h"

// System.Threading.Thread
struct Thread_t241561612;
// System.Threading.ThreadStart
struct ThreadStart_t3437517264;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.process.RealTimeProcess
struct  RealTimeProcess_t967514942  : public Process_t3557407437
{
public:
	// System.Threading.Thread RanoGame.process.RealTimeProcess::<thread>k__BackingField
	Thread_t241561612 * ___U3CthreadU3Ek__BackingField_9;
	// System.Threading.ThreadStart RanoGame.process.RealTimeProcess::<action>k__BackingField
	ThreadStart_t3437517264 * ___U3CactionU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CthreadU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RealTimeProcess_t967514942, ___U3CthreadU3Ek__BackingField_9)); }
	inline Thread_t241561612 * get_U3CthreadU3Ek__BackingField_9() const { return ___U3CthreadU3Ek__BackingField_9; }
	inline Thread_t241561612 ** get_address_of_U3CthreadU3Ek__BackingField_9() { return &___U3CthreadU3Ek__BackingField_9; }
	inline void set_U3CthreadU3Ek__BackingField_9(Thread_t241561612 * value)
	{
		___U3CthreadU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CthreadU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CactionU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RealTimeProcess_t967514942, ___U3CactionU3Ek__BackingField_10)); }
	inline ThreadStart_t3437517264 * get_U3CactionU3Ek__BackingField_10() const { return ___U3CactionU3Ek__BackingField_10; }
	inline ThreadStart_t3437517264 ** get_address_of_U3CactionU3Ek__BackingField_10() { return &___U3CactionU3Ek__BackingField_10; }
	inline void set_U3CactionU3Ek__BackingField_10(ThreadStart_t3437517264 * value)
	{
		___U3CactionU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CactionU3Ek__BackingField_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
