﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmartObjectsModule

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "WorldConditions_structs.hpp"
#include "WorldConditions_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SmartObjectsModule.SmartObjectSettings
// 0x0010 (0x0040 - 0x0030)
class USmartObjectSettings final : public UDeveloperSettings
{
public:
	ESmartObjectTagFilteringPolicy                DefaultUserTagsFilteringPolicy;                    // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESmartObjectTagMergingPolicy                  DefaultActivityTagsMergingPolicy;                  // 0x0031(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class USmartObjectWorldConditionSchema> DefaultWorldConditionSchemaClass;            // 0x0038(0x0008)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSettings">();
	}
	static class USmartObjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSettings>();
	}
};

// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
// 0x0018 (0x0048 - 0x0030)
class UBlackboardKeyType_SOClaimHandle final : public UBlackboardKeyType
{
public:
	struct FSmartObjectClaimHandle                Handle;                                            // 0x0030(0x0018)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_SOClaimHandle">();
	}
	static class UBlackboardKeyType_SOClaimHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_SOClaimHandle>();
	}
};

// Class SmartObjectsModule.GenericSmartObject
// 0x0008 (0x0290 - 0x0288)
class AGenericSmartObject final : public AActor
{
public:
	class USmartObjectComponent*                  SOComponent;                                       // 0x0288(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericSmartObject">();
	}
	static class AGenericSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGenericSmartObject>();
	}
};

// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USmartObjectBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AddMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
	static bool AddOrRemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors, const bool bAdd);
	static bool AddOrRemoveSmartObject(class AActor* SmartObject, const bool bEnabled);
	static bool AddSmartObject(class AActor* SmartObjectActor);
	static struct FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName);
	static bool IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle);
	static bool RemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
	static bool RemoveSmartObject(class AActor* SmartObjectActor);
	static void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FSmartObjectClaimHandle& Value);
	static bool SetMultipleSmartObjectsEnabled(const TArray<class AActor*>& SmartObjectActors, const bool bEnabled);
	static bool SetSmartObjectEnabled(class AActor* SmartObjectActor, const bool bEnabled);
	static void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName, const struct FSmartObjectClaimHandle& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectBlueprintFunctionLibrary">();
	}
	static class USmartObjectBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectBlueprintFunctionLibrary>();
	}
};

// Class SmartObjectsModule.SmartObjectCollection
// 0x00B0 (0x0338 - 0x0288)
class ASmartObjectCollection final : public AActor
{
public:
	struct FBox                                   Bounds;                                            // 0x0288(0x0038)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSmartObjectCollectionEntry>    CollectionEntries;                                 // 0x02C0(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap;                 // 0x02D0(0x0050)(Protected, NativeAccessSpecifierProtected)
	TArray<class USmartObjectDefinition*>         Definitions;                                       // 0x0320(0x0010)(Edit, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_330[0x8];                                      // 0x0330(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectCollection">();
	}
	static class ASmartObjectCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectCollection>();
	}
};

// Class SmartObjectsModule.SmartObjectComponent
// 0x0050 (0x02F0 - 0x02A0)
class USmartObjectComponent final : public USceneComponent
{
public:
	TMulticastInlineDelegate<void(const struct FSmartObjectEventData& EventData, const class AActor* Interactor)> OnSmartObjectEvent; // 0x02A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_2B0[0x18];                                     // 0x02B0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class USmartObjectDefinition*                 DefinitionAsset;                                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectHandle                     RegisteredHandle;                                  // 0x02D0(0x0004)(Edit, Transient, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2D4[0xC];                                      // 0x02D4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bCanBePartOfCollection;                            // 0x02E0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2E1[0xF];                                      // 0x02E1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReceiveOnEvent(const struct FSmartObjectEventData& EventData, const class AActor* Interactor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectComponent">();
	}
	static class USmartObjectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectContainerRenderingComponent
// 0x0000 (0x0570 - 0x0570)
class USmartObjectContainerRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectContainerRenderingComponent">();
	}
	static class USmartObjectContainerRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectContainerRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectDebugRenderingComponent
// 0x0000 (0x05C0 - 0x05C0)
class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectDebugRenderingComponent">();
	}
	static class USmartObjectDebugRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectDebugRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectBehaviorDefinition
// 0x0000 (0x0028 - 0x0028)
class USmartObjectBehaviorDefinition : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectBehaviorDefinition">();
	}
	static class USmartObjectBehaviorDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectBehaviorDefinition>();
	}
};

// Class SmartObjectsModule.SmartObjectDefinition
// 0x00B0 (0x00E0 - 0x0030)
class USmartObjectDefinition final : public UDataAsset
{
public:
	TArray<struct FSmartObjectSlotDefinition>     Slots;                                             // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions;                        // 0x0040(0x0010)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                      UserTagFilter;                                     // 0x0050(0x0048)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FWorldConditionQueryDefinition         Preconditions;                                     // 0x0098(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ActivityTags;                                      // 0x00B0(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class USmartObjectWorldConditionSchema> WorldConditionSchemaClass;                   // 0x00D0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ESmartObjectTagMergingPolicy                  ActivityTagsMergingPolicy;                         // 0x00D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ESmartObjectTagFilteringPolicy                UserTagsFilteringPolicy;                           // 0x00D9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectDefinition">();
	}
	static class USmartObjectDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectDefinition>();
	}
};

// Class SmartObjectsModule.SmartObjectSpacePartition
// 0x0000 (0x0028 - 0x0028)
class USmartObjectSpacePartition : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSpacePartition">();
	}
	static class USmartObjectSpacePartition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSpacePartition>();
	}
};

// Class SmartObjectsModule.SmartObjectHashGrid
// 0x00A8 (0x00D0 - 0x0028)
class USmartObjectHashGrid final : public USmartObjectSpacePartition
{
public:
	uint8                                         Pad_28[0xA8];                                      // 0x0028(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectHashGrid">();
	}
	static class USmartObjectHashGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectHashGrid>();
	}
};

// Class SmartObjectsModule.SmartObjectOctree
// 0x00C8 (0x00F0 - 0x0028)
class USmartObjectOctree final : public USmartObjectSpacePartition
{
public:
	uint8                                         Pad_28[0xC8];                                      // 0x0028(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectOctree">();
	}
	static class USmartObjectOctree* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectOctree>();
	}
};

// Class SmartObjectsModule.SmartObjectPersistentCollection
// 0x00B8 (0x0340 - 0x0288)
class ASmartObjectPersistentCollection final : public AActor
{
public:
	struct FSmartObjectContainer                  SmartObjectContainer;                              // 0x0288(0x00B0)(Edit, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_338[0x8];                                      // 0x0338(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectPersistentCollection">();
	}
	static class ASmartObjectPersistentCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectPersistentCollection>();
	}
};

// Class SmartObjectsModule.SmartObjectRenderingComponent
// 0x0000 (0x0570 - 0x0570)
class USmartObjectRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectRenderingComponent">();
	}
	static class USmartObjectRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectSubsystem
// 0x01D8 (0x0208 - 0x0030)
class USmartObjectSubsystem final : public UWorldSubsystem
{
public:
	struct FSoftClassPath                         SpacePartitionClassName;                           // 0x0030(0x0018)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USmartObjectSpacePartition> SpacePartitionClass;                               // 0x0048(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSpacePartition*             SpacePartition;                                    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASmartObjectSubsystemRenderingActor*    RenderingActor;                                    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectContainer                  SmartObjectContainer;                              // 0x0060(0x00B0)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_110[0x20];                                     // 0x0110(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FSmartObjectHandle, struct FSmartObjectRuntime> RuntimeSmartObjects;                 // 0x0130(0x0050)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<struct FSmartObjectSlotHandle, struct FSmartObjectRuntimeSlot> RuntimeSlots;                // 0x0180(0x0050)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1D0[0x10];                                     // 0x01D0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USmartObjectComponent*>          RegisteredSOComponents;                            // 0x01E0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class USmartObjectComponent*>          PendingSmartObjectRegistration;                    // 0x01F0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_200[0x8];                                      // 0x0200(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddTagToInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& tag);
	void AddTagToSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& tag);
	struct FSmartObjectClaimHandle Claim(const struct FSmartObjectRequestResult& RequestResult, const class AActor* UserActor);
	const class USmartObjectBehaviorDefinition* GetBehaviorDefinition(const struct FSmartObjectClaimHandle& ClaimHandle, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass);
	const class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(const struct FSmartObjectRequestResult& RequestResult, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass);
	bool Release(const struct FSmartObjectClaimHandle& ClaimHandle);
	void RemoveTagFromInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& tag);
	bool RemoveTagFromSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& tag);
	bool SetEnabled(const struct FSmartObjectHandle& Handle, const bool bEnabled);
	bool SetSlotEnabled(const struct FSmartObjectSlotHandle& SlotHandle, const bool bEnabled);
	const class USmartObjectBehaviorDefinition* Use(const struct FSmartObjectClaimHandle& ClaimHandle, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass);

	struct FSmartObjectRequestResult FindSmartObject(const struct FSmartObjectRequest& Request, const class AActor* UserActor) const;
	bool FindSmartObjects(const struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor) const;
	const struct FGameplayTagContainer GetInstanceTags(const struct FSmartObjectHandle& Handle) const;
	bool GetSlotLocation(const struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation) const;
	const struct FGameplayTagContainer GetSlotTags(const struct FSmartObjectSlotHandle& SlotHandle) const;
	bool GetSlotTransform(const struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform) const;
	bool GetSlotTransformFromRequestResult(const struct FSmartObjectRequestResult& RequestResult, struct FTransform* OutSlotTransform) const;
	class USmartObjectComponent* GetSmartObjectComponent(const struct FSmartObjectClaimHandle& ClaimHandle) const;
	class USmartObjectComponent* GetSmartObjectComponentByRequestResult(const struct FSmartObjectRequestResult& Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystem">();
	}
	static class USmartObjectSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSubsystem>();
	}
};

