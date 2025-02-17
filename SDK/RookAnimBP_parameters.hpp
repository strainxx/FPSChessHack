﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RookAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function RookAnimBP.RookAnimBP_C.ExecuteUbergraph_RookAnimBP
// 0x0048 (0x0048 - 0x0000)
struct RookAnimBP_C_ExecuteUbergraph_RookAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_3;       // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RookChar_C*                         K2Node_DynamicCast_AsBP_Rook_Char;                 // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_VSizeXY_ReturnValue;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP) == 0x000008, "Wrong alignment on RookAnimBP_C_ExecuteUbergraph_RookAnimBP");
static_assert(sizeof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP) == 0x000048, "Wrong size on RookAnimBP_C_ExecuteUbergraph_RookAnimBP");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, EntryPoint) == 0x000000, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x000004, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1) == 0x000008, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00000C, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x00000D, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2) == 0x000010, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3) == 0x000014, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_LessEqual_FloatFloat_ReturnValue_2) == 0x000018, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_LessEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_LessEqual_FloatFloat_ReturnValue_3) == 0x000019, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_LessEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, Temp_bool_Variable) == 0x00001A, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000020, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, K2Node_Event_DeltaTimeX) == 0x000024, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000030, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, K2Node_DynamicCast_AsBP_Rook_Char) == 0x000038, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::K2Node_DynamicCast_AsBP_Rook_Char' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_IsFalling_ReturnValue) == 0x000042, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, K2Node_Select_Default) == 0x000043, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RookAnimBP_C_ExecuteUbergraph_RookAnimBP, CallFunc_VSizeXY_ReturnValue) == 0x000044, "Member 'RookAnimBP_C_ExecuteUbergraph_RookAnimBP::CallFunc_VSizeXY_ReturnValue' has a wrong offset!");

// Function RookAnimBP.RookAnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct RookAnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RookAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on RookAnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(RookAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on RookAnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(RookAnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'RookAnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function RookAnimBP.RookAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct RookAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(RookAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on RookAnimBP_C_AnimGraph");
static_assert(sizeof(RookAnimBP_C_AnimGraph) == 0x000010, "Wrong size on RookAnimBP_C_AnimGraph");
static_assert(offsetof(RookAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'RookAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

