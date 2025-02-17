﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_ChatMessage

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_ChatMessage.UMG_ChatMessage_C.ExecuteUbergraph_UMG_ChatMessage
// 0x00F0 (0x00F0 - 0x0000)
struct UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0080(0x0028)()
	bool                                          K2Node_CustomEvent_Player1;                        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x00B0(0x0018)()
	class UUMG_ChatMessage_C*                     K2Node_CustomEvent_Other;                          // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00D8(0x0018)()
};
static_assert(alignof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage) == 0x000008, "Wrong alignment on UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage");
static_assert(sizeof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage) == 0x0000F0, "Wrong size on UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, EntryPoint) == 0x000000, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, K2Node_MakeStruct_SlateColor_3) == 0x000080, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, K2Node_CustomEvent_Player1) == 0x0000A8, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::K2Node_CustomEvent_Player1' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, K2Node_CustomEvent_InText) == 0x0000B0, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, K2Node_CustomEvent_Other) == 0x0000C8, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::K2Node_CustomEvent_Other' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, CallFunc_GetVisibility_ReturnValue) == 0x0000D0, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage, CallFunc_GetText_ReturnValue) == 0x0000D8, "Member 'UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage::CallFunc_GetText_ReturnValue' has a wrong offset!");

// Function UMG_ChatMessage.UMG_ChatMessage_C.CopyMessage
// 0x0008 (0x0008 - 0x0000)
struct UMG_ChatMessage_C_CopyMessage final
{
public:
	class UUMG_ChatMessage_C*                     Other;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ChatMessage_C_CopyMessage) == 0x000008, "Wrong alignment on UMG_ChatMessage_C_CopyMessage");
static_assert(sizeof(UMG_ChatMessage_C_CopyMessage) == 0x000008, "Wrong size on UMG_ChatMessage_C_CopyMessage");
static_assert(offsetof(UMG_ChatMessage_C_CopyMessage, Other) == 0x000000, "Member 'UMG_ChatMessage_C_CopyMessage::Other' has a wrong offset!");

// Function UMG_ChatMessage.UMG_ChatMessage_C.SetMessage
// 0x0018 (0x0018 - 0x0000)
struct UMG_ChatMessage_C_SetMessage final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UMG_ChatMessage_C_SetMessage) == 0x000008, "Wrong alignment on UMG_ChatMessage_C_SetMessage");
static_assert(sizeof(UMG_ChatMessage_C_SetMessage) == 0x000018, "Wrong size on UMG_ChatMessage_C_SetMessage");
static_assert(offsetof(UMG_ChatMessage_C_SetMessage, InText) == 0x000000, "Member 'UMG_ChatMessage_C_SetMessage::InText' has a wrong offset!");

// Function UMG_ChatMessage.UMG_ChatMessage_C.SetPlayer
// 0x0001 (0x0001 - 0x0000)
struct UMG_ChatMessage_C_SetPlayer final
{
public:
	bool                                          Player1;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ChatMessage_C_SetPlayer) == 0x000001, "Wrong alignment on UMG_ChatMessage_C_SetPlayer");
static_assert(sizeof(UMG_ChatMessage_C_SetPlayer) == 0x000001, "Wrong size on UMG_ChatMessage_C_SetPlayer");
static_assert(offsetof(UMG_ChatMessage_C_SetPlayer, Player1) == 0x000000, "Member 'UMG_ChatMessage_C_SetPlayer::Player1' has a wrong offset!");

}

