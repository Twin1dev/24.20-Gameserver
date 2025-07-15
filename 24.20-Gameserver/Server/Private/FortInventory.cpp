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

			GiveItem(PlayerController, Item.Item, Item.Count, 0);
		}

		UFortWeaponMeleeItemDefinition* LoadoutPickaxeDef = PlayerController->CosmeticLoadoutPC.Pickaxe->WeaponDefinition;
		if (LoadoutPickaxeDef)
			GiveItem(PlayerController, LoadoutPickaxeDef, 1, 0);
	}
}