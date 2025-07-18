﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioGameplay_FunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UAudioGameplay_FunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetAudioForDamageEvent(class AActor* Receiver, class AActor* Instigator, class USoundBase* ReceiverSound, class USoundBase* InstigatorSound, class USoundBase* ObserverSound, class UObject* __WorldContext, class USoundBase** AudioAsset);
	static void GetAudioForPlayerEvent(class AActor* Target, class USoundBase* OneP_Sound, class USoundBase* ThreeP_Sound, class UObject* __WorldContext, class USoundBase** AudioAsset);
	static bool IsActorLocal(class AActor* Actor, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AudioGameplay_FunctionLibrary_C">();
	}
	static class UAudioGameplay_FunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplay_FunctionLibrary_C>();
	}
};

}

