#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Three_ThreeView_State2712302601.h"
#include "AssemblyU2DCSharp_Three_StoneType545242453.h"
#include "AssemblyU2DCSharp_Three_ThreeNetworkManager_Connec2446630618.h"

// Three.Board
struct Board_t1255348386;
// Three.ThreeView/PlayerInfo[]
struct PlayerInfoU5BU5D_t410804646;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer[0...,0...]
struct SpriteRendererU5BU2CU5D_t1098056644;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Three.ThreeView
struct  ThreeView_t1927256141  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Three.ThreeView::gameDecided
	bool ___gameDecided_2;
	// Three.ThreeView/State Three.ThreeView::state
	int32_t ___state_3;
	// Three.Board Three.ThreeView::board
	Board_t1255348386 * ___board_4;
	// Three.ThreeView/PlayerInfo[] Three.ThreeView::playerList
	PlayerInfoU5BU5D_t410804646* ___playerList_5;
	// UnityEngine.GameObject Three.ThreeView::cursor
	GameObject_t1756533147 * ___cursor_6;
	// UnityEngine.GameObject Three.ThreeView::boardView
	GameObject_t1756533147 * ___boardView_7;
	// UnityEngine.GameObject Three.ThreeView::logo
	GameObject_t1756533147 * ___logo_8;
	// UnityEngine.Sprite Three.ThreeView::circleSprite
	Sprite_t309593783 * ___circleSprite_9;
	// UnityEngine.Sprite Three.ThreeView::crossSprite
	Sprite_t309593783 * ___crossSprite_10;
	// UnityEngine.SpriteRenderer[0...,0...] Three.ThreeView::cells
	SpriteRendererU5BU2CU5D_t1098056644* ___cells_11;
	// Three.StoneType Three.ThreeView::ownStone
	int32_t ___ownStone_12;
	// Three.StoneType Three.ThreeView::currentPhase
	int32_t ___currentPhase_13;
	// Three.ThreeNetworkManager/ConnectType Three.ThreeView::networkConnectType
	int32_t ___networkConnectType_14;

public:
	inline static int32_t get_offset_of_gameDecided_2() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___gameDecided_2)); }
	inline bool get_gameDecided_2() const { return ___gameDecided_2; }
	inline bool* get_address_of_gameDecided_2() { return &___gameDecided_2; }
	inline void set_gameDecided_2(bool value)
	{
		___gameDecided_2 = value;
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_board_4() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___board_4)); }
	inline Board_t1255348386 * get_board_4() const { return ___board_4; }
	inline Board_t1255348386 ** get_address_of_board_4() { return &___board_4; }
	inline void set_board_4(Board_t1255348386 * value)
	{
		___board_4 = value;
		Il2CppCodeGenWriteBarrier(&___board_4, value);
	}

	inline static int32_t get_offset_of_playerList_5() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___playerList_5)); }
	inline PlayerInfoU5BU5D_t410804646* get_playerList_5() const { return ___playerList_5; }
	inline PlayerInfoU5BU5D_t410804646** get_address_of_playerList_5() { return &___playerList_5; }
	inline void set_playerList_5(PlayerInfoU5BU5D_t410804646* value)
	{
		___playerList_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerList_5, value);
	}

	inline static int32_t get_offset_of_cursor_6() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___cursor_6)); }
	inline GameObject_t1756533147 * get_cursor_6() const { return ___cursor_6; }
	inline GameObject_t1756533147 ** get_address_of_cursor_6() { return &___cursor_6; }
	inline void set_cursor_6(GameObject_t1756533147 * value)
	{
		___cursor_6 = value;
		Il2CppCodeGenWriteBarrier(&___cursor_6, value);
	}

	inline static int32_t get_offset_of_boardView_7() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___boardView_7)); }
	inline GameObject_t1756533147 * get_boardView_7() const { return ___boardView_7; }
	inline GameObject_t1756533147 ** get_address_of_boardView_7() { return &___boardView_7; }
	inline void set_boardView_7(GameObject_t1756533147 * value)
	{
		___boardView_7 = value;
		Il2CppCodeGenWriteBarrier(&___boardView_7, value);
	}

	inline static int32_t get_offset_of_logo_8() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___logo_8)); }
	inline GameObject_t1756533147 * get_logo_8() const { return ___logo_8; }
	inline GameObject_t1756533147 ** get_address_of_logo_8() { return &___logo_8; }
	inline void set_logo_8(GameObject_t1756533147 * value)
	{
		___logo_8 = value;
		Il2CppCodeGenWriteBarrier(&___logo_8, value);
	}

	inline static int32_t get_offset_of_circleSprite_9() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___circleSprite_9)); }
	inline Sprite_t309593783 * get_circleSprite_9() const { return ___circleSprite_9; }
	inline Sprite_t309593783 ** get_address_of_circleSprite_9() { return &___circleSprite_9; }
	inline void set_circleSprite_9(Sprite_t309593783 * value)
	{
		___circleSprite_9 = value;
		Il2CppCodeGenWriteBarrier(&___circleSprite_9, value);
	}

	inline static int32_t get_offset_of_crossSprite_10() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___crossSprite_10)); }
	inline Sprite_t309593783 * get_crossSprite_10() const { return ___crossSprite_10; }
	inline Sprite_t309593783 ** get_address_of_crossSprite_10() { return &___crossSprite_10; }
	inline void set_crossSprite_10(Sprite_t309593783 * value)
	{
		___crossSprite_10 = value;
		Il2CppCodeGenWriteBarrier(&___crossSprite_10, value);
	}

	inline static int32_t get_offset_of_cells_11() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___cells_11)); }
	inline SpriteRendererU5BU2CU5D_t1098056644* get_cells_11() const { return ___cells_11; }
	inline SpriteRendererU5BU2CU5D_t1098056644** get_address_of_cells_11() { return &___cells_11; }
	inline void set_cells_11(SpriteRendererU5BU2CU5D_t1098056644* value)
	{
		___cells_11 = value;
		Il2CppCodeGenWriteBarrier(&___cells_11, value);
	}

	inline static int32_t get_offset_of_ownStone_12() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___ownStone_12)); }
	inline int32_t get_ownStone_12() const { return ___ownStone_12; }
	inline int32_t* get_address_of_ownStone_12() { return &___ownStone_12; }
	inline void set_ownStone_12(int32_t value)
	{
		___ownStone_12 = value;
	}

	inline static int32_t get_offset_of_currentPhase_13() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___currentPhase_13)); }
	inline int32_t get_currentPhase_13() const { return ___currentPhase_13; }
	inline int32_t* get_address_of_currentPhase_13() { return &___currentPhase_13; }
	inline void set_currentPhase_13(int32_t value)
	{
		___currentPhase_13 = value;
	}

	inline static int32_t get_offset_of_networkConnectType_14() { return static_cast<int32_t>(offsetof(ThreeView_t1927256141, ___networkConnectType_14)); }
	inline int32_t get_networkConnectType_14() const { return ___networkConnectType_14; }
	inline int32_t* get_address_of_networkConnectType_14() { return &___networkConnectType_14; }
	inline void set_networkConnectType_14(int32_t value)
	{
		___networkConnectType_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
