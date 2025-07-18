﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassVaultWorld

#include "Basic.hpp"

#include "BattlePassVaultWorld_classes.hpp"
#include "BattlePassVaultWorld_parameters.hpp"


namespace SDK
{

// Function BattlePassVaultWorld.BattlePassVaultWorld_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABattlePassVaultWorld_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::TransitionForward__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionForward__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::TransitionForward__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionForward__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::TransitionBackward__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackward__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::TransitionBackward__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackward__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundForward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  fade                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  FXTransitionFade                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Mid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::TransitionBackgroundForward(double Forward, double fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackgroundForward");

	Params::BattlePassVaultWorld_C_TransitionBackgroundForward Parms{};

	Parms.Forward = Forward;
	Parms.fade = fade;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundBackward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Backward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  fade                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  FXTransitionFade                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Mid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::TransitionBackgroundBackward(double Backward, double fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "TransitionBackgroundBackward");

	Params::BattlePassVaultWorld_C_TransitionBackgroundBackward Parms{};

	Parms.Backward = Backward;
	Parms.fade = fade;
	Parms.FXTransitionFade = FXTransitionFade;
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.PageTransitionIntensityUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         MID_Background                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         MID_Floor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::PageTransitionIntensityUpdate(class UMaterialInstanceDynamic* MID_Background, class UMaterialInstanceDynamic* MID_Floor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "PageTransitionIntensityUpdate");

	Params::BattlePassVaultWorld_C_PageTransitionIntensityUpdate Parms{};

	Parms.MID_Background = MID_Background;
	Parms.MID_Floor = MID_Floor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.SetupBackgroundMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*&                      TextureBackground                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FVaultWorldBackgroundData&       BackgroundInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstanceDynamic*         Mid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::SetupBackgroundMaterial(class UTexture2D*& TextureBackground, struct FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "SetupBackgroundMaterial");

	Params::BattlePassVaultWorld_C_SetupBackgroundMaterial Parms{};

	Parms.TextureBackground = TextureBackground;
	Parms.BackgroundInfo = std::move(BackgroundInfo);
	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);

	TextureBackground = Parms.TextureBackground;
	BackgroundInfo = std::move(Parms.BackgroundInfo);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShowFloor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowEffects                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnUpdateDisplay");

	Params::BattlePassVaultWorld_C_OnUpdateDisplay Parms{};

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABattlePassVaultWorld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionItemDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// const bool                              bShowItemDetails                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnTransitionItemDetails(const bool bShowItemDetails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnTransitionItemDetails");

	Params::BattlePassVaultWorld_C_OnTransitionItemDetails Parms{};

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionBackground
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPlayForward                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBackgroundIntensityLevel               IntensityTransition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnTransitionBackground");

	Params::BattlePassVaultWorld_C_OnTransitionBackground Parms{};

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnInitialBackgroundTransition
// (Event, Protected, BlueprintEvent)

void ABattlePassVaultWorld_C::OnInitialBackgroundTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnInitialBackgroundTransition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupBackground
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class UTexture2D*                 LoadedBackgroundTexture                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FVaultWorldBackgroundData& BackgroundInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABattlePassVaultWorld_C::OnSetupBackground(const class UTexture2D* LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnSetupBackground");

	Params::BattlePassVaultWorld_C_OnSetupBackground Parms{};

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = std::move(BackgroundInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::ItemDetailsIntensity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetailsIntensity__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnIntensityChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bToLowIntensity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::OnIntensityChange(bool bToLowIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "OnIntensityChange");

	Params::BattlePassVaultWorld_C_OnIntensityChange Parms{};

	Parms.bToLowIntensity = bToLowIntensity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::IconDissolve__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "IconDissolve__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::ItemDetailsIntensity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetailsIntensity__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::IconDissolve__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "IconDissolve__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::ItemDetails__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetails__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::Floor_Visibility__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Floor-Visibility__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::ItemDetails__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ItemDetails__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.ExecuteUbergraph_BattlePassVaultWorld
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABattlePassVaultWorld_C::ExecuteUbergraph_BattlePassVaultWorld(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "ExecuteUbergraph_BattlePassVaultWorld");

	Params::BattlePassVaultWorld_C_ExecuteUbergraph_BattlePassVaultWorld Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::Floor_Visibility__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Floor-Visibility__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::BackgroundIntenstiy__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "BackgroundIntenstiy__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::BackgroundIntenstiy__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "BackgroundIntenstiy__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__UpdateFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::Background_Effects__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Background-Effects__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__FinishedFunc
// (BlueprintEvent)

void ABattlePassVaultWorld_C::Background_Effects__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassVaultWorld_C", "Background-Effects__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

