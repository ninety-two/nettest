#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGame_file_Resource3778615714.h"

// RanoGame.file.CreateResourceItem`1<System.Object>
struct CreateResourceItem_1_t2386078866;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.file.BaseItemResource`1<System.Object>
struct  BaseItemResource_1_t2305405415  : public Resource_t3778615714
{
public:
	// RanoGame.file.CreateResourceItem`1<TItem> RanoGame.file.BaseItemResource`1::createItem
	CreateResourceItem_1_t2386078866 * ___createItem_1;

public:
	inline static int32_t get_offset_of_createItem_1() { return static_cast<int32_t>(offsetof(BaseItemResource_1_t2305405415, ___createItem_1)); }
	inline CreateResourceItem_1_t2386078866 * get_createItem_1() const { return ___createItem_1; }
	inline CreateResourceItem_1_t2386078866 ** get_address_of_createItem_1() { return &___createItem_1; }
	inline void set_createItem_1(CreateResourceItem_1_t2386078866 * value)
	{
		___createItem_1 = value;
		Il2CppCodeGenWriteBarrier(&___createItem_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
