#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

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

// Three.ThreeLogic
struct  ThreeLogic_t4251521356  : public MonoBehaviour_t1158329972
{
public:
	// Three.Board Three.ThreeLogic::board
	Board_t1255348386 * ___board_2;
	// System.Int32[] Three.ThreeLogic::playerIdList
	Int32U5BU5D_t3030399641* ___playerIdList_3;
	// Three.StoneType[] Three.ThreeLogic::phaseOrder
	StoneTypeU5BU5D_t3558392248* ___phaseOrder_4;
	// System.Int32 Three.ThreeLogic::phaseOrderIndex
	int32_t ___phaseOrderIndex_5;

public:
	inline static int32_t get_offset_of_board_2() { return static_cast<int32_t>(offsetof(ThreeLogic_t4251521356, ___board_2)); }
	inline Board_t1255348386 * get_board_2() const { return ___board_2; }
	inline Board_t1255348386 ** get_address_of_board_2() { return &___board_2; }
	inline void set_board_2(Board_t1255348386 * value)
	{
		___board_2 = value;
		Il2CppCodeGenWriteBarrier(&___board_2, value);
	}

	inline static int32_t get_offset_of_playerIdList_3() { return static_cast<int32_t>(offsetof(ThreeLogic_t4251521356, ___playerIdList_3)); }
	inline Int32U5BU5D_t3030399641* get_playerIdList_3() const { return ___playerIdList_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_playerIdList_3() { return &___playerIdList_3; }
	inline void set_playerIdList_3(Int32U5BU5D_t3030399641* value)
	{
		___playerIdList_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerIdList_3, value);
	}

	inline static int32_t get_offset_of_phaseOrder_4() { return static_cast<int32_t>(offsetof(ThreeLogic_t4251521356, ___phaseOrder_4)); }
	inline StoneTypeU5BU5D_t3558392248* get_phaseOrder_4() const { return ___phaseOrder_4; }
	inline StoneTypeU5BU5D_t3558392248** get_address_of_phaseOrder_4() { return &___phaseOrder_4; }
	inline void set_phaseOrder_4(StoneTypeU5BU5D_t3558392248* value)
	{
		___phaseOrder_4 = value;
		Il2CppCodeGenWriteBarrier(&___phaseOrder_4, value);
	}

	inline static int32_t get_offset_of_phaseOrderIndex_5() { return static_cast<int32_t>(offsetof(ThreeLogic_t4251521356, ___phaseOrderIndex_5)); }
	inline int32_t get_phaseOrderIndex_5() const { return ___phaseOrderIndex_5; }
	inline int32_t* get_address_of_phaseOrderIndex_5() { return &___phaseOrderIndex_5; }
	inline void set_phaseOrderIndex_5(int32_t value)
	{
		___phaseOrderIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
