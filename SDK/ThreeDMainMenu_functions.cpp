﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThreeDMainMenu

#include "Basic.hpp"

#include "ThreeDMainMenu_classes.hpp"
#include "ThreeDMainMenu_parameters.hpp"


namespace SDK
{

// Function 3DMainMenu.3DMainMenu_C.ExecuteUbergraph_3DMainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreeDMainMenu_C::ExecuteUbergraph_3DMainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("3DMainMenu_C", "ExecuteUbergraph_3DMainMenu");

	Params::ThreeDMainMenu_C_ExecuteUbergraph_3DMainMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 3DMainMenu.3DMainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AThreeDMainMenu_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("3DMainMenu_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

