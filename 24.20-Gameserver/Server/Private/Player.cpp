#include "Server/Public/Player.h"

#include "Server/Public/Util.h"

#include "Server/Public/FortInventory.h"

void Player::ServerAcknowledgePossessionHook(AFortPlayerControllerAthena* PlayerController, APawn* P)
{
	PlayerController->AcknowledgedPawn = P;

	AFortPlayerStateAthena* PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	if (!PlayerState) return;

	PlayerState->HeroType = PlayerController->CosmeticLoadoutPC.Character->HeroDefinition;
	UFortKismetLibrary::UpdatePlayerCustomCharacterPartsVisualization(PlayerState);

	FortInventory::GiveStartingItems((AFortPlayerControllerAthena*)PlayerController);
	FortInventory::Update((AFortPlayerControllerAthena*)PlayerController);
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

void Player::ServerExecuteInventoryItemHook(const AFortPlayerControllerAthena* PlayerController, const FGuid& ItemGuid)
{
	if (!PlayerController || !PlayerController->MyFortPawn || !PlayerController->WorldInventory)
		return;

	for (FFortItemEntry& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (!ItemEntry.ItemDefinition || !ItemEntry.ItemGuid.IsValid())
			continue;

		if (ItemEntry.ItemGuid == ItemGuid && ItemGuid.IsValid())
		{
			if (ItemEntry.ItemDefinition->IsA(UFortDecoItemDefinition::StaticClass()))
			{
				PlayerController->MyFortPawn->PickUpActor(nullptr, (UFortDecoItemDefinition*)ItemEntry.ItemDefinition);

				if (PlayerController->MyFortPawn->CurrentWeapon)
				{
					PlayerController->MyFortPawn->CurrentWeapon->ItemEntryGuid = ItemGuid;

					if (AFortDecoTool_ContextTrap* DecoTool_ContextTrap = Cast<AFortDecoTool_ContextTrap>(PlayerController->MyFortPawn->CurrentWeapon))
					{
						UFortContextTrapItemDefinition* ContextTrapItemDefinition = Cast<UFortContextTrapItemDefinition>(ItemEntry.ItemDefinition);

						DecoTool_ContextTrap->ContextTrapItemDefinition = ContextTrapItemDefinition;
					}
				}
			}

			PlayerController->MyFortPawn->EquipWeaponDefinition(Cast<UFortWeaponItemDefinition>(ItemEntry.ItemDefinition), ItemGuid, FGuid(), false);
			break;
		}
	}
}

void Player::Hook()
{
	auto PlayerController__VTable = AFortPlayerControllerAthena::GetDefaultObj()->VTable;
	void** UFortControllerComponent_Aircraft__VTable = UFortControllerComponent_Aircraft::GetDefaultObj()->VTable;

	THook(ServerAcknowledgePossessionHook, nullptr).VFT(PlayerController__VTable, 0x130);
	THook(ServerAttemptAircraftJumpHook, nullptr).VFT(UFortControllerComponent_Aircraft__VTable, 0xa5);
	THook(ServerExecuteInventoryItemHook, nullptr).VFT(PlayerController__VTable, 0x22d);
}