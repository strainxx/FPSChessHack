﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BSideKnightChar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PieceChar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BSideKnightChar.BP_BSideKnightChar_C
// 0x0050 (0x0740 - 0x06F0)
class ABP_BSideKnightChar_C final : public ABP_PieceChar_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BSideKnightChar_C;               // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNiagaraComponent*                      SprintTrail;                                       // 0x06F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CrossArrow;                                        // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CrossArrow3P;                                      // 0x0708(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm1;                                        // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          MegaArrow;                                         // 0x0718(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_719[0x3];                                      // 0x0719(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MegaArrowLaunchPower;                              // 0x071C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GattlingBolts;                                     // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_721[0x7];                                      // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           GatlingTimer;                                      // 0x0728(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         NumBoltsFired;                                     // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxBoltsFired;                                     // 0x0734(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MEGAGATLING;                                       // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_739[0x3];                                      // 0x0739(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GatlingDamage;                                     // 0x073C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BSideKnightChar(int32 EntryPoint);
	void ResolveMegaArrowMulti();
	void ResolveMegaArrowServer();
	void ResolveMegaArrow();
	void FinishGatling();
	void SpecialDamageEffects(class ABP_PieceChar_C* Enemy, const struct FVector& Direction);
	void ToggleMegaArrow();
	void ArrowRain();
	void FixGroundFiction();
	void InpActEvt_Fire_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ShootEffectsAll(const struct FVector& Endpoint, const struct FVector& Direction);
	void ShootDirection(const struct FVector& Direction);
	void MovementAbility();
	void MainAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BSideKnightChar_C">();
	}
	static class ABP_BSideKnightChar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BSideKnightChar_C>();
	}
};
static_assert(alignof(ABP_BSideKnightChar_C) == 0x000010, "Wrong alignment on ABP_BSideKnightChar_C");
static_assert(sizeof(ABP_BSideKnightChar_C) == 0x000740, "Wrong size on ABP_BSideKnightChar_C");
static_assert(offsetof(ABP_BSideKnightChar_C, UberGraphFrame_BP_BSideKnightChar_C) == 0x0006F0, "Member 'ABP_BSideKnightChar_C::UberGraphFrame_BP_BSideKnightChar_C' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, SprintTrail) == 0x0006F8, "Member 'ABP_BSideKnightChar_C::SprintTrail' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, CrossArrow) == 0x000700, "Member 'ABP_BSideKnightChar_C::CrossArrow' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, CrossArrow3P) == 0x000708, "Member 'ABP_BSideKnightChar_C::CrossArrow3P' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, SpringArm1) == 0x000710, "Member 'ABP_BSideKnightChar_C::SpringArm1' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, MegaArrow) == 0x000718, "Member 'ABP_BSideKnightChar_C::MegaArrow' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, MegaArrowLaunchPower) == 0x00071C, "Member 'ABP_BSideKnightChar_C::MegaArrowLaunchPower' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, GattlingBolts) == 0x000720, "Member 'ABP_BSideKnightChar_C::GattlingBolts' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, GatlingTimer) == 0x000728, "Member 'ABP_BSideKnightChar_C::GatlingTimer' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, NumBoltsFired) == 0x000730, "Member 'ABP_BSideKnightChar_C::NumBoltsFired' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, MaxBoltsFired) == 0x000734, "Member 'ABP_BSideKnightChar_C::MaxBoltsFired' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, MEGAGATLING) == 0x000738, "Member 'ABP_BSideKnightChar_C::MEGAGATLING' has a wrong offset!");
static_assert(offsetof(ABP_BSideKnightChar_C, GatlingDamage) == 0x00073C, "Member 'ABP_BSideKnightChar_C::GatlingDamage' has a wrong offset!");

}

