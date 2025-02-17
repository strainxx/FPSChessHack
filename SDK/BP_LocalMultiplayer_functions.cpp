﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LocalMultiplayer

#include "Basic.hpp"

#include "BP_LocalMultiplayer_classes.hpp"
#include "BP_LocalMultiplayer_parameters.hpp"


namespace SDK
{

// Function BP_LocalMultiplayer.BP_LocalMultiplayer_C.ExecuteUbergraph_BP_LocalMultiplayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LocalMultiplayer_C::ExecuteUbergraph_BP_LocalMultiplayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocalMultiplayer_C", "ExecuteUbergraph_BP_LocalMultiplayer");

	Params::BP_LocalMultiplayer_C_ExecuteUbergraph_BP_LocalMultiplayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LocalMultiplayer.BP_LocalMultiplayer_C.Back
// (BlueprintCallable, BlueprintEvent)

void ABP_LocalMultiplayer_C::Back()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocalMultiplayer_C", "Back");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LocalMultiplayer.BP_LocalMultiplayer_C.Proceed
// (BlueprintCallable, BlueprintEvent)

void ABP_LocalMultiplayer_C::Proceed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocalMultiplayer_C", "Proceed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LocalMultiplayer.BP_LocalMultiplayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LocalMultiplayer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocalMultiplayer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LocalMultiplayer.BP_LocalMultiplayer_C.AfterClickSequence
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LocalMultiplayer_C::AfterClickSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LocalMultiplayer_C", "AfterClickSequence");

	UObject::ProcessEvent(Func, nullptr);
}

}

