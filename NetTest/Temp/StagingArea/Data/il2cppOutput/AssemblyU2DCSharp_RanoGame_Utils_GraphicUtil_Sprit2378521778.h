#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite>
struct Dictionary_2_t2224373045;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.Utils.GraphicUtil/SpriteContainer
struct  SpriteContainer_t2378521778  : public Il2CppObject
{
public:
	// UnityEngine.Sprite[] RanoGame.Utils.GraphicUtil/SpriteContainer::spriteArray
	SpriteU5BU5D_t3359083662* ___spriteArray_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Sprite> RanoGame.Utils.GraphicUtil/SpriteContainer::nameToSprite
	Dictionary_2_t2224373045 * ___nameToSprite_1;

public:
	inline static int32_t get_offset_of_spriteArray_0() { return static_cast<int32_t>(offsetof(SpriteContainer_t2378521778, ___spriteArray_0)); }
	inline SpriteU5BU5D_t3359083662* get_spriteArray_0() const { return ___spriteArray_0; }
	inline SpriteU5BU5D_t3359083662** get_address_of_spriteArray_0() { return &___spriteArray_0; }
	inline void set_spriteArray_0(SpriteU5BU5D_t3359083662* value)
	{
		___spriteArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___spriteArray_0, value);
	}

	inline static int32_t get_offset_of_nameToSprite_1() { return static_cast<int32_t>(offsetof(SpriteContainer_t2378521778, ___nameToSprite_1)); }
	inline Dictionary_2_t2224373045 * get_nameToSprite_1() const { return ___nameToSprite_1; }
	inline Dictionary_2_t2224373045 ** get_address_of_nameToSprite_1() { return &___nameToSprite_1; }
	inline void set_nameToSprite_1(Dictionary_2_t2224373045 * value)
	{
		___nameToSprite_1 = value;
		Il2CppCodeGenWriteBarrier(&___nameToSprite_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
