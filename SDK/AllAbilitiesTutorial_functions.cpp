﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AllAbilitiesTutorial

#include "Basic.hpp"

#include "AllAbilitiesTutorial_classes.hpp"
#include "AllAbilitiesTutorial_parameters.hpp"


namespace SDK
{

// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.ExecuteUbergraph_AllAbilitiesTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAllAbilitiesTutorial_C::ExecuteUbergraph_AllAbilitiesTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "ExecuteUbergraph_AllAbilitiesTutorial");

	Params::AllAbilitiesTutorial_C_ExecuteUbergraph_AllAbilitiesTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SetBSide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BSide                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAllAbilitiesTutorial_C::SetBSide(bool BSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SetBSide");

	Params::AllAbilitiesTutorial_C_SetBSide Parms{};

	Parms.BSide = BSide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.Disable
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::Disable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "Disable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.DisableAllNiagara
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Parent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAllAbilitiesTutorial_C::DisableAllNiagara(class USceneComponent* Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "DisableAllNiagara");

	Params::AllAbilitiesTutorial_C_DisableAllNiagara Parms{};

	Parms.Parent = Parent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.Enable
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "Enable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAllAbilitiesTutorial_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "ReceiveTick");

	Params::AllAbilitiesTutorial_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SetSelectedPiece
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPieceTypes                             Piece_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAllAbilitiesTutorial_C::SetSelectedPiece(EPieceTypes Piece_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SetSelectedPiece");

	Params::AllAbilitiesTutorial_C_SetSelectedPiece Parms{};

	Parms.Piece_Type = Piece_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAllAbilitiesTutorial_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.RestartGrenade
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::RestartGrenade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "RestartGrenade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.GlideEnd
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::GlideEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "GlideEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.GlideStart
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::GlideStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "GlideStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.KingSlamStart
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::KingSlamStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "KingSlamStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.KingBeamEnd
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::KingBeamEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "KingBeamEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.KingBeamStart
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::KingBeamStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "KingBeamStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.EndPieceThrow
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::EndPieceThrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "EndPieceThrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.ThrowPiece
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::ThrowPiece()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "ThrowPiece");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.QueenFlyEnd
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::QueenFlyEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "QueenFlyEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.QueenFlyStart
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::QueenFlyStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "QueenFlyStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.RopeEnd
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::RopeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "RopeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.RopeReset
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::RopeReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "RopeReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.EndLArrow
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::EndLArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "EndLArrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.StartLArrow
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::StartLArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "StartLArrow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.KnightChargeEnd
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::KnightChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "KnightChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.KnightChargeStart
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::KnightChargeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "KnightChargeStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.AllyFire
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::AllyFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "AllyFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.PawnStopSprint
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::PawnStopSprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "PawnStopSprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.PawnStartSprint
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::PawnStartSprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "PawnStartSprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.ReprimeGrenade
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::ReprimeGrenade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "ReprimeGrenade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.TriggerGrenade
// (BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::TriggerGrenade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "TriggerGrenade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_0
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_1
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_2
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_3
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_4
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_5
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_6
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_7
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_8
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_9
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_10
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_11
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_11()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_11");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_12
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_12");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_13
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_13()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_13");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_14
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_14()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_14");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_15
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_16
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_16()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_16");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_17
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_17()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_17");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_18
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_18()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_18");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AllAbilitiesTutorial.AllAbilitiesTutorial_C.SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_19
// (Public, BlueprintCallable, BlueprintEvent)

void AAllAbilitiesTutorial_C::SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_19()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AllAbilitiesTutorial_C", "SequenceEvent__ENTRYPOINTAllAbilitiesTutorial_19");

	UObject::ProcessEvent(Func, nullptr);
}

}

