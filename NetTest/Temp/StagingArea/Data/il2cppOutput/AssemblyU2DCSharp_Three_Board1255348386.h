#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Three.StoneType[0...,0...]
struct StoneTypeU5BU2CU5D_t3558392249;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Three.Board
struct  Board_t1255348386  : public Il2CppObject
{
public:
	// Three.StoneType[0...,0...] Three.Board::cells
	StoneTypeU5BU2CU5D_t3558392249* ___cells_3;

public:
	inline static int32_t get_offset_of_cells_3() { return static_cast<int32_t>(offsetof(Board_t1255348386, ___cells_3)); }
	inline StoneTypeU5BU2CU5D_t3558392249* get_cells_3() const { return ___cells_3; }
	inline StoneTypeU5BU2CU5D_t3558392249** get_address_of_cells_3() { return &___cells_3; }
	inline void set_cells_3(StoneTypeU5BU2CU5D_t3558392249* value)
	{
		___cells_3 = value;
		Il2CppCodeGenWriteBarrier(&___cells_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
