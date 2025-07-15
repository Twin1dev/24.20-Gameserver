#pragma once

#include "framework.h"

#include "Addresses.h"

namespace Abilities
{
    static inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle, FPredictionKey, UGameplayAbility**, void*, const FGameplayEventData*) = decltype(InternalTryActivateAbility)(InSDKUtils::GetImageBase() + Addresses::InternalTryActivateAbility);
    static inline FGameplayAbilitySpecHandle* (*InternalGiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(InternalGiveAbility)(InSDKUtils::GetImageBase() + Addresses::InternalGiveAbility);
    static inline __int64 (*SpecConstructor)(FGameplayAbilitySpec*, UObject*, int, int, UObject*) = decltype(SpecConstructor)(InSDKUtils::GetImageBase() + Addresses::SpecConstructor);
    static inline FGameplayAbilitySpecHandle(*GiveAbilityAndActivateOnceFn)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec, FGameplayEventData*) = decltype(GiveAbilityAndActivateOnceFn)(InSDKUtils::GetImageBase() + Addresses::GiveAbilityAndActivateOnce);

    void InternalServerTryActiveAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData);
    FGameplayAbilitySpec* FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle);

    void GiveDefaultAbilitySet(UAbilitySystemComponent* AbilitySystemComponent);
    void GiveAbility(UAbilitySystemComponent* AbilitySystemComponent, UGameplayAbility* GameplayAbility);
    void GiveAbilityAndActivateOnce(UAbilitySystemComponent* AbilitySystemComponent, UGameplayAbility* GameplayAbility, UObject* SourceObject);

    void ExecuteGameplayCue(AFortPlayerPawnAthena* Pawn, FGameplayTag GameplayTag);

    void Hook();
}