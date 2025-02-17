﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CopyPose

#include "Basic.hpp"

#include "CopyPose_classes.hpp"
#include "CopyPose_parameters.hpp"


namespace SDK
{

// Function CopyPose.CopyPose_C.ExecuteUbergraph_CopyPose
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCopyPose_C::ExecuteUbergraph_CopyPose(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopyPose_C", "ExecuteUbergraph_CopyPose");

	Params::CopyPose_C_ExecuteUbergraph_CopyPose Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CopyPose.CopyPose_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UCopyPose_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopyPose_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CopyPose.CopyPose_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UCopyPose_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CopyPose_C", "AnimGraph");

	Params::CopyPose_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

