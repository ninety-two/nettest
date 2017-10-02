#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen1944821941.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.draw.TextureEx
struct  TextureEx_t1030755444  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D RanoGame.draw.TextureEx::texture
	Texture2D_t3542995729 * ___texture_0;
	// System.Nullable`1<UnityEngine.Rect> RanoGame.draw.TextureEx::rect
	Nullable_1_t1944821941  ___rect_1;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(TextureEx_t1030755444, ___texture_0)); }
	inline Texture2D_t3542995729 * get_texture_0() const { return ___texture_0; }
	inline Texture2D_t3542995729 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture2D_t3542995729 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture_0, value);
	}

	inline static int32_t get_offset_of_rect_1() { return static_cast<int32_t>(offsetof(TextureEx_t1030755444, ___rect_1)); }
	inline Nullable_1_t1944821941  get_rect_1() const { return ___rect_1; }
	inline Nullable_1_t1944821941 * get_address_of_rect_1() { return &___rect_1; }
	inline void set_rect_1(Nullable_1_t1944821941  value)
	{
		___rect_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
