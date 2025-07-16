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

void Player::GetPlayerViewPointHook(const AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation)
{
	if (!PlayerController)
		return;

	if (PlayerController->StateName.ComparisonIndex == 322)
	{
		Location = PlayerController->LastSpectatorSyncLocation;
		Rotation = PlayerController->LastSpectatorSyncRotation;
	}
	else if (PlayerController->GetViewTarget())
	{
		Location = PlayerController->GetViewTarget()->K2_GetActorLocation();
		Rotation = PlayerController->GetControlRotation();
	}
	else
		return GetPlayerViewPoint(PlayerController, Location, Rotation);
}

void Player::ServerCreateBuildingActorHook(AFortPlayerControllerAthena* PlayerController, const FCreateBuildingActorData& CreateBuildingData)
{
	LOG("ServerCreateBuildingActor");

	if (!PlayerController || PlayerController->IsInAircraft())
		return;

	TArray<ABuildingSMActor*> ExistingBuildings;
	char a;

	if (!PlayerController->BroadcastRemoteClientInfo) return;

	auto RemoteBuildableClass = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->AllPlayerBuildableClassesIndexLookup.SearchForKey([&](UClass* Class, int32 Handle) {
		return Handle == CreateBuildingData.BuildingClassHandle;
		});

	if (!RemoteBuildableClass)
	{
		LOG("No RemoteBuildableClass!");
		return;
	}

	if (CantBuild(UWorld::GetWorld(), RemoteBuildableClass->Get(), CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &ExistingBuildings, &a))
	{
		LOG("CantBuild");
		ExistingBuildings.Free();
		return;
	}

	ABuildingSMActor* NewBuildingActor = Cast<ABuildingSMActor>(Util::SpawnActor(CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, RemoteBuildableClass->Get()));

	if (!NewBuildingActor)
		return;

	if (!PlayerController->PlayerState)
		return;

	NewBuildingActor->TeamIndex = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState)->TeamIndex;
	NewBuildingActor->Team = EFortTeam((Cast<AFortPlayerStateAthena>(PlayerController->PlayerState)->TeamIndex));
	NewBuildingActor->OnRep_Team();
	NewBuildingActor->bPlayerPlaced = true;
	NewBuildingActor->InitializeKismetSpawnedBuildingActor(NewBuildingActor, PlayerController, NewBuildingActor->bPlayerPlaced, nullptr);

	for (ABuildingSMActor* ExistingBuilding : ExistingBuildings)
	{
		ExistingBuilding->K2_DestroyActor();
	}

	UFortItemDefinition* ItemDefinition = UFortKismetLibrary::K2_GetResourceItemDefinition(NewBuildingActor->ResourceType);
	if (!ItemDefinition) return;

	FFortItemEntry* ItemEntry = FortInventory::FindItemEntry(PlayerController, ItemDefinition);
	if (!ItemEntry) return;

	if (!PlayerController->bBuildFree)
	{
		FortInventory::RemoveItem(PlayerController, ItemEntry->ItemGuid, 10);
		FortInventory::Update(PlayerController);
	}

	ExistingBuildings.Free();
}

void Player::ServerBeginEditingBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit)
{
	if (!PlayerController || !PlayerController->MyFortPawn || !BuildingActorToEdit)
		return;

	AFortPlayerStateAthena* PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	BuildingActorToEdit->EditingPlayer = PlayerState;
	BuildingActorToEdit->OnRep_EditingPlayer();

	auto EditToolDefinition = Util::StaticFindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

	if (PlayerController->MyFortPawn->CurrentWeapon->WeaponData != EditToolDefinition)
	{
		FFortItemEntry* ItemEntry = FortInventory::FindItemEntry(PlayerController, EditToolDefinition);

		if (!ItemEntry)
			return;

		PlayerController->ServerExecuteInventoryItem(ItemEntry->ItemGuid);
	}

	AFortWeap_EditingTool* EditTool = Cast<AFortWeap_EditingTool>(PlayerController->MyFortPawn->CurrentWeapon);

	if (EditTool)
	{
		EditTool->EditActor = BuildingActorToEdit;
		EditTool->OnRep_EditActor();
	}
}

void Player::ServerEditBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit, TSubclassOf<class ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored)
{
	if (!PlayerController || !BuildingActorToEdit || !NewBuildingClass || BuildingActorToEdit->bDestroyed || BuildingActorToEdit->EditingPlayer != (AFortPlayerStateAthena*)PlayerController->PlayerState)
		return;

	BuildingActorToEdit->EditingPlayer = nullptr;

	if (auto NewBuilding = ReplaceBuildingActor(BuildingActorToEdit, 1, NewBuildingClass.Get(), BuildingActorToEdit->CurrentBuildingLevel, RotationIterations, bMirrored, PlayerController))
	{
		NewBuilding->bPlayerPlaced = true;
	}
}

