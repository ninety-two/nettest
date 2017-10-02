#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Queue`1<RanoGameUnity.SequencialEventProcess/EventQueueItem>
struct Queue_1_t370898740;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGameUnity.SequencialEventProcess
struct  SequencialEventProcess_t1347955999  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Queue`1<RanoGameUnity.SequencialEventProcess/EventQueueItem> RanoGameUnity.SequencialEventProcess::eventItemQueue
	Queue_1_t370898740 * ___eventItemQueue_2;
	// System.Collections.IEnumerator RanoGameUnity.SequencialEventProcess::eventRoutine
	Il2CppObject * ___eventRoutine_3;

public:
	inline static int32_t get_offset_of_eventItemQueue_2() { return static_cast<int32_t>(offsetof(SequencialEventProcess_t1347955999, ___eventItemQueue_2)); }
	inline Queue_1_t370898740 * get_eventItemQueue_2() const { return ___eventItemQueue_2; }
	inline Queue_1_t370898740 ** get_address_of_eventItemQueue_2() { return &___eventItemQueue_2; }
	inline void set_eventItemQueue_2(Queue_1_t370898740 * value)
	{
		___eventItemQueue_2 = value;
		Il2CppCodeGenWriteBarrier(&___eventItemQueue_2, value);
	}

	inline static int32_t get_offset_of_eventRoutine_3() { return static_cast<int32_t>(offsetof(SequencialEventProcess_t1347955999, ___eventRoutine_3)); }
	inline Il2CppObject * get_eventRoutine_3() const { return ___eventRoutine_3; }
	inline Il2CppObject ** get_address_of_eventRoutine_3() { return &___eventRoutine_3; }
	inline void set_eventRoutine_3(Il2CppObject * value)
	{
		___eventRoutine_3 = value;
		Il2CppCodeGenWriteBarrier(&___eventRoutine_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
