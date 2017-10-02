#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGame_events_BaseEventData3336829727.h"

// System.String
struct String_t;
// RanoGame.actor.ActorParams
struct ActorParams_t1774026955;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.events.RequestNewActorEvent
struct  RequestNewActorEvent_t228841088  : public BaseEventData_t3336829727
{
public:
	// RanoGame.actor.ActorParams RanoGame.events.RequestNewActorEvent::<actorParams>k__BackingField
	ActorParams_t1774026955 * ___U3CactorParamsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CactorParamsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RequestNewActorEvent_t228841088, ___U3CactorParamsU3Ek__BackingField_3)); }
	inline ActorParams_t1774026955 * get_U3CactorParamsU3Ek__BackingField_3() const { return ___U3CactorParamsU3Ek__BackingField_3; }
	inline ActorParams_t1774026955 ** get_address_of_U3CactorParamsU3Ek__BackingField_3() { return &___U3CactorParamsU3Ek__BackingField_3; }
	inline void set_U3CactorParamsU3Ek__BackingField_3(ActorParams_t1774026955 * value)
	{
		___U3CactorParamsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CactorParamsU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
