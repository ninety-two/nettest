#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"

// RanoGame.actor.ActorType
struct ActorType_t1867720249;
// System.Collections.Generic.List`1<RanoGame.actor.IActorParamsFactory>
struct List_1_t4106057232;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.actor.ActorParams
struct  ActorParams_t1774026955  : public Il2CppObject
{
public:
	// System.Nullable`1<System.UInt32> RanoGame.actor.ActorParams::<oActorId>k__BackingField
	Nullable_1_t412748336  ___U3CoActorIdU3Ek__BackingField_0;
	// RanoGame.actor.ActorType RanoGame.actor.ActorParams::<actorType>k__BackingField
	ActorType_t1867720249 * ___U3CactorTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CoActorIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ActorParams_t1774026955, ___U3CoActorIdU3Ek__BackingField_0)); }
	inline Nullable_1_t412748336  get_U3CoActorIdU3Ek__BackingField_0() const { return ___U3CoActorIdU3Ek__BackingField_0; }
	inline Nullable_1_t412748336 * get_address_of_U3CoActorIdU3Ek__BackingField_0() { return &___U3CoActorIdU3Ek__BackingField_0; }
	inline void set_U3CoActorIdU3Ek__BackingField_0(Nullable_1_t412748336  value)
	{
		___U3CoActorIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CactorTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ActorParams_t1774026955, ___U3CactorTypeU3Ek__BackingField_1)); }
	inline ActorType_t1867720249 * get_U3CactorTypeU3Ek__BackingField_1() const { return ___U3CactorTypeU3Ek__BackingField_1; }
	inline ActorType_t1867720249 ** get_address_of_U3CactorTypeU3Ek__BackingField_1() { return &___U3CactorTypeU3Ek__BackingField_1; }
	inline void set_U3CactorTypeU3Ek__BackingField_1(ActorType_t1867720249 * value)
	{
		___U3CactorTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CactorTypeU3Ek__BackingField_1, value);
	}
};

struct ActorParams_t1774026955_StaticFields
{
public:
	// System.Collections.Generic.List`1<RanoGame.actor.IActorParamsFactory> RanoGame.actor.ActorParams::s_FactoryList
	List_1_t4106057232 * ___s_FactoryList_2;

public:
	inline static int32_t get_offset_of_s_FactoryList_2() { return static_cast<int32_t>(offsetof(ActorParams_t1774026955_StaticFields, ___s_FactoryList_2)); }
	inline List_1_t4106057232 * get_s_FactoryList_2() const { return ___s_FactoryList_2; }
	inline List_1_t4106057232 ** get_address_of_s_FactoryList_2() { return &___s_FactoryList_2; }
	inline void set_s_FactoryList_2(List_1_t4106057232 * value)
	{
		___s_FactoryList_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_FactoryList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
