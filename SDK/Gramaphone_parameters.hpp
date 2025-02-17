﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gramaphone

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Gramaphone.Gramaphone_C.ExecuteUbergraph_Gramaphone
// 0x02C0 (0x02C0 - 0x0000)
struct Gramaphone_C_ExecuteUbergraph_Gramaphone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0034(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x00EC(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_FPS_1;                          // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17D[0x3];                                      // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_FPS;                            // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x01A8(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x0234(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Gramaphone_C_ExecuteUbergraph_Gramaphone) == 0x000008, "Wrong alignment on Gramaphone_C_ExecuteUbergraph_Gramaphone");
static_assert(sizeof(Gramaphone_C_ExecuteUbergraph_Gramaphone) == 0x0002C0, "Wrong size on Gramaphone_C_ExecuteUbergraph_Gramaphone");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, EntryPoint) == 0x000000, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::EntryPoint' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_MakeRotator_ReturnValue) == 0x000028, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000034, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x0000C0, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_ComponentBoundEvent_HitComponent) == 0x0000C8, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_ComponentBoundEvent_OtherActor) == 0x0000D0, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_ComponentBoundEvent_OtherComp) == 0x0000D8, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_ComponentBoundEvent_NormalImpulse) == 0x0000E0, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_ComponentBoundEvent_Hit) == 0x0000EC, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_RandomFloatInRange_ReturnValue) == 0x000178, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_CustomEvent_FPS_1) == 0x00017C, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_CustomEvent_FPS_1' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000180, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x00018C, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, K2Node_CustomEvent_FPS) == 0x000198, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::K2Node_CustomEvent_FPS' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_SelectFloat_ReturnValue) == 0x00019C, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_SelectFloat_ReturnValue_1) == 0x0001A0, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_SelectFloat_ReturnValue_2) == 0x0001A4, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0001A8, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_ExecuteUbergraph_Gramaphone, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x000234, "Member 'Gramaphone_C_ExecuteUbergraph_Gramaphone::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");

// Function Gramaphone.Gramaphone_C.SwapMusic
// 0x0001 (0x0001 - 0x0000)
struct Gramaphone_C_SwapMusic final
{
public:
	bool                                          FPS;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Gramaphone_C_SwapMusic) == 0x000001, "Wrong alignment on Gramaphone_C_SwapMusic");
static_assert(sizeof(Gramaphone_C_SwapMusic) == 0x000001, "Wrong size on Gramaphone_C_SwapMusic");
static_assert(offsetof(Gramaphone_C_SwapMusic, FPS) == 0x000000, "Member 'Gramaphone_C_SwapMusic::FPS' has a wrong offset!");

// Function Gramaphone.Gramaphone_C.SetAudioPosition
// 0x0001 (0x0001 - 0x0000)
struct Gramaphone_C_SetAudioPosition final
{
public:
	bool                                          FPS;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Gramaphone_C_SetAudioPosition) == 0x000001, "Wrong alignment on Gramaphone_C_SetAudioPosition");
static_assert(sizeof(Gramaphone_C_SetAudioPosition) == 0x000001, "Wrong size on Gramaphone_C_SetAudioPosition");
static_assert(offsetof(Gramaphone_C_SetAudioPosition, FPS) == 0x000000, "Member 'Gramaphone_C_SetAudioPosition::FPS' has a wrong offset!");

// Function Gramaphone.Gramaphone_C.BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0024(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature, Hit) == 0x000024, "Member 'Gramaphone_C_BndEvt__Gramaphone_Disc_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

// Function Gramaphone.Gramaphone_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Gramaphone_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gramaphone_C_ReceiveTick) == 0x000004, "Wrong alignment on Gramaphone_C_ReceiveTick");
static_assert(sizeof(Gramaphone_C_ReceiveTick) == 0x000004, "Wrong size on Gramaphone_C_ReceiveTick");
static_assert(offsetof(Gramaphone_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Gramaphone_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

