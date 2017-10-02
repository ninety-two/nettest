#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// RanoGame.events.EventType
struct EventType_t872040378;
// System.Collections.Generic.HashSet`1<RanoGame.events.EventType>
struct HashSet_1_t3500468528;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<RanoGame.events.IEventListener>>
struct Dictionary_2_t848075510;
// System.Collections.Generic.LinkedList`1<RanoGame.events.IEventData>[]
struct LinkedList_1U5BU5D_t2458883409;
// RanoGame.events.ConcurrentQueue`1<RanoGame.events.IEventData>
struct ConcurrentQueue_1_t2149213851;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.events.EventManager
struct  EventManager_t1486817501  : public Il2CppObject
{
public:
	// System.String RanoGame.events.EventManager::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Boolean RanoGame.events.EventManager::<SetAsGlobal>k__BackingField
	bool ___U3CSetAsGlobalU3Ek__BackingField_3;
	// System.Collections.Generic.HashSet`1<RanoGame.events.EventType> RanoGame.events.EventManager::eventTypeSet
	HashSet_1_t3500468528 * ___eventTypeSet_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<RanoGame.events.IEventListener>> RanoGame.events.EventManager::registry
	Dictionary_2_t848075510 * ___registry_5;
	// System.Collections.Generic.LinkedList`1<RanoGame.events.IEventData>[] RanoGame.events.EventManager::eventQueue
	LinkedList_1U5BU5D_t2458883409* ___eventQueue_7;
	// System.Int32 RanoGame.events.EventManager::activeQueueIndex
	int32_t ___activeQueueIndex_8;
	// RanoGame.events.ConcurrentQueue`1<RanoGame.events.IEventData> RanoGame.events.EventManager::realtimeEventQueue
	ConcurrentQueue_1_t2149213851 * ___realtimeEventQueue_9;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventManager_t1486817501, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CSetAsGlobalU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventManager_t1486817501, ___U3CSetAsGlobalU3Ek__BackingField_3)); }
	inline bool get_U3CSetAsGlobalU3Ek__BackingField_3() const { return ___U3CSetAsGlobalU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CSetAsGlobalU3Ek__BackingField_3() { return &___U3CSetAsGlobalU3Ek__BackingField_3; }
	inline void set_U3CSetAsGlobalU3Ek__BackingField_3(bool value)
	{
		___U3CSetAsGlobalU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_eventTypeSet_4() { return static_cast<int32_t>(offsetof(EventManager_t1486817501, ___eventTypeSet_4)); }
	inline HashSet_1_t3500468528 * get_eventTypeSet_4() const { return ___eventTypeSet_4; }
	inline HashSet_1_t3500468528 ** get_address_of_eventTypeSet_4() { return &___eventTypeSet_4; }
	inline void set_eventTypeSet_4(HashSet_1_t3500468528 * value)
	{
		___eventTypeSet_4 = value;
		Il2CppCodeGenWriteBarrier(&___eventTypeSet_4, value);
	}

	inline static int32_t get_offset_of_registry_5() { return static_cast<int32_t>(offsetof(EventManager_t1486817501, ___registry_5)); }
	inline Dictionary_2_t848075510 * get_registry_5() const { return ___registry_5; }
	inline Dictionary_2_t848075510 ** get_address_of_registry_5() { return &___registry_5; }
	inline void set_registry_5(Dictionary_2_t848075510 * value)
	{
		___registry_5 = value;
		Il2CppCodeGenWriteBarrier(&___registry_5, value);
	}

	inline static int32_t get_offset_of_eventQueue_7() { return static_cast<int32_t>(offsetof(EventManager_t1486817501, ___eventQueue_7)); }
	inline LinkedList_1U5BU5D_t2458883409* get_eventQueue_7() const { return ___eventQueue_7; }
	inline LinkedList_1U5BU5D_t2458883409** get_address_of_eventQueue_7() { return &___eventQueue_7; }
	inline void set_eventQueue_7(LinkedList_1U5BU5D_t2458883409* value)
	{
		___eventQueue_7 = value;
		Il2CppCodeGenWriteBarrier(&___eventQueue_7, value);
	}

	inline static int32_t get_offset_of_activeQueueIndex_8() { return static_cast<int32_t>(offsetof(EventManager_t1486817501, ___activeQueueIndex_8)); }
	inline int32_t get_activeQueueIndex_8() const { return ___activeQueueIndex_8; }
	inline int32_t* get_address_of_activeQueueIndex_8() { return &___activeQueueIndex_8; }
	inline void set_activeQueueIndex_8(int32_t value)
	{
		___activeQueueIndex_8 = value;
	}

	inline static int32_t get_offset_of_realtimeEventQueue_9() { return static_cast<int32_t>(offsetof(EventManager_t1486817501, ___realtimeEventQueue_9)); }
	inline ConcurrentQueue_1_t2149213851 * get_realtimeEventQueue_9() const { return ___realtimeEventQueue_9; }
	inline ConcurrentQueue_1_t2149213851 ** get_address_of_realtimeEventQueue_9() { return &___realtimeEventQueue_9; }
	inline void set_realtimeEventQueue_9(ConcurrentQueue_1_t2149213851 * value)
	{
		___realtimeEventQueue_9 = value;
		Il2CppCodeGenWriteBarrier(&___realtimeEventQueue_9, value);
	}
};

struct EventManager_t1486817501_StaticFields
{
public:
	// RanoGame.events.EventType RanoGame.events.EventManager::s_WildcardEventType
	EventType_t872040378 * ___s_WildcardEventType_1;

public:
	inline static int32_t get_offset_of_s_WildcardEventType_1() { return static_cast<int32_t>(offsetof(EventManager_t1486817501_StaticFields, ___s_WildcardEventType_1)); }
	inline EventType_t872040378 * get_s_WildcardEventType_1() const { return ___s_WildcardEventType_1; }
	inline EventType_t872040378 ** get_address_of_s_WildcardEventType_1() { return &___s_WildcardEventType_1; }
	inline void set_s_WildcardEventType_1(EventType_t872040378 * value)
	{
		___s_WildcardEventType_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_WildcardEventType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
