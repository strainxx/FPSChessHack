﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillcamRecorder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "KillcamEvents_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass KillcamRecorder.KillcamRecorder_C
// 0x0060 (0x0110 - 0x00B0)
class UKillcamRecorder_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class AKillcamSystem_C*                       Killcam_System;                                    // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         ActorId;                                           // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoRecordTransform;                               // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             OldTransform;                                      // 0x00D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPlaybackActor;                                   // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Black;                                             // 0x0101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisableOverride;                                   // 0x0102(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          NoSpawn;                                           // 0x0103(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_KillcamRecorder(int32 EntryPoint);
	void SimulateDestruction();
	void SetBlack();
	void SendTransformIfChanged();
	void SetProtagonist();
	void RecordEvent(EKillcamEvents EventType, const struct FVector& EventInput, const struct FTransform& Transform);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SendTransformEvent();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KillcamRecorder_C">();
	}
	static class UKillcamRecorder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillcamRecorder_C>();
	}
};
static_assert(alignof(UKillcamRecorder_C) == 0x000010, "Wrong alignment on UKillcamRecorder_C");
static_assert(sizeof(UKillcamRecorder_C) == 0x000110, "Wrong size on UKillcamRecorder_C");
static_assert(offsetof(UKillcamRecorder_C, UberGraphFrame) == 0x0000B0, "Member 'UKillcamRecorder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, Killcam_System) == 0x0000B8, "Member 'UKillcamRecorder_C::Killcam_System' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, ActorId) == 0x0000C0, "Member 'UKillcamRecorder_C::ActorId' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, AutoRecordTransform) == 0x0000C8, "Member 'UKillcamRecorder_C::AutoRecordTransform' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, OldTransform) == 0x0000D0, "Member 'UKillcamRecorder_C::OldTransform' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, IsPlaybackActor) == 0x000100, "Member 'UKillcamRecorder_C::IsPlaybackActor' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, Black) == 0x000101, "Member 'UKillcamRecorder_C::Black' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, DisableOverride) == 0x000102, "Member 'UKillcamRecorder_C::DisableOverride' has a wrong offset!");
static_assert(offsetof(UKillcamRecorder_C, NoSpawn) == 0x000103, "Member 'UKillcamRecorder_C::NoSpawn' has a wrong offset!");

}

