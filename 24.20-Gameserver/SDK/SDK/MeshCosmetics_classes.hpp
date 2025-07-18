﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshCosmetics

#include "Basic.hpp"

#include "MeshCosmetics_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CustomizableObject_classes.hpp"
#include "GameFeatures_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class MeshCosmetics.MeshCosmeticsApparelItemDefinition
// 0x0028 (0x0800 - 0x07D8)
class UMeshCosmeticsApparelItemDefinition final : public UFortApparelItemDefinition
{
public:
	struct FCosmeticSlotSelector                  SlotValidWithin;                                   // 0x07D8(0x0002)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7DA[0x6];                                      // 0x07DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FApparelCustomizableItemReference      Parameter;                                         // 0x07E0(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsApparelItemDefinition">();
	}
	static class UMeshCosmeticsApparelItemDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsApparelItemDefinition>();
	}
};

// Class MeshCosmetics.MeshCosmeticsVariance_CompileObjects
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsVariance_CompileObjects final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_CompileObjects">();
	}
	static class UMeshCosmeticsVariance_CompileObjects* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_CompileObjects>();
	}
};

// Class MeshCosmetics.FortCustomizableObjectSprayVariant
// 0x01F0 (0x0268 - 0x0078)
class UFortCustomizableObjectSprayVariant final : public UFortCosmeticVariant
{
public:
	struct FGameplayTag                           ActiveSelectionTag;                                // 0x0078(0x0004)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EnabledParamName;                                  // 0x0080(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 ProjectorParamName;                                // 0x0090(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 TextureParamName;                                  // 0x00A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 SaturationParamName;                               // 0x00B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 WearParamName;                                     // 0x00C0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                      TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters; // 0x00D0(0x0048)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantFixedProperties FixedSprayLocation;                        // 0x0118(0x0068)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantSelectablePayload DefaultSprayCustomization;               // 0x0180(0x00A8)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantPayloadClamps SprayNumericConstraints;                     // 0x0228(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_258[0x10];                                     // 0x0258(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomizableObjectSprayVariant">();
	}
	static class UFortCustomizableObjectSprayVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomizableObjectSprayVariant>();
	}
};

// Class MeshCosmetics.FortCustomizableObjectParameterVariant
// 0x0010 (0x0088 - 0x0078)
class UFortCustomizableObjectParameterVariant final : public UFortCosmeticVariantBackedByArray
{
public:
	TArray<struct FCustomizableObjectParamsVariantDef> ParameterOptions;                             // 0x0078(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static void ApplyVariants(class AActor* Actor, const struct FFortAthenaLoadout& Loadout);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomizableObjectParameterVariant">();
	}
	static class UFortCustomizableObjectParameterVariant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomizableObjectParameterVariant>();
	}
};

// Class MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsStep_ComponentRemoval final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_ComponentRemoval">();
	}
	static class UMeshCosmeticsStep_ComponentRemoval* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_ComponentRemoval>();
	}
};

// Class MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
// 0x0000 (0x0030 - 0x0030)
class UMeshCosmeticsOption_ApplyCustomizableObject final : public UFortCosmeticFlowOption
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsOption_ApplyCustomizableObject">();
	}
	static class UMeshCosmeticsOption_ApplyCustomizableObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsOption_ApplyCustomizableObject>();
	}
};

// Class MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_RemoveCustomizableSkeletalComponents">();
	}
	static class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents>();
	}
};

// Class MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsVariance_ApplyParameters final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_ApplyParameters">();
	}
	static class UMeshCosmeticsVariance_ApplyParameters* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_ApplyParameters>();
	}
};

// Class MeshCosmetics.MeshCosmeticsVariance_ManageComponents
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsVariance_ManageComponents final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_ManageComponents">();
	}
	static class UMeshCosmeticsVariance_ManageComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_ManageComponents>();
	}
};

// Class MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsVariance_ProcessVariantAssets final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsVariance_ProcessVariantAssets">();
	}
	static class UMeshCosmeticsVariance_ProcessVariantAssets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsVariance_ProcessVariantAssets>();
	}
};

