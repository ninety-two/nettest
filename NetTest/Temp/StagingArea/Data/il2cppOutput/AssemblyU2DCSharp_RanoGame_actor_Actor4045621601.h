#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"

// RanoGame.actor.ActorParams
struct ActorParams_t1774026955;
// System.Collections.Generic.Dictionary`2<System.UInt32,RanoGame.actor.Actor>
struct Dictionary_2_t82433811;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.actor.Actor
struct  Actor_t4045621601  : public MonoBehaviour_t1158329972
{
public:
	// System.Nullable`1<System.UInt32> RanoGame.actor.Actor::<oId>k__BackingField
	Nullable_1_t412748336  ___U3CoIdU3Ek__BackingField_2;
	// RanoGame.actor.ActorParams RanoGame.actor.Actor::<Params>k__BackingField
	ActorParams_t1774026955 * ___U3CParamsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CoIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Actor_t4045621601, ___U3CoIdU3Ek__BackingField_2)); }
	inline Nullable_1_t412748336  get_U3CoIdU3Ek__BackingField_2() const { return ___U3CoIdU3Ek__BackingField_2; }
	inline Nullable_1_t412748336 * get_address_of_U3CoIdU3Ek__BackingField_2() { return &___U3CoIdU3Ek__BackingField_2; }
	inline void set_U3CoIdU3Ek__BackingField_2(Nullable_1_t412748336  value)
	{
		___U3CoIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CParamsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Actor_t4045621601, ___U3CParamsU3Ek__BackingField_3)); }
	inline ActorParams_t1774026955 * get_U3CParamsU3Ek__BackingField_3() const { return ___U3CParamsU3Ek__BackingField_3; }
	inline ActorParams_t1774026955 ** get_address_of_U3CParamsU3Ek__BackingField_3() { return &___U3CParamsU3Ek__BackingField_3; }
	inline void set_U3CParamsU3Ek__BackingField_3(ActorParams_t1774026955 * value)
	{
		___U3CParamsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CParamsU3Ek__BackingField_3, value);
	}
};

struct Actor_t4045621601_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,RanoGame.actor.Actor> RanoGame.actor.Actor::s_IdToActor
	Dictionary_2_t82433811 * ___s_IdToActor_4;

public:
	inline static int32_t get_offset_of_s_IdToActor_4() { return static_cast<int32_t>(offsetof(Actor_t4045621601_StaticFields, ___s_IdToActor_4)); }
	inline Dictionary_2_t82433811 * get_s_IdToActor_4() const { return ___s_IdToActor_4; }
	inline Dictionary_2_t82433811 ** get_address_of_s_IdToActor_4() { return &___s_IdToActor_4; }
	inline void set_s_IdToActor_4(Dictionary_2_t82433811 * value)
	{
		___s_IdToActor_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_IdToActor_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