void Player::ServerEndEditingBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToStopEditing)
{
	if (!PlayerController || !BuildingActorToStopEditing || BuildingActorToStopEditing->EditingPlayer != (AFortPlayerStateAthena*)PlayerController->PlayerState || !PlayerController->MyFortPawn)
		return;

	BuildingActorToStopEditing->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	BuildingActorToStopEditing->EditingPlayer = nullptr;

	auto EditToolDefinition = Util::StaticFindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

	if (PlayerController->MyFortPawn->CurrentWeapon->WeaponData != EditToolDefinition)
	{
		FFortItemEntry* ItemEntry = FortInventory::FindItemEntry(PlayerController, EditToolDefinition);

		if (!ItemEntry)
			return;

		PlayerController->ServerExecuteInventoryItem(ItemEntry->ItemGuid);
	}

	AFortWeap_EditingTool* EditTool = Cast<AFortWeap_EditingTool>(PlayerController->MyFortPawn->CurrentWeapon);

	if (EditTool)
	{
		EditTool->EditActor = nullptr;
		EditTool->OnRep_EditActor();
	}
}

void Player::OnDamageServerHook(ABuildingSMActor* BuildingActor, float Damage, FGameplayTagContainer& DamageTags, FVector& Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle& EffectContext)
{
	if (!BuildingActor
		|| !InstigatedBy
		|| !BuildingActor->IsA(ABuildingSMActor::StaticClass())
		|| BuildingActor->bPlayerPlaced
		|| !DamageCauser
		|| !DamageCauser->IsA(AFortWeapon::StaticClass())
		|| !((AFortWeapon*)DamageCauser)->WeaponData)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	if (BuildingActor->BuildingResourceAmountOverride.RowName.ToString() == "NAME_None")
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	if (((AFortWeapon*)DamageCauser)->WeaponData->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
	{
		AFortPlayerControllerAthena* PlayerController = (AFortPlayerControllerAthena*)InstigatedBy;
		if (!PlayerController)
			return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

		//static UFortPlaylistAthena* Playlist = Utils::GetGameStateAthena()->CurrentPlaylistInfo.BasePlaylist; // NOLINT(cppcoreguidelines-pro-type-static-cast-downcast)
		//if (!Playlist)
		//	return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

		static UCurveTable* CurveTable = /*(UCurveTable*)Playlist->ResourceRates.Get();*/nullptr;
		if (!CurveTable)
		{
			CurveTable = Util::StaticFindObject<UCurveTable>("/Game/Balance/DataTables/ResourceRates.ResourceRates");

			if (!CurveTable)
				return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
		}

		float Average = 1.f;
		EEvaluateCurveTableResult Result = {};

		UDataTableFunctionLibrary::EvaluateCurveTableRow(CurveTable, BuildingActor->BuildingResourceAmountOverride.RowName, 0.f, &Result, &Average, FString());
		float FinalResourceCount = round(Average / (BuildingActor->GetMaxHealth() / Damage));

		if (FinalResourceCount > 0)
		{
			PlayerController->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, FinalResourceCount, false, Damage == 100.f);
			FortInventory::GiveItem(PlayerController,
				UFortKismetLibrary::K2_GetResourceItemDefinition(BuildingActor->ResourceType),
				FinalResourceCount, 0, true, false);
			FortInventory::Update(PlayerController);
		}

		if (Damage == 100)
		{
			PlayerController->BroadcastRemoteClientInfo->RemoteWeakspotData.HitCount++;
		}
		else
			PlayerController->BroadcastRemoteClientInfo->RemoteWeakspotData.HitCount = 0;
	}

	return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

void Player::Hook()
{
	auto PlayerController__VTable = AFortPlayerControllerAthena::GetDefaultObj()->VTable;
	void** UFortControllerComponent_Aircraft__VTable = UFortControllerComponent_Aircraft::GetDefaultObj()->VTable;

	CantBuild = decltype(CantBuild)(Addresses::BaseAddress + Addresses::CantBuild);
	ReplaceBuildingActor = decltype(ReplaceBuildingActor)(Addresses::BaseAddress + Addresses::ReplaceBuildingActor);

	THook(ServerAcknowledgePossessionHook, nullptr).VFT(PlayerController__VTable, 0x130);
	THook(ServerAttemptAircraftJumpHook, nullptr).VFT(UFortControllerComponent_Aircraft__VTable, 0xa5);
	THook(ServerExecuteInventoryItemHook, nullptr).VFT(PlayerController__VTable, 0x22d);
	THook(ServerCreateBuildingActorHook, nullptr).VFT(PlayerController__VTable, 0x24d);
	THook(ServerBeginEditingBuildingActorHook, nullptr).VFT(PlayerController__VTable, 0x254);
	THook(ServerEditBuildingActorHook, nullptr).VFT(PlayerController__VTable, 0x24F);
	THook(ServerEndEditingBuildingActorHook, nullptr).VFT(PlayerController__VTable, 0x252);
	THook(GetPlayerViewPointHook, &GetPlayerViewPoint).MinHook(Addresses::GetPlayerViewPoint);
	THook(OnDamageServerHook, &OnDamageServer).MinHook(Addresses::OnDamageServer);
}