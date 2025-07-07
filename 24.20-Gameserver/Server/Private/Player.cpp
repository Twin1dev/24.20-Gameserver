#include "Server/Public/Player.h"

#include "Server/Public/Util.h"

void Player::ServerAcknowledgePossessionHook(APlayerController* PlayerController, APawn* P)
{
	PlayerController->AcknowledgedPawn = P;
}

void Player::ServerAttemptAircraftJumpHook(const UFortControllerComponent_Aircraft* ControllerComponent, const FRotator& ClientRotation)
{
	if (!ControllerComponent)
		return;

	AFortPlayerController* PlayerController = Cast<AFortPlayerController>(ControllerComponent->GetOwner());
	if (!PlayerController || !PlayerController->IsInAircraft()) return;

	AFortGameModeAthena* GameMode = Cast<AFortGameModeAthena>(UWorld::GetWorld()->AuthorityGameMode);
	if (!GameMode) return;

	GameMode->RestartPlayer(PlayerController);
	PlayerController->ClientSetRotation(ClientRotation, true);

	static auto StormEffectClass = Util::StaticFindObject<UClass>("/Game/Athena/SafeZone/GE_OutsideSafeZoneDamage.GE_OutsideSafeZoneDamage_C");

	auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

	PlayerState->AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(StormEffectClass, PlayerState->AbilitySystemComponent, 1);
}

void Player::Hook()
{
	auto PlayerController__VTable = AFortPlayerControllerAthena::GetDefaultObj()->VTable;
	void** UFortControllerComponent_Aircraft__VTable = UFortControllerComponent_Aircraft::GetDefaultObj()->VTable;

	THook(ServerAcknowledgePossessionHook, nullptr).VFT(PlayerController__VTable, 0x130);
	THook(ServerAttemptAircraftJumpHook, nullptr).VFT(UFortControllerComponent_Aircraft__VTable, 0xa5);
}