#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGame_process_Process3557407437.h"
#include "AssemblyU2DCSharp_RanoGame_process_WaitProcess_Tim1651012013.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.process.WaitProcess
struct  WaitProcess_t2472866890  : public Process_t3557407437
{
public:
	// RanoGame.process.WaitProcess/TimeUnit RanoGame.process.WaitProcess::timeUnit
	int32_t ___timeUnit_9;
	// System.Single RanoGame.process.WaitProcess::m_Start
	float ___m_Start_10;
	// System.Single RanoGame.process.WaitProcess::m_Stop
	float ___m_Stop_11;

public:
	inline static int32_t get_offset_of_timeUnit_9() { return static_cast<int32_t>(offsetof(WaitProcess_t2472866890, ___timeUnit_9)); }
	inline int32_t get_timeUnit_9() const { return ___timeUnit_9; }
	inline int32_t* get_address_of_timeUnit_9() { return &___timeUnit_9; }
	inline void set_timeUnit_9(int32_t value)
	{
		___timeUnit_9 = value;
	}

	inline static int32_t get_offset_of_m_Start_10() { return static_cast<int32_t>(offsetof(WaitProcess_t2472866890, ___m_Start_10)); }
	inline float get_m_Start_10() const { return ___m_Start_10; }
	inline float* get_address_of_m_Start_10() { return &___m_Start_10; }
	inline void set_m_Start_10(float value)
	{
		___m_Start_10 = value;
	}

	inline static int32_t get_offset_of_m_Stop_11() { return static_cast<int32_t>(offsetof(WaitProcess_t2472866890, ___m_Stop_11)); }
	inline float get_m_Stop_11() const { return ___m_Stop_11; }
	inline float* get_address_of_m_Stop_11() { return &___m_Stop_11; }
	inline void set_m_Stop_11(float value)
	{
		___m_Stop_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