// Class SmartObjectsModule.SmartObjectSubsystemRenderingComponent
// 0x0000 (0x05C0 - 0x05C0)
class USmartObjectSubsystemRenderingComponent final : public USmartObjectDebugRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystemRenderingComponent">();
	}
	static class USmartObjectSubsystemRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSubsystemRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectSubsystemRenderingActor
// 0x0008 (0x0290 - 0x0288)
class ASmartObjectSubsystemRenderingActor final : public AActor
{
public:
	class USmartObjectSubsystemRenderingComponent* RenderingComponent;                               // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystemRenderingActor">();
	}
	static class ASmartObjectSubsystemRenderingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectSubsystemRenderingActor>();
	}
};

// Class SmartObjectsModule.SmartObjectTest
// 0x0008 (0x0030 - 0x0028)
class USmartObjectTest : public UObject
{
public:
	class ASmartObjectTestingActor*               SmartObjectTestingActor;                           // 0x0028(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTest">();
	}
	static class USmartObjectTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectTest>();
	}
};

// Class SmartObjectsModule.SmartObjectSimpleQueryTest
// 0x0140 (0x0170 - 0x0030)
class USmartObjectSimpleQueryTest final : public USmartObjectTest
{
public:
	struct FSmartObjectRequest                    Request;                                           // 0x0030(0x0130)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSmartObjectRequestResult>      Results;                                           // 0x0160(0x0010)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSimpleQueryTest">();
	}
	static class USmartObjectSimpleQueryTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSimpleQueryTest>();
	}
};

// Class SmartObjectsModule.SmartObjectTestRenderingComponent
// 0x0000 (0x05C0 - 0x05C0)
class USmartObjectTestRenderingComponent final : public USmartObjectDebugRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTestRenderingComponent">();
	}
	static class USmartObjectTestRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectTestRenderingComponent>();
	}
};

// Class SmartObjectsModule.SmartObjectTestingActor
// 0x0028 (0x02B0 - 0x0288)
class ASmartObjectTestingActor final : public AActor
{
public:
	TArray<class USmartObjectTest*>               Tests;                                             // 0x0288(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class USmartObjectTestRenderingComponent*     RenderingComponent;                                // 0x0298(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USmartObjectSubsystem*                  SmartObjectSubsystem;                              // 0x02A0(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bRunTestsEachFrame;                                // 0x02A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ResetTests();
	void RunTests();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTestingActor">();
	}
	static class ASmartObjectTestingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectTestingActor>();
	}
};

// Class SmartObjectsModule.SmartObjectWorldConditionSchema
// 0x0028 (0x0060 - 0x0038)
class USmartObjectWorldConditionSchema final : public UWorldConditionSchema
{
public:
	uint8                                         Pad_38[0x28];                                      // 0x0038(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectWorldConditionSchema">();
	}
	static class USmartObjectWorldConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectWorldConditionSchema>();
	}
};

}

