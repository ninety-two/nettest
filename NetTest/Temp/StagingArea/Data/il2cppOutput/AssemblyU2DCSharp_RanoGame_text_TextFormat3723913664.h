#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.text.TextFormat
struct  TextFormat_t3723913664  : public Il2CppObject
{
public:
	// System.UInt32 RanoGame.text.TextFormat::color
	uint32_t ___color_0;
	// System.Single RanoGame.text.TextFormat::size
	float ___size_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(TextFormat_t3723913664, ___color_0)); }
	inline uint32_t get_color_0() const { return ___color_0; }
	inline uint32_t* get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(uint32_t value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TextFormat_t3723913664, ___size_1)); }
	inline float get_size_1() const { return ___size_1; }
	inline float* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(float value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
