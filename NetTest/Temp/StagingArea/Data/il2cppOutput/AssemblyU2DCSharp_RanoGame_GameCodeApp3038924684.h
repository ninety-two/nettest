#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// RanoGame.GameCodeApp
struct GameCodeApp_t3038924684;
// RanoGame.file.ResCache
struct ResCache_t2338779870;
// RanoGame.events.EventManager
struct EventManager_t1486817501;
// RanoGame.BaseGameLogic
struct BaseGameLogic_t1371758609;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.GameCodeApp
struct  GameCodeApp_t3038924684  : public Il2CppObject
{
public:
	// RanoGame.file.ResCache RanoGame.GameCodeApp::<resCache>k__BackingField
	ResCache_t2338779870 * ___U3CresCacheU3Ek__BackingField_1;
	// RanoGame.events.EventManager RanoGame.GameCodeApp::<eventManager>k__BackingField
	EventManager_t1486817501 * ___U3CeventManagerU3Ek__BackingField_2;
	// RanoGame.BaseGameLogic RanoGame.GameCodeApp::<gameLogic>k__BackingField
	BaseGameLogic_t1371758609 * ___U3CgameLogicU3Ek__BackingField_3;
	// System.Boolean RanoGame.GameCodeApp::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_4;
	// System.Boolean RanoGame.GameCodeApp::<quitting>k__BackingField
	bool ___U3CquittingU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CresCacheU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GameCodeApp_t3038924684, ___U3CresCacheU3Ek__BackingField_1)); }
	inline ResCache_t2338779870 * get_U3CresCacheU3Ek__BackingField_1() const { return ___U3CresCacheU3Ek__BackingField_1; }
	inline ResCache_t2338779870 ** get_address_of_U3CresCacheU3Ek__BackingField_1() { return &___U3CresCacheU3Ek__BackingField_1; }
	inline void set_U3CresCacheU3Ek__BackingField_1(ResCache_t2338779870 * value)
	{
		___U3CresCacheU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CresCacheU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CeventManagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameCodeApp_t3038924684, ___U3CeventManagerU3Ek__BackingField_2)); }
	inline EventManager_t1486817501 * get_U3CeventManagerU3Ek__BackingField_2() const { return ___U3CeventManagerU3Ek__BackingField_2; }
	inline EventManager_t1486817501 ** get_address_of_U3CeventManagerU3Ek__BackingField_2() { return &___U3CeventManagerU3Ek__BackingField_2; }
	inline void set_U3CeventManagerU3Ek__BackingField_2(EventManager_t1486817501 * value)
	{
		___U3CeventManagerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeventManagerU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CgameLogicU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GameCodeApp_t3038924684, ___U3CgameLogicU3Ek__BackingField_3)); }
	inline BaseGameLogic_t1371758609 * get_U3CgameLogicU3Ek__BackingField_3() const { return ___U3CgameLogicU3Ek__BackingField_3; }
	inline BaseGameLogic_t1371758609 ** get_address_of_U3CgameLogicU3Ek__BackingField_3() { return &___U3CgameLogicU3Ek__BackingField_3; }
	inline void set_U3CgameLogicU3Ek__BackingField_3(BaseGameLogic_t1371758609 * value)
	{
		___U3CgameLogicU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgameLogicU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameCodeApp_t3038924684, ___U3CrunningU3Ek__BackingField_4)); }
	inline bool get_U3CrunningU3Ek__BackingField_4() const { return ___U3CrunningU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_4() { return &___U3CrunningU3Ek__BackingField_4; }
	inline void set_U3CrunningU3Ek__BackingField_4(bool value)
	{
		___U3CrunningU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CquittingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameCodeApp_t3038924684, ___U3CquittingU3Ek__BackingField_5)); }
	inline bool get_U3CquittingU3Ek__BackingField_5() const { return ___U3CquittingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CquittingU3Ek__BackingField_5() { return &___U3CquittingU3Ek__BackingField_5; }
	inline void set_U3CquittingU3Ek__BackingField_5(bool value)
	{
		___U3CquittingU3Ek__BackingField_5 = value;
	}
};

struct GameCodeApp_t3038924684_StaticFields
{
public:
	// RanoGame.GameCodeApp RanoGame.GameCodeApp::s_App
	GameCodeApp_t3038924684 * ___s_App_0;

public:
	inline static int32_t get_offset_of_s_App_0() { return static_cast<int32_t>(offsetof(GameCodeApp_t3038924684_StaticFields, ___s_App_0)); }
	inline GameCodeApp_t3038924684 * get_s_App_0() const { return ___s_App_0; }
	inline GameCodeApp_t3038924684 ** get_address_of_s_App_0() { return &___s_App_0; }
	inline void set_s_App_0(GameCodeApp_t3038924684 * value)
	{
		___s_App_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_App_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
