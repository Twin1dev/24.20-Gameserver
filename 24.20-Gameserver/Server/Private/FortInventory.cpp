#include "../Public/FortInventory.h"
#include "Server/Public/Util.h"

FFortItemEntry* FortInventory::FindItemEntry(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition)
{
	for (FFortItemEntry& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (ItemEntry.ItemDefinition == ItemDefinition)
		{
			return &ItemEntry;
		}
	}

	return nullptr;
}

FFortItemEntry* FortInventory::FindItemEntry(AFortPlayerController* PlayerController, FGuid Guid)
{
	for (FFortItemEntry& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (ItemEntry.ItemGuid == Guid)
		{
			return &ItemEntry;
		}
	}

	return nullptr;
}

UFortWorldItem* FortInventory::FindItemInstance(AFortPlayerController* PlayerController, FGuid ItemGuid)
{
	for (UFortWorldItem*& Instance : PlayerController->WorldInventory->Inventory.ItemInstances)
	{
		if (Instance->ItemEntry.ItemGuid == ItemGuid)
			return Instance;
	}

	return nullptr;
}

UFortWorldItem* FortInventory::FindItemInstance(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition)
{
	for (UFortWorldItem*& Instance : PlayerController->WorldInventory->Inventory.ItemInstances)
	{
		if (Instance->ItemEntry.ItemDefinition == ItemDefinition)
			return Instance;
	}

	return nullptr;
}


UFortWorldItem* FortInventory::GiveItem(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* ItemDefinition, int Count, int LoadedAmmo, bool bStack, bool bShowToast)
{
	if (!PlayerController || !PlayerController->WorldInventory || !ItemDefinition || Count <= 0)
		return nullptr;

	auto AddToast = [&](FFortItemEntry& ItemEntry)
		{
			if (!bShowToast)
				return;

			FFortItemEntryStateValue StateValue{};
			StateValue.IntValue = 1;
			StateValue.StateType = EFortItemEntryState::ShouldShowItemToast;
			ItemEntry.StateValues.Add(StateValue);
		};

	UFortWorldItem* NewItem = (UFortWorldItem*)ItemDefinition->CreateTemporaryItemInstanceBP(Count, 1);
	if (!NewItem)
		return nullptr;

	int OverStack = 0;
	float MaxStackSize = Util::GetMaxStackSize(ItemDefinition);

	if (bStack)
	{
		for (size_t i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			auto& ItemInstance = PlayerController->WorldInventory->Inventory.ItemInstances[i];

			if (ItemInstance->ItemEntry.ItemDefinition == ItemDefinition)
			{
				if (ItemInstance->ItemEntry.ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()))
					MaxStackSize = 500.f;

				int CurrentCount = ItemInstance->ItemEntry.Count;

				if (CurrentCount < MaxStackSize)
				{
					int StackRoom = MaxStackSize - CurrentCount;
					int AmountToStack = UKismetMathLibrary::min_0(StackRoom, Count);
					int Remaining = Count - AmountToStack;

					FFortItemEntry* ItemEntry = FindItemEntry(PlayerController, ItemInstance->ItemEntry.ItemGuid);
					if (!ItemEntry)
						continue;

					ItemInstance->ItemEntry.Count += AmountToStack;
					ItemEntry->Count += AmountToStack;

					PlayerController->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
					PlayerController->WorldInventory->Inventory.MarkItemDirty(*ItemEntry);

					if (Remaining > 0)
					{
						Util::SpawnPickup(ItemDefinition, PlayerController->MyFortPawn->K2_GetActorLocation(), Remaining, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);
					}

					return ItemInstance;
				}
				else
				{
					Util::SpawnPickup(ItemDefinition, PlayerController->MyFortPawn->K2_GetActorLocation(), Count, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);
					return ItemInstance;
				}
			}
		}
	}

	if (OverStack > 0)
	{
		Util::SpawnPickup(ItemDefinition, PlayerController->MyFortPawn->K2_GetActorLocation(), OverStack, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, PlayerController->MyFortPawn);

		return nullptr;
	}

	NewItem->ItemEntry.Count = Count;
	NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;
	NewItem->ItemEntry.StateValues.Free();

	NewItem->SetOwningControllerForTemporaryItem(PlayerController);

	AddToast(NewItem->ItemEntry);

	PlayerController->WorldInventory->Inventory.ItemInstances.Add(NewItem);
	PlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);

	NewItem->ItemEntry.StateValues.Clear();

	return NewItem;
}

