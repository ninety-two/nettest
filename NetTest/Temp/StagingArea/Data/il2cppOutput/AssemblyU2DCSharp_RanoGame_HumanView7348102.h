#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen1093596315.h"

// RanoGame.ControllerManager
struct ControllerManager_t1319015975;
// RanoGame.process.ProcessManager
struct ProcessManager_t3484849990;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// RanoGame.input.IMouseHandler
struct IMouseHandler_t2920974704;
// RanoGame.input.IKeyboardHandler
struct IKeyboardHandler_t1462583804;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.HumanView
struct  HumanView_t7348102  : public Il2CppObject
{
public:
	// RanoGame.ControllerManager RanoGame.HumanView::m_ControllerManager
	ControllerManager_t1319015975 * ___m_ControllerManager_0;
	// RanoGame.process.ProcessManager RanoGame.HumanView::m_ProcessManager
	ProcessManager_t3484849990 * ___m_ProcessManager_1;
	// System.UInt32 RanoGame.HumanView::<viewId>k__BackingField
	uint32_t ___U3CviewIdU3Ek__BackingField_2;
	// UnityEngine.Texture2D RanoGame.HumanView::<whitePixelTexture>k__BackingField
	Texture2D_t3542995729 * ___U3CwhitePixelTextureU3Ek__BackingField_3;
	// RanoGame.input.IMouseHandler RanoGame.HumanView::m_MouseHandler
	Il2CppObject * ___m_MouseHandler_4;
	// RanoGame.input.IKeyboardHandler RanoGame.HumanView::m_KeyboardHandler
	Il2CppObject * ___m_KeyboardHandler_5;
	// System.String RanoGame.HumanView::m_mouseCursor
	String_t* ___m_mouseCursor_6;
	// System.Nullable`1<RanoGame.Point> RanoGame.HumanView::<cursorPos>k__BackingField
	Nullable_1_t1093596315  ___U3CcursorPosU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_ControllerManager_0() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___m_ControllerManager_0)); }
	inline ControllerManager_t1319015975 * get_m_ControllerManager_0() const { return ___m_ControllerManager_0; }
	inline ControllerManager_t1319015975 ** get_address_of_m_ControllerManager_0() { return &___m_ControllerManager_0; }
	inline void set_m_ControllerManager_0(ControllerManager_t1319015975 * value)
	{
		___m_ControllerManager_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_ControllerManager_0, value);
	}

	inline static int32_t get_offset_of_m_ProcessManager_1() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___m_ProcessManager_1)); }
	inline ProcessManager_t3484849990 * get_m_ProcessManager_1() const { return ___m_ProcessManager_1; }
	inline ProcessManager_t3484849990 ** get_address_of_m_ProcessManager_1() { return &___m_ProcessManager_1; }
	inline void set_m_ProcessManager_1(ProcessManager_t3484849990 * value)
	{
		___m_ProcessManager_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ProcessManager_1, value);
	}

	inline static int32_t get_offset_of_U3CviewIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___U3CviewIdU3Ek__BackingField_2)); }
	inline uint32_t get_U3CviewIdU3Ek__BackingField_2() const { return ___U3CviewIdU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CviewIdU3Ek__BackingField_2() { return &___U3CviewIdU3Ek__BackingField_2; }
	inline void set_U3CviewIdU3Ek__BackingField_2(uint32_t value)
	{
		___U3CviewIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CwhitePixelTextureU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___U3CwhitePixelTextureU3Ek__BackingField_3)); }
	inline Texture2D_t3542995729 * get_U3CwhitePixelTextureU3Ek__BackingField_3() const { return ___U3CwhitePixelTextureU3Ek__BackingField_3; }
	inline Texture2D_t3542995729 ** get_address_of_U3CwhitePixelTextureU3Ek__BackingField_3() { return &___U3CwhitePixelTextureU3Ek__BackingField_3; }
	inline void set_U3CwhitePixelTextureU3Ek__BackingField_3(Texture2D_t3542995729 * value)
	{
		___U3CwhitePixelTextureU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwhitePixelTextureU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_m_MouseHandler_4() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___m_MouseHandler_4)); }
	inline Il2CppObject * get_m_MouseHandler_4() const { return ___m_MouseHandler_4; }
	inline Il2CppObject ** get_address_of_m_MouseHandler_4() { return &___m_MouseHandler_4; }
	inline void set_m_MouseHandler_4(Il2CppObject * value)
	{
		___m_MouseHandler_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseHandler_4, value);
	}

	inline static int32_t get_offset_of_m_KeyboardHandler_5() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___m_KeyboardHandler_5)); }
	inline Il2CppObject * get_m_KeyboardHandler_5() const { return ___m_KeyboardHandler_5; }
	inline Il2CppObject ** get_address_of_m_KeyboardHandler_5() { return &___m_KeyboardHandler_5; }
	inline void set_m_KeyboardHandler_5(Il2CppObject * value)
	{
		___m_KeyboardHandler_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_KeyboardHandler_5, value);
	}

	inline static int32_t get_offset_of_m_mouseCursor_6() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___m_mouseCursor_6)); }
	inline String_t* get_m_mouseCursor_6() const { return ___m_mouseCursor_6; }
	inline String_t** get_address_of_m_mouseCursor_6() { return &___m_mouseCursor_6; }
	inline void set_m_mouseCursor_6(String_t* value)
	{
		___m_mouseCursor_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_mouseCursor_6, value);
	}

	inline static int32_t get_offset_of_U3CcursorPosU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HumanView_t7348102, ___U3CcursorPosU3Ek__BackingField_7)); }
	inline Nullable_1_t1093596315  get_U3CcursorPosU3Ek__BackingField_7() const { return ___U3CcursorPosU3Ek__BackingField_7; }
	inline Nullable_1_t1093596315 * get_address_of_U3CcursorPosU3Ek__BackingField_7() { return &___U3CcursorPosU3Ek__BackingField_7; }
	inline void set_U3CcursorPosU3Ek__BackingField_7(Nullable_1_t1093596315  value)
	{
		___U3CcursorPosU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
