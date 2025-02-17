﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShateredScreen

#include "Basic.hpp"

#include "ShateredScreen_classes.hpp"
#include "ShateredScreen_parameters.hpp"


namespace SDK
{

// Function ShateredScreen.ShateredScreen_C.ExecuteUbergraph_ShateredScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShateredScreen_C::ExecuteUbergraph_ShateredScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShateredScreen_C", "ExecuteUbergraph_ShateredScreen");

	Params::ShateredScreen_C_ExecuteUbergraph_ShateredScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShateredScreen.ShateredScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShateredScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShateredScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

