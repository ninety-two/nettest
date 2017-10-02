#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.text.TextData
struct  TextData_t2575386453  : public Il2CppObject
{
public:
	// System.String RanoGame.text.TextData::text
	String_t* ___text_0;
	// System.String RanoGame.text.TextData::ruby
	String_t* ___ruby_1;
	// System.UInt32 RanoGame.text.TextData::color
	uint32_t ___color_2;
	// System.Int32 RanoGame.text.TextData::fontSize
	int32_t ___fontSize_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(TextData_t2575386453, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_ruby_1() { return static_cast<int32_t>(offsetof(TextData_t2575386453, ___ruby_1)); }
	inline String_t* get_ruby_1() const { return ___ruby_1; }
	inline String_t** get_address_of_ruby_1() { return &___ruby_1; }
	inline void set_ruby_1(String_t* value)
	{
		___ruby_1 = value;
		Il2CppCodeGenWriteBarrier(&___ruby_1, value);
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(TextData_t2575386453, ___color_2)); }
	inline uint32_t get_color_2() const { return ___color_2; }
	inline uint32_t* get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(uint32_t value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_fontSize_3() { return static_cast<int32_t>(offsetof(TextData_t2575386453, ___fontSize_3)); }
	inline int32_t get_fontSize_3() const { return ___fontSize_3; }
	inline int32_t* get_address_of_fontSize_3() { return &___fontSize_3; }
	inline void set_fontSize_3(int32_t value)
	{
		___fontSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
