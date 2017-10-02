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

// System.Action`1<RanoGame.actor.SceneNode>
struct Action_1_t3899564198;
// System.Collections.Generic.Dictionary`2<System.UInt32,RanoGame.actor.SceneNode>
struct Dictionary_2_t134577026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.actor.SceneNode
struct  SceneNode_t4097764816  : public MonoBehaviour_t1158329972
{
public:
	// System.Nullable`1<System.UInt32> RanoGame.actor.SceneNode::<Id>k__BackingField
	Nullable_1_t412748336  ___U3CIdU3Ek__BackingField_2;
	// System.Action`1<RanoGame.actor.SceneNode> RanoGame.actor.SceneNode::OnRemoved
	Action_1_t3899564198 * ___OnRemoved_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SceneNode_t4097764816, ___U3CIdU3Ek__BackingField_2)); }
	inline Nullable_1_t412748336  get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline Nullable_1_t412748336 * get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(Nullable_1_t412748336  value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_OnRemoved_3() { return static_cast<int32_t>(offsetof(SceneNode_t4097764816, ___OnRemoved_3)); }
	inline Action_1_t3899564198 * get_OnRemoved_3() const { return ___OnRemoved_3; }
	inline Action_1_t3899564198 ** get_address_of_OnRemoved_3() { return &___OnRemoved_3; }
	inline void set_OnRemoved_3(Action_1_t3899564198 * value)
	{
		___OnRemoved_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnRemoved_3, value);
	}
};

struct SceneNode_t4097764816_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,RanoGame.actor.SceneNode> RanoGame.actor.SceneNode::s_IdToNode
	Dictionary_2_t134577026 * ___s_IdToNode_4;
	// System.Action`1<RanoGame.actor.SceneNode> RanoGame.actor.SceneNode::<>f__am$cache0
	Action_1_t3899564198 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_s_IdToNode_4() { return static_cast<int32_t>(offsetof(SceneNode_t4097764816_StaticFields, ___s_IdToNode_4)); }
	inline Dictionary_2_t134577026 * get_s_IdToNode_4() const { return ___s_IdToNode_4; }
	inline Dictionary_2_t134577026 ** get_address_of_s_IdToNode_4() { return &___s_IdToNode_4; }
	inline void set_s_IdToNode_4(Dictionary_2_t134577026 * value)
	{
		___s_IdToNode_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_IdToNode_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(SceneNode_t4097764816_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t3899564198 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t3899564198 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t3899564198 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
