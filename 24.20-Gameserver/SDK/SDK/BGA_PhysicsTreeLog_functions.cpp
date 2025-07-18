﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_PhysicsTreeLog

#include "Basic.hpp"

#include "BGA_PhysicsTreeLog_classes.hpp"
#include "BGA_PhysicsTreeLog_parameters.hpp"


namespace SDK
{

// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AdjustWaterSettings
// (BlueprintCallable, BlueprintEvent)

void ABGA_PhysicsTreeLog_C::AdjustWaterSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "AdjustWaterSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AwakeStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              SimulatingComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsAwake                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::AwakeStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "AwakeStateChanged");

	Params::BGA_PhysicsTreeLog_C_AwakeStateChanged Parms{};

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSmallSide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  SplitPercentage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 LocalZOffset                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::CalculateSplitOffset(bool bSmallSide, double SplitPercentage, double* LocalZOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "CalculateSplitOffset");

	Params::BGA_PhysicsTreeLog_C_CalculateSplitOffset Parms{};

	Parms.bSmallSide = bSmallSide;
	Parms.SplitPercentage = SplitPercentage;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalZOffset != nullptr)
		*LocalZOffset = Parms.LocalZOffset;
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSmallSide                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  SplitPercentage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 SplitScale                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::CalculateSplitScale(bool bSmallSide, double SplitPercentage, double* SplitScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "CalculateSplitScale");

	Params::BGA_PhysicsTreeLog_C_CalculateSplitScale Parms{};

	Parms.bSmallSide = bSmallSide;
	Parms.SplitPercentage = SplitPercentage;

	UObject::ProcessEvent(Func, &Parms);

	if (SplitScale != nullptr)
		*SplitScale = Parms.SplitScale;
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CE_SplashInWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FVector&                   SplashLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::CE_SplashInWater(const struct FVector& SplashLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "CE_SplashInWater");

	Params::BGA_PhysicsTreeLog_C_CE_SplashInWater Parms{};

	Parms.SplashLocation = std::move(SplashLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Control2dSimForces
// (BlueprintCallable, BlueprintEvent)

void ABGA_PhysicsTreeLog_C::Control2dSimForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "Control2dSimForces");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ExecuteUbergraph_BGA_PhysicsTreeLog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::ExecuteUbergraph_BGA_PhysicsTreeLog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ExecuteUbergraph_BGA_PhysicsTreeLog");

	Params::BGA_PhysicsTreeLog_C_ExecuteUbergraph_BGA_PhysicsTreeLog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetAnalyticsReporterActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_PhysicsTree_Reporter_C*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AB_PhysicsTree_Reporter_C* ABGA_PhysicsTreeLog_C::GetAnalyticsReporterActor(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "GetAnalyticsReporterActor");

	Params::BGA_PhysicsTreeLog_C_GetAnalyticsReporterActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetPlayerImpulseVelocityFromImpactVelocity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Minimum_Met                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double*                                 Impulse                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool* Minimum_Met, double* Impulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "GetPlayerImpulseVelocityFromImpactVelocity");

	Params::BGA_PhysicsTreeLog_C_GetPlayerImpulseVelocityFromImpactVelocity Parms{};

	Parms.Impact = Impact;

	UObject::ProcessEvent(Func, &Parms);

	if (Minimum_Met != nullptr)
		*Minimum_Met = Parms.Minimum_Met;

	if (Impulse != nullptr)
		*Impulse = Parms.Impulse;
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.LogDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::LogDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "LogDamaged");

	Params::BGA_PhysicsTreeLog_C_LogDamaged Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnComponentHit_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FVector&                   NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_PhysicsTreeLog_C::OnComponentHit_Event_0(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnComponentHit_Event_0");

	Params::BGA_PhysicsTreeLog_C_OnComponentHit_Event_0 Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_PhysicsTreeLog_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnDeathPlayEffects");

	Params::BGA_PhysicsTreeLog_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_PhysicsTreeLog_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnDeathServer");

	Params::BGA_PhysicsTreeLog_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonEnteredWater
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSphericalPontoon&         Pontoon                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABGA_PhysicsTreeLog_C::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnPontoonEnteredWater");

	Params::BGA_PhysicsTreeLog_C_OnPontoonEnteredWater Parms{};

	Parms.Pontoon = std::move(Pontoon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonExitedWater
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSphericalPontoon&         Pontoon                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABGA_PhysicsTreeLog_C::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnPontoonExitedWater");

	Params::BGA_PhysicsTreeLog_C_OnPontoonExitedWater Parms{};

	Parms.Pontoon = std::move(Pontoon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnRep_BreakTreeDamage
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_PhysicsTreeLog_C::OnRep_BreakTreeDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "OnRep_BreakTreeDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_PhysicsTreeLog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ReceiveEndPlay");

	Params::BGA_PhysicsTreeLog_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.RemoveSnow
// (BlueprintCallable, BlueprintEvent)

void ABGA_PhysicsTreeLog_C::RemoveSnow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "RemoveSnow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReportTreeFellingToAnalytics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           FelledBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABGA_PhysicsTreeLog_C::ReportTreeFellingToAnalytics(class AActor* FelledBy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "ReportTreeFellingToAnalytics");

	Params::BGA_PhysicsTreeLog_C_ReportTreeFellingToAnalytics Parms{};

	Parms.FelledBy = FelledBy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Update Water FX
// (BlueprintCallable, BlueprintEvent)

void ABGA_PhysicsTreeLog_C::Update_Water_FX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_PhysicsTreeLog_C", "Update Water FX");

	UObject::ProcessEvent(Func, nullptr);
}

}

