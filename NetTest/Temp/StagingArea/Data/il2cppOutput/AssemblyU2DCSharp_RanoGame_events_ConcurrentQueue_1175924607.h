#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2509106130;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.events.ConcurrentQueue`1<System.Object>
struct  ConcurrentQueue_1_t175924607  : public Il2CppObject
{
public:
	// System.Collections.Generic.Queue`1<T> RanoGame.events.ConcurrentQueue`1::queue
	Queue_1_t2509106130 * ___queue_0;
	// System.Object RanoGame.events.ConcurrentQueue`1::queueLock
	Il2CppObject * ___queueLock_1;

public:
	inline static int32_t get_offset_of_queue_0() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t175924607, ___queue_0)); }
	inline Queue_1_t2509106130 * get_queue_0() const { return ___queue_0; }
	inline Queue_1_t2509106130 ** get_address_of_queue_0() { return &___queue_0; }
	inline void set_queue_0(Queue_1_t2509106130 * value)
	{
		___queue_0 = value;
		Il2CppCodeGenWriteBarrier(&___queue_0, value);
	}

	inline static int32_t get_offset_of_queueLock_1() { return static_cast<int32_t>(offsetof(ConcurrentQueue_1_t175924607, ___queueLock_1)); }
	inline Il2CppObject * get_queueLock_1() const { return ___queueLock_1; }
	inline Il2CppObject ** get_address_of_queueLock_1() { return &___queueLock_1; }
	inline void set_queueLock_1(Il2CppObject * value)
	{
		___queueLock_1 = value;
		Il2CppCodeGenWriteBarrier(&___queueLock_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
