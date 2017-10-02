#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RanoGame_file_ResHandle3695248050.h"

// System.Xml.XmlDocument
struct XmlDocument_t3649534162;
// RanoGame.file.CreateResourceItem`1<System.Xml.XmlDocument>
struct CreateResourceItem_1_t3346163733;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RanoGame.file.BaseItemResHandle`1<System.Xml.XmlDocument>
struct  BaseItemResHandle_1_t2467159014  : public ResHandle_t3695248050
{
public:
	// T RanoGame.file.BaseItemResHandle`1::<item>k__BackingField
	XmlDocument_t3649534162 * ___U3CitemU3Ek__BackingField_2;
	// RanoGame.file.CreateResourceItem`1<T> RanoGame.file.BaseItemResHandle`1::createItem
	CreateResourceItem_1_t3346163733 * ___createItem_3;

public:
	inline static int32_t get_offset_of_U3CitemU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseItemResHandle_1_t2467159014, ___U3CitemU3Ek__BackingField_2)); }
	inline XmlDocument_t3649534162 * get_U3CitemU3Ek__BackingField_2() const { return ___U3CitemU3Ek__BackingField_2; }
	inline XmlDocument_t3649534162 ** get_address_of_U3CitemU3Ek__BackingField_2() { return &___U3CitemU3Ek__BackingField_2; }
	inline void set_U3CitemU3Ek__BackingField_2(XmlDocument_t3649534162 * value)
	{
		___U3CitemU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CitemU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_createItem_3() { return static_cast<int32_t>(offsetof(BaseItemResHandle_1_t2467159014, ___createItem_3)); }
	inline CreateResourceItem_1_t3346163733 * get_createItem_3() const { return ___createItem_3; }
	inline CreateResourceItem_1_t3346163733 ** get_address_of_createItem_3() { return &___createItem_3; }
	inline void set_createItem_3(CreateResourceItem_1_t3346163733 * value)
	{
		___createItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___createItem_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