void FortInventory::RemoveItem(AFortPlayerControllerAthena* PlayerController, FGuid Guid, int Count)
{
	if (!PlayerController)
		return;

	FFortItemEntry* ItemEntry = FindItemEntry(PlayerController, Guid);
	if (!ItemEntry) return;

	int NewCount = ItemEntry->Count - Count;

	if (NewCount <= 0)
	{
		for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			UFortWorldItem* ItemInstance = PlayerController->WorldInventory->Inventory.ItemInstances[i];
			FGuid CurrentGuid = ItemInstance->GetItemGuid();

			if (CurrentGuid == Guid)
			{
				ItemInstance->ItemEntry.GenericAttributeValues.Clear();
				ItemInstance->ItemEntry.StateValues.Clear(); // FMemory::Free required?
				PlayerController->WorldInventory->Inventory.ItemInstances.Remove(i);
				break;
			}
		}

		for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
		{
			FFortItemEntry ItemEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries[i];
			FGuid CurrentGuid = ItemEntry.ItemGuid;

			if (CurrentGuid == Guid)
			{
				ItemEntry.GenericAttributeValues.Clear();
				ItemEntry.StateValues.Clear(); // FMemory::Free required?
				PlayerController->WorldInventory->Inventory.ReplicatedEntries.Remove(i);
				break;
			}
		}
	}
	else {
		ItemEntry->Count = NewCount;

		UFortWorldItem* ItemInstance = FindItemInstance(PlayerController, Guid);

		ItemInstance->ItemEntry.Count = NewCount;

		PlayerController->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
		PlayerController->WorldInventory->Inventory.MarkItemDirty(*ItemEntry);
	}
}

void FortInventory::RemoveAllItems(AFortPlayerController* PlayerController, bool bOnlyDroppable, bool bSpawnPickups)
{
	if (!PlayerController || !PlayerController->WorldInventory)
		return;

	FFortItemList& InventoryList = PlayerController->WorldInventory->Inventory;

	for (int32 i = InventoryList.ItemInstances.Num() - 1; i >= 0; i--)
	{
		UFortWorldItem* ItemInstance = InventoryList.ItemInstances[i];

		if (!ItemInstance || (bOnlyDroppable && !ItemInstance->CanBeDropped())) continue;

		InventoryList.ItemInstances.Remove(i);
		InventoryList.ReplicatedEntries.Remove(i);
	}

	InventoryList.MarkArrayDirty();
}

void FortInventory::Update(AFortPlayerControllerAthena* PlayerController)
{
	if (!PlayerController || !PlayerController->WorldInventory)
		return;

	PlayerController->WorldInventory->bRequiresLocalUpdate = true;
	PlayerController->WorldInventory->HandleInventoryLocalUpdate();

	PlayerController->WorldInventory->Inventory.MarkArrayDirty();
}

void FortInventory::GiveStartingItems(AFortPlayerControllerAthena* PlayerController)
{
	if (!PlayerController)
		return;

	AFortGameModeAthena* GameMode = Cast<AFortGameModeAthena>(UWorld::GetWorld()->AuthorityGameMode);
	if (!GameMode)
		return;

	bool bHasStartingItems = false;

	for (const FFortItemEntry& ItemEntry : PlayerController->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (ItemEntry.ItemDefinition && ItemEntry.ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
			bHasStartingItems = true;
	}

	if (!bHasStartingItems)
	{
		for (const FItemAndCount& Item : GameMode->StartingItems)
		{
			if (!Item.Item || (Item.Item && Item.Item->IsA(UFortResourceItemDefinition::StaticClass())))
				continue;

			if (Item.Item->IsA(UFortSmartBuildingItemDefinition::StaticClass()))
				continue;

			GiveItem(PlayerController, Item.Item, Item.Count, 0);
		}

		UFortWeaponMeleeItemDefinition* LoadoutPickaxeDef = PlayerController->CosmeticLoadoutPC.Pickaxe->WeaponDefinition;
		if (LoadoutPickaxeDef)
			GiveItem(PlayerController, LoadoutPickaxeDef, 1, 0);
	}
}