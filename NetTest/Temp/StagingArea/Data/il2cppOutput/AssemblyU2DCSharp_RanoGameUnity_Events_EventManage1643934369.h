#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGameUnity_Events_EventManage1042468026.h"

// Three.Events.RequestGameStart
struct RequestGameStart_t1521154469;
// System.Action`1<Three.Events.RequestGameStart>
struct Action_1_t1322953851;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGameUnity.Events.EventManager/EventQueueItem`1<Three.Events.RequestGameStart>
struct  EventQueueItem_1_t1643934369  : public EventQueueItem_t1042468026
{
public:
	// T RanoGameUnity.Events.EventManager/EventQueueItem`1::eventData
	RequestGameStart_t1521154469 * ___eventData_1;
	// System.Action`1<T> RanoGameUnity.Events.EventManager/EventQueueItem`1::trigger
	Action_1_t1322953851 * ___trigger_2;

public:
	inline static int32_t get_offset_of_eventData_1() { return static_cast<int32_t>(offsetof(EventQueueItem_1_t1643934369, ___eventData_1)); }
	inline RequestGameStart_t1521154469 * get_eventData_1() const { return ___eventData_1; }
	inline RequestGameStart_t1521154469 ** get_address_of_eventData_1() { return &___eventData_1; }
	inline void set_eventData_1(RequestGameStart_t1521154469 * value)
	{
		___eventData_1 = value;
		Il2CppCodeGenWriteBarrier(&___eventData_1, value);
	}

	inline static int32_t get_offset_of_trigger_2() { return static_cast<int32_t>(offsetof(EventQueueItem_1_t1643934369, ___trigger_2)); }
	inline Action_1_t1322953851 * get_trigger_2() const { return ___trigger_2; }
	inline Action_1_t1322953851 ** get_address_of_trigger_2() { return &___trigger_2; }
	inline void set_trigger_2(Action_1_t1322953851 * value)
	{
		___trigger_2 = value;
		Il2CppCodeGenWriteBarrier(&___trigger_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
