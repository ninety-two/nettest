#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RanoGameUnity.SequencialEventProcess/EventQueueItem
struct EventQueueItem_t551241905;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// RanoGameUnity.SequencialEventProcess
struct SequencialEventProcess_t1347955999;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGameUnity.SequencialEventProcess/<ExecuteEventQueue>c__Iterator0
struct  U3CExecuteEventQueueU3Ec__Iterator0_t2591265394  : public Il2CppObject
{
public:
	// RanoGameUnity.SequencialEventProcess/EventQueueItem RanoGameUnity.SequencialEventProcess/<ExecuteEventQueue>c__Iterator0::<item>__1
	EventQueueItem_t551241905 * ___U3CitemU3E__1_0;
	// System.Collections.IEnumerator RanoGameUnity.SequencialEventProcess/<ExecuteEventQueue>c__Iterator0::<routine>__1
	Il2CppObject * ___U3CroutineU3E__1_1;
	// RanoGameUnity.SequencialEventProcess RanoGameUnity.SequencialEventProcess/<ExecuteEventQueue>c__Iterator0::$this
	SequencialEventProcess_t1347955999 * ___U24this_2;
	// System.Object RanoGameUnity.SequencialEventProcess/<ExecuteEventQueue>c__Iterator0::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean RanoGameUnity.SequencialEventProcess/<ExecuteEventQueue>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 RanoGameUnity.SequencialEventProcess/<ExecuteEventQueue>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CitemU3E__1_0() { return static_cast<int32_t>(offsetof(U3CExecuteEventQueueU3Ec__Iterator0_t2591265394, ___U3CitemU3E__1_0)); }
	inline EventQueueItem_t551241905 * get_U3CitemU3E__1_0() const { return ___U3CitemU3E__1_0; }
	inline EventQueueItem_t551241905 ** get_address_of_U3CitemU3E__1_0() { return &___U3CitemU3E__1_0; }
	inline void set_U3CitemU3E__1_0(EventQueueItem_t551241905 * value)
	{
		___U3CitemU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CitemU3E__1_0, value);
	}

	inline static int32_t get_offset_of_U3CroutineU3E__1_1() { return static_cast<int32_t>(offsetof(U3CExecuteEventQueueU3Ec__Iterator0_t2591265394, ___U3CroutineU3E__1_1)); }
	inline Il2CppObject * get_U3CroutineU3E__1_1() const { return ___U3CroutineU3E__1_1; }
	inline Il2CppObject ** get_address_of_U3CroutineU3E__1_1() { return &___U3CroutineU3E__1_1; }
	inline void set_U3CroutineU3E__1_1(Il2CppObject * value)
	{
		___U3CroutineU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CroutineU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CExecuteEventQueueU3Ec__Iterator0_t2591265394, ___U24this_2)); }
	inline SequencialEventProcess_t1347955999 * get_U24this_2() const { return ___U24this_2; }
	inline SequencialEventProcess_t1347955999 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SequencialEventProcess_t1347955999 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CExecuteEventQueueU3Ec__Iterator0_t2591265394, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CExecuteEventQueueU3Ec__Iterator0_t2591265394, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CExecuteEventQueueU3Ec__Iterator0_t2591265394, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
