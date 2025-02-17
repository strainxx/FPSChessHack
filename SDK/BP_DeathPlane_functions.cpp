﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DeathPlane

#include "Basic.hpp"

#include "BP_DeathPlane_classes.hpp"
#include "BP_DeathPlane_parameters.hpp"


namespace SDK
{

// Function BP_DeathPlane.BP_DeathPlane_C.ExecuteUbergraph_BP_DeathPlane
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathPlane_C::ExecuteUbergraph_BP_DeathPlane(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathPlane_C", "ExecuteUbergraph_BP_DeathPlane");

	Params::BP_DeathPlane_C_ExecuteUbergraph_BP_DeathPlane Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DeathPlane.BP_DeathPlane_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeathPlane_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DeathPlane_C", "ReceiveActorBeginOverlap");

	Params::BP_DeathPlane_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

