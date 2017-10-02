#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3873055601.h"

// System.Collections.Generic.HashSet`1<Three.ThreePlayer>
struct HashSet_1_t3750524621;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Three.ThreePlayer
struct  ThreePlayer_t1122096471  : public NetworkBehaviour_t3873055601
{
public:
	// System.Int32 Three.ThreePlayer::playerId
	int32_t ___playerId_8;

public:
	inline static int32_t get_offset_of_playerId_8() { return static_cast<int32_t>(offsetof(ThreePlayer_t1122096471, ___playerId_8)); }
	inline int32_t get_playerId_8() const { return ___playerId_8; }
	inline int32_t* get_address_of_playerId_8() { return &___playerId_8; }
	inline void set_playerId_8(int32_t value)
	{
		___playerId_8 = value;
	}
};

struct ThreePlayer_t1122096471_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<Three.ThreePlayer> Three.ThreePlayer::_Players
	HashSet_1_t3750524621 * ____Players_9;
	// System.Int32 Three.ThreePlayer::kCmdCmdToServer
	int32_t ___kCmdCmdToServer_10;
	// System.Int32 Three.ThreePlayer::kRpcRpcToClient
	int32_t ___kRpcRpcToClient_11;

public:
	inline static int32_t get_offset_of__Players_9() { return static_cast<int32_t>(offsetof(ThreePlayer_t1122096471_StaticFields, ____Players_9)); }
	inline HashSet_1_t3750524621 * get__Players_9() const { return ____Players_9; }
	inline HashSet_1_t3750524621 ** get_address_of__Players_9() { return &____Players_9; }
	inline void set__Players_9(HashSet_1_t3750524621 * value)
	{
		____Players_9 = value;
		Il2CppCodeGenWriteBarrier(&____Players_9, value);
	}

	inline static int32_t get_offset_of_kCmdCmdToServer_10() { return static_cast<int32_t>(offsetof(ThreePlayer_t1122096471_StaticFields, ___kCmdCmdToServer_10)); }
	inline int32_t get_kCmdCmdToServer_10() const { return ___kCmdCmdToServer_10; }
	inline int32_t* get_address_of_kCmdCmdToServer_10() { return &___kCmdCmdToServer_10; }
	inline void set_kCmdCmdToServer_10(int32_t value)
	{
		___kCmdCmdToServer_10 = value;
	}

	inline static int32_t get_offset_of_kRpcRpcToClient_11() { return static_cast<int32_t>(offsetof(ThreePlayer_t1122096471_StaticFields, ___kRpcRpcToClient_11)); }
	inline int32_t get_kRpcRpcToClient_11() const { return ___kRpcRpcToClient_11; }
	inline int32_t* get_address_of_kRpcRpcToClient_11() { return &___kRpcRpcToClient_11; }
	inline void set_kRpcRpcToClient_11(int32_t value)
	{
		___kRpcRpcToClient_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
