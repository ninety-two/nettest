#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGameUnity_SequencialEventProc551241905.h"

// Three.Events.GameStartEvent
struct GameStartEvent_t1686493032;
// System.Func`2<Three.Events.GameStartEvent,System.Collections.IEnumerator>
struct Func_2_t4100585670;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGameUnity.SequencialEventProcess/EventQueueItem`1<Three.Events.GameStartEvent>
struct  EventQueueItem_1_t2888411487  : public EventQueueItem_t551241905
{
public:
	// T RanoGameUnity.SequencialEventProcess/EventQueueItem`1::data
	GameStartEvent_t1686493032 * ___data_0;
	// System.Func`2<T,System.Collections.IEnumerator> RanoGameUnity.SequencialEventProcess/EventQueueItem`1::handler
	Func_2_t4100585670 * ___handler_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(EventQueueItem_1_t2888411487, ___data_0)); }
	inline GameStartEvent_t1686493032 * get_data_0() const { return ___data_0; }
	inline GameStartEvent_t1686493032 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(GameStartEvent_t1686493032 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_handler_1() { return static_cast<int32_t>(offsetof(EventQueueItem_1_t2888411487, ___handler_1)); }
	inline Func_2_t4100585670 * get_handler_1() const { return ___handler_1; }
	inline Func_2_t4100585670 ** get_address_of_handler_1() { return &___handler_1; }
	inline void set_handler_1(Func_2_t4100585670 * value)
	{
		___handler_1 = value;
		Il2CppCodeGenWriteBarrier(&___handler_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