// Class MeshCosmetics.MeshCosmeticsStep_ChooseParameters
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsStep_ChooseParameters final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_ChooseParameters">();
	}
	static class UMeshCosmeticsStep_ChooseParameters* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_ChooseParameters>();
	}
};

// Class MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsStep_CommitChosenParams final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_CommitChosenParams">();
	}
	static class UMeshCosmeticsStep_CommitChosenParams* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_CommitChosenParams>();
	}
};

// Class MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsStep_HandleGeneratedMesh final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_HandleGeneratedMesh">();
	}
	static class UMeshCosmeticsStep_HandleGeneratedMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_HandleGeneratedMesh>();
	}
};

// Class MeshCosmetics.MeshCosmeticsStep_PlaceComponent
// 0x0000 (0x0058 - 0x0058)
class UMeshCosmeticsStep_PlaceComponent final : public UFortCosmeticStep
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsStep_PlaceComponent">();
	}
	static class UMeshCosmeticsStep_PlaceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsStep_PlaceComponent>();
	}
};

// Class MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
// 0x0000 (0x0028 - 0x0028)
class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies final : public UGameFeatureAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies">();
	}
	static class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies>();
	}
};

// Class MeshCosmetics.InstanceCache_FortGameInstance
// 0x0000 (0x0030 - 0x0030)
class UInstanceCache_FortGameInstance final : public UGameInstanceSubsystem
{
public:
	void OnGameInstanceWorldChanged(class UWorld* OldWorld, class UWorld* NewWorld);
	void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
	void OnGameStateChanged(class AGameStateBase* InGameState);

	void OnPreLoadMap(const struct FWorldContext& WorldContext, const class FString& MapName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InstanceCache_FortGameInstance">();
	}
	static class UInstanceCache_FortGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInstanceCache_FortGameInstance>();
	}
};

// Class MeshCosmetics.MeshCosmeticTagInterface
// 0x0000 (0x0000 - 0x0000)
class IMeshCosmeticTagInterface final
{
public:
	void OnPostCustomizationAnimGameplayTags_BP(const struct FGameplayTagContainer& GameplayTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticTagInterface">();
	}
	static class IMeshCosmeticTagInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMeshCosmeticTagInterface>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};

// Class MeshCosmetics.FortCustomizableInstanceLODManagement
// 0x0000 (0x0028 - 0x0028)
class UFortCustomizableInstanceLODManagement final : public UCustomizableInstanceLODManagementBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomizableInstanceLODManagement">();
	}
	static class UFortCustomizableInstanceLODManagement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomizableInstanceLODManagement>();
	}
};

// Class MeshCosmetics.MeshCosmeticsLayoutSchema
// 0x00A0 (0x0448 - 0x03A8)
class UMeshCosmeticsLayoutSchema final : public UFortApparelLayoutItemDefinition
{
public:
	TMap<struct FCosmeticSlotSelector, struct FCosmeticsLayoutSlot> SlotDataConfig;                  // 0x03A8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<struct FCosmeticSlotSelector, TSoftObjectPtr<class UCustomizableObject>> SlottedCustomizableObjects; // 0x03F8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsLayoutSchema">();
	}
	static class UMeshCosmeticsLayoutSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsLayoutSchema>();
	}
};

// Class MeshCosmetics.MeshCosmeticsAppliedSchemaData
// 0x0028 (0x0050 - 0x0028)
class UMeshCosmeticsAppliedSchemaData final : public UFortCosmeticItemAdditionalData
{
public:
	TSoftObjectPtr<class UMeshCosmeticsLayoutSchema> SchemaAsset;                                    // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsAppliedSchemaData">();
	}
	static class UMeshCosmeticsAppliedSchemaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsAppliedSchemaData>();
	}
};

// Class MeshCosmetics.MeshCosmeticsSupportedSchemaData
// 0x0010 (0x0038 - 0x0028)
class UMeshCosmeticsSupportedSchemaData final : public UFortCosmeticItemAdditionalData
{
public:
	TArray<TSoftObjectPtr<class UMeshCosmeticsLayoutSchema>> SupportedSchemas;                       // 0x0028(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MeshCosmeticsSupportedSchemaData">();
	}
	static class UMeshCosmeticsSupportedSchemaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshCosmeticsSupportedSchemaData>();
	}
};

}

