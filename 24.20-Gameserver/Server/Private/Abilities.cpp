#include "Server/Public/Abilities.h"

#include "Server/Public/Util.h"

void Abilities::InternalServerTryActiveAbilityHook(UAbilitySystemComponent* AbilitySystemComponent,
    FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey,
    const FGameplayEventData* TriggerEventData)
{
    FGameplayAbilitySpec* Spec = FindAbilitySpecFromHandle(AbilitySystemComponent, Handle);
    if (!Spec)
    {
        LOG("InternalServerTryActiveAbility. Rejecting ClientActivation of ability with invalid SpecHandle!");
        AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
        return;
    }

    const UGameplayAbility* AbilityToActivate = Spec->Ability;

    if (!AbilityToActivate)
        return;

    

    UGameplayAbility* InstancedAbility = nullptr;
    Spec->InputPressed = true;

    // Attempt to activate the ability (server side) and tell the client if it succeeded or failed.
    if (InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
    {
        // TryActivateAbility handles notifying the client of success
    }
    else
    {
        AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
        Spec->InputPressed = false;

        AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
    }
}

FGameplayAbilitySpec* Abilities::FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle)
{
    for (FGameplayAbilitySpec& Spec : AbilitySystemComponent->ActivatableAbilities.Items)
    {
        if (Spec.Handle.Handle == Handle.Handle)
        {
            return &Spec;
        }
    }

    return nullptr;
}

void Abilities::GiveDefaultAbilitySet(UAbilitySystemComponent* AbilitySystemComponent)
{
    UFortAbilitySet* AbilitySet = Util::StaticLoadObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");

    for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); ++i)
    {
        UGameplayAbility* AbilityClass = Cast<UGameplayAbility>(AbilitySet->GameplayAbilities[i].Get()->DefaultObject);
        if (!AbilityClass) continue;
            
        Abilities::GiveAbility(AbilitySystemComponent, AbilityClass);
    }

    for (int i = 0; i < AbilitySet->GrantedGameplayEffects.Num(); ++i)
    {
        UClass* GameplayEffect = AbilitySet->GrantedGameplayEffects[i].GameplayEffect.Get();
        float Level = AbilitySet->GrantedGameplayEffects[i].Level;

        if (!GameplayEffect)
            continue;

        AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GameplayEffect, Level, FGameplayEffectContextHandle());
    }
}

void Abilities::GiveAbility(UAbilitySystemComponent* AbilitySystemComponent, UGameplayAbility* GameplayAbility)
{
    if (!GameplayAbility)
        return;

    FGameplayAbilitySpec Spec;
    SpecConstructor(&Spec, GameplayAbility, 1, -1, nullptr);
    InternalGiveAbility(AbilitySystemComponent, &Spec.Handle, Spec);
}

void Abilities::Hook()
{
    void** AbilityFortSystemComponentAthenaVTable = UFortAbilitySystemComponentAthena::GetDefaultObj()->VTable;
    void** AbilitySystemComponentVTable = UAbilitySystemComponent::GetDefaultObj()->VTable;
    void** AbilityFortSystemComponentVTable = UFortAbilitySystemComponent::GetDefaultObj()->VTable;

    THook(InternalServerTryActiveAbilityHook, nullptr).VFT(AbilityFortSystemComponentAthenaVTable, 0x115);
    THook(InternalServerTryActiveAbilityHook, nullptr).VFT(AbilitySystemComponentVTable, 0x115);
    THook(InternalServerTryActiveAbilityHook, nullptr).VFT(AbilityFortSystemComponentVTable, 0x115);
}