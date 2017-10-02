#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Three_Events_BaseThreeEvent_1_ge2751843297.h"

// Three.Board
struct Board_t1255348386;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Three.StoneType[]
struct StoneTypeU5BU5D_t3558392248;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Three.Events.GameStartEvent
struct  GameStartEvent_t1686493032  : public BaseThreeEvent_1_t2751843297
{
public:
	// Three.Board Three.Events.GameStartEvent::<board>k__BackingField
	Board_t1255348386 * ___U3CboardU3Ek__BackingField_0;
	// System.Int32[] Three.Events.GameStartEvent::<playerIdList>k__BackingField
	Int32U5BU5D_t3030399641* ___U3CplayerIdListU3Ek__BackingField_1;
	// Three.StoneType[] Three.Events.GameStartEvent::<order>k__BackingField
	StoneTypeU5BU5D_t3558392248* ___U3CorderU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CboardU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GameStartEvent_t1686493032, ___U3CboardU3Ek__BackingField_0)); }
	inline Board_t1255348386 * get_U3CboardU3Ek__BackingField_0() const { return ___U3CboardU3Ek__BackingField_0; }
	inline Board_t1255348386 ** get_address_of_U3CboardU3Ek__BackingField_0() { return &___U3CboardU3Ek__BackingField_0; }
	inline void set_U3CboardU3Ek__BackingField_0(Board_t1255348386 * value)
	{
		___U3CboardU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CboardU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CplayerIdListU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameStartEvent_t1686493032, ___U3CplayerIdListU3Ek__BackingField_1)); }
	inline Int32U5BU5D_t3030399641* get_U3CplayerIdListU3Ek__BackingField_1() const { return ___U3CplayerIdListU3Ek__BackingField_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_U3CplayerIdListU3Ek__BackingField_1() { return &___U3CplayerIdListU3Ek__BackingField_1; }
	inline void set_U3CplayerIdListU3Ek__BackingField_1(Int32U5BU5D_t3030399641* value)
	{
		___U3CplayerIdListU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayerIdListU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameStartEvent_t1686493032, ___U3CorderU3Ek__BackingField_2)); }
	inline StoneTypeU5BU5D_t3558392248* get_U3CorderU3Ek__BackingField_2() const { return ___U3CorderU3Ek__BackingField_2; }
	inline StoneTypeU5BU5D_t3558392248** get_address_of_U3CorderU3Ek__BackingField_2() { return &___U3CorderU3Ek__BackingField_2; }
	inline void set_U3CorderU3Ek__BackingField_2(StoneTypeU5BU5D_t3558392248* value)
	{
		___U3CorderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CorderU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
