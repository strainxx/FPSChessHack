﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UMG_ChatMessage

#include "Basic.hpp"

#include "UMG_ChatMessage_classes.hpp"
#include "UMG_ChatMessage_parameters.hpp"


namespace SDK
{

// Function UMG_ChatMessage.UMG_ChatMessage_C.ExecuteUbergraph_UMG_ChatMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatMessage_C::ExecuteUbergraph_UMG_ChatMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatMessage_C", "ExecuteUbergraph_UMG_ChatMessage");

	Params::UMG_ChatMessage_C_ExecuteUbergraph_UMG_ChatMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatMessage.UMG_ChatMessage_C.CopyMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ChatMessage_C*               Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatMessage_C::CopyMessage(class UUMG_ChatMessage_C* Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatMessage_C", "CopyMessage");

	Params::UMG_ChatMessage_C_CopyMessage Parms{};

	Parms.Other = Other;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatMessage.UMG_ChatMessage_C.SetMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ChatMessage_C::SetMessage(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatMessage_C", "SetMessage");

	Params::UMG_ChatMessage_C_SetMessage Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatMessage.UMG_ChatMessage_C.SetPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Player1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatMessage_C::SetPlayer(bool Player1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatMessage_C", "SetPlayer");

	Params::UMG_ChatMessage_C_SetPlayer Parms{};

	Parms.Player1 = Player1;

	UObject::ProcessEvent(Func, &Parms);
}

}

