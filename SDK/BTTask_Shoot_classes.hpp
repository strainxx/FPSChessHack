﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_Shoot

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_Shoot.BTTask_Shoot_C
// 0x0008 (0x00B0 - 0x00A8)
class UBTTask_Shoot_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ExecuteUbergraph_BTTask_Shoot(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_Shoot_C">();
	}
	static class UBTTask_Shoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_Shoot_C>();
	}
};
static_assert(alignof(UBTTask_Shoot_C) == 0x000008, "Wrong alignment on UBTTask_Shoot_C");
static_assert(sizeof(UBTTask_Shoot_C) == 0x0000B0, "Wrong size on UBTTask_Shoot_C");
static_assert(offsetof(UBTTask_Shoot_C, UberGraphFrame) == 0x0000A8, "Member 'UBTTask_Shoot_C::UberGraphFrame' has a wrong offset!");

}

