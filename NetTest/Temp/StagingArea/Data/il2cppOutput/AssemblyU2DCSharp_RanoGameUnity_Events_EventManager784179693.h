#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// RanoGameUnity.Events.EventManager
struct EventManager_t784179693;
// System.Action`1<RanoGameUnity.Events.BaseEventData>
struct Action_1_t237692069;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t89994001;
// System.Collections.Generic.Queue`1<RanoGameUnity.Events.EventManager/EventQueueItem>
struct Queue_1_t862124861;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGameUnity.Events.EventManager
struct  EventManager_t784179693  : public MonoBehaviour_t1158329972
{
public:
	// System.Action`1<RanoGameUnity.Events.BaseEventData> RanoGameUnity.Events.EventManager::OnTrigger
	Action_1_t237692069 * ___OnTrigger_3;
	// System.Action`1<RanoGameUnity.Events.BaseEventData> RanoGameUnity.Events.EventManager::OnQueue
	Action_1_t237692069 * ___OnQueue_4;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> RanoGameUnity.Events.EventManager::eventTargetSet
	HashSet_1_t89994001 * ___eventTargetSet_5;
	// System.Collections.Generic.Queue`1<RanoGameUnity.Events.EventManager/EventQueueItem> RanoGameUnity.Events.EventManager::eventQueue
	Queue_1_t862124861 * ___eventQueue_6;

public:
	inline static int32_t get_offset_of_OnTrigger_3() { return static_cast<int32_t>(offsetof(EventManager_t784179693, ___OnTrigger_3)); }
	inline Action_1_t237692069 * get_OnTrigger_3() const { return ___OnTrigger_3; }
	inline Action_1_t237692069 ** get_address_of_OnTrigger_3() { return &___OnTrigger_3; }
	inline void set_OnTrigger_3(Action_1_t237692069 * value)
	{
		___OnTrigger_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrigger_3, value);
	}

	inline static int32_t get_offset_of_OnQueue_4() { return static_cast<int32_t>(offsetof(EventManager_t784179693, ___OnQueue_4)); }
	inline Action_1_t237692069 * get_OnQueue_4() const { return ___OnQueue_4; }
	inline Action_1_t237692069 ** get_address_of_OnQueue_4() { return &___OnQueue_4; }
	inline void set_OnQueue_4(Action_1_t237692069 * value)
	{
		___OnQueue_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnQueue_4, value);
	}

	inline static int32_t get_offset_of_eventTargetSet_5() { return static_cast<int32_t>(offsetof(EventManager_t784179693, ___eventTargetSet_5)); }
	inline HashSet_1_t89994001 * get_eventTargetSet_5() const { return ___eventTargetSet_5; }
	inline HashSet_1_t89994001 ** get_address_of_eventTargetSet_5() { return &___eventTargetSet_5; }
	inline void set_eventTargetSet_5(HashSet_1_t89994001 * value)
	{
		___eventTargetSet_5 = value;
		Il2CppCodeGenWriteBarrier(&___eventTargetSet_5, value);
	}

	inline static int32_t get_offset_of_eventQueue_6() { return static_cast<int32_t>(offsetof(EventManager_t784179693, ___eventQueue_6)); }
	inline Queue_1_t862124861 * get_eventQueue_6() const { return ___eventQueue_6; }
	inline Queue_1_t862124861 ** get_address_of_eventQueue_6() { return &___eventQueue_6; }
	inline void set_eventQueue_6(Queue_1_t862124861 * value)
	{
		___eventQueue_6 = value;
		Il2CppCodeGenWriteBarrier(&___eventQueue_6, value);
	}
};

struct EventManager_t784179693_StaticFields
{
public:
	// RanoGameUnity.Events.EventManager RanoGameUnity.Events.EventManager::<singleton>k__BackingField
	EventManager_t784179693 * ___U3CsingletonU3Ek__BackingField_2;
	// System.Action`1<RanoGameUnity.Events.BaseEventData> RanoGameUnity.Events.EventManager::<>f__am$cache0
	Action_1_t237692069 * ___U3CU3Ef__amU24cache0_7;
	// System.Action`1<RanoGameUnity.Events.BaseEventData> RanoGameUnity.Events.EventManager::<>f__am$cache1
	Action_1_t237692069 * ___U3CU3Ef__amU24cache1_8;

public:
	inline static int32_t get_offset_of_U3CsingletonU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventManager_t784179693_StaticFields, ___U3CsingletonU3Ek__BackingField_2)); }
	inline EventManager_t784179693 * get_U3CsingletonU3Ek__BackingField_2() const { return ___U3CsingletonU3Ek__BackingField_2; }
	inline EventManager_t784179693 ** get_address_of_U3CsingletonU3Ek__BackingField_2() { return &___U3CsingletonU3Ek__BackingField_2; }
	inline void set_U3CsingletonU3Ek__BackingField_2(EventManager_t784179693 * value)
	{
		___U3CsingletonU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsingletonU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(EventManager_t784179693_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Action_1_t237692069 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Action_1_t237692069 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Action_1_t237692069 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(EventManager_t784179693_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline Action_1_t237692069 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline Action_1_t237692069 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(Action_1_t237692069 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
