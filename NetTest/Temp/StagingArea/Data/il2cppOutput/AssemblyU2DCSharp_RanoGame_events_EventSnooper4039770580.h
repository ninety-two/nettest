#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.events.EventSnooper
struct  EventSnooper_t4039770580  : public Il2CppObject
{
public:
	// System.IO.BinaryWriter RanoGame.events.EventSnooper::writer
	BinaryWriter_t3179371318 * ___writer_0;

public:
	inline static int32_t get_offset_of_writer_0() { return static_cast<int32_t>(offsetof(EventSnooper_t4039770580, ___writer_0)); }
	inline BinaryWriter_t3179371318 * get_writer_0() const { return ___writer_0; }
	inline BinaryWriter_t3179371318 ** get_address_of_writer_0() { return &___writer_0; }
	inline void set_writer_0(BinaryWriter_t3179371318 * value)
	{
		___writer_0 = value;
		Il2CppCodeGenWriteBarrier(&___writer_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
