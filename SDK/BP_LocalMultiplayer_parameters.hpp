﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocalMultiplayer

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_LocalMultiplayer.BP_LocalMultiplayer_C.ExecuteUbergraph_BP_LocalMultiplayer
// 0x0028 (0x0028 - 0x0000)
struct BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CreateLocal_C*                     CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer) == 0x000008, "Wrong alignment on BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer");
static_assert(sizeof(BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer) == 0x000028, "Wrong size on BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer");
static_assert(offsetof(BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer, EntryPoint) == 0x000000, "Member 'BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer, CallFunc_Create_ReturnValue) == 0x000010, "Member 'BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer, CallFunc_GetPlayerController_ReturnValue_1) == 0x000018, "Member 'BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer, CallFunc_GetPlayerController_ReturnValue_2) == 0x000020, "Member 'BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");

// Function BP_LocalMultiplayer.BP_LocalMultiplayer_C.AfterClickSequence
// 0x0040 (0x0040 - 0x0000)
struct BP_LocalMultiplayer_C_AfterClickSequence final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPickControls_C*                        CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LocalMultiplayer_C_AfterClickSequence) == 0x000008, "Wrong alignment on BP_LocalMultiplayer_C_AfterClickSequence");
static_assert(sizeof(BP_LocalMultiplayer_C_AfterClickSequence) == 0x000040, "Wrong size on BP_LocalMultiplayer_C_AfterClickSequence");
static_assert(offsetof(BP_LocalMultiplayer_C_AfterClickSequence, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BP_LocalMultiplayer_C_AfterClickSequence::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_AfterClickSequence, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_LocalMultiplayer_C_AfterClickSequence::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_AfterClickSequence, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BP_LocalMultiplayer_C_AfterClickSequence::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_AfterClickSequence, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'BP_LocalMultiplayer_C_AfterClickSequence::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_AfterClickSequence, CallFunc_GetPlayerController_ReturnValue_1) == 0x000030, "Member 'BP_LocalMultiplayer_C_AfterClickSequence::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalMultiplayer_C_AfterClickSequence, CallFunc_Create_ReturnValue) == 0x000038, "Member 'BP_LocalMultiplayer_C_AfterClickSequence::CallFunc_Create_ReturnValue' has a wrong offset!");

}

