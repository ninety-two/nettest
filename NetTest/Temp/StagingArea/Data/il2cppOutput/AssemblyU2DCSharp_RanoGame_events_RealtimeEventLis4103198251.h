#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RanoGame.events.ConcurrentQueue`1<RanoGame.events.IEventData>
struct ConcurrentQueue_1_t2149213851;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.events.RealtimeEventListener
struct  RealtimeEventListener_t4103198251  : public Il2CppObject
{
public:
	// RanoGame.events.ConcurrentQueue`1<RanoGame.events.IEventData> RanoGame.events.RealtimeEventListener::realtimeEventQueue
	ConcurrentQueue_1_t2149213851 * ___realtimeEventQueue_0;

public:
	inline static int32_t get_offset_of_realtimeEventQueue_0() { return static_cast<int32_t>(offsetof(RealtimeEventListener_t4103198251, ___realtimeEventQueue_0)); }
	inline ConcurrentQueue_1_t2149213851 * get_realtimeEventQueue_0() const { return ___realtimeEventQueue_0; }
	inline ConcurrentQueue_1_t2149213851 ** get_address_of_realtimeEventQueue_0() { return &___realtimeEventQueue_0; }
	inline void set_realtimeEventQueue_0(ConcurrentQueue_1_t2149213851 * value)
	{
		___realtimeEventQueue_0 = value;
		Il2CppCodeGenWriteBarrier(&___realtimeEventQueue_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
