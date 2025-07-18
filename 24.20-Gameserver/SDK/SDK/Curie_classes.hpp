﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Curie

#include "Basic.hpp"

#include "Curie_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ModularGameplay_classes.hpp"


namespace SDK
{

// Class Curie.CurieComponent
// 0x0010 (0x00B0 - 0x00A0)
class UCurieComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x10];                                      // 0x00A0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieComponent">();
	}
	static class UCurieComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieComponent>();
	}
};

// Class Curie.CurieElementGameplayEffectOwner
// 0x0000 (0x0028 - 0x0028)
class UCurieElementGameplayEffectOwner : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieElementGameplayEffectOwner">();
	}
	static class UCurieElementGameplayEffectOwner* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieElementGameplayEffectOwner>();
	}
};

// Class Curie.CurieEntityStateBehavior
// 0x0098 (0x00C0 - 0x0028)
class UCurieEntityStateBehavior : public UCurieElementGameplayEffectOwner
{
public:
	struct FGameplayTagContainer                  RequiredAttachedElements;                          // 0x0028(0x0020)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                  RequiredInteractingElements;                       // 0x0048(0x0020)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                  AllowedAttachmentEntityTypes;                      // 0x0068(0x0020)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>          OnBeginEffects;                                    // 0x0088(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>          OngoingEffects;                                    // 0x0098(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>          OnEndEffects;                                      // 0x00A8(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                         bShouldDetach : 1;                                 // 0x00B8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bSkipExecuteAttachDetach : 1;                      // 0x00B8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieEntityStateBehavior">();
	}
	static class UCurieEntityStateBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieEntityStateBehavior>();
	}
};

// Class Curie.CurieGlobals
// 0x0028 (0x0050 - 0x0028)
class UCurieGlobals final : public UObject
{
public:
	bool                                          bEnableCurie;                                      // 0x0028(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         CurieGlobalsClassName;                             // 0x0030(0x0018)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurieManager*                          RegisteredCurieManager;                            // 0x0048(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieGlobals">();
	}
	static class UCurieGlobals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieGlobals>();
	}
};

// Class Curie.CurieElementAllocationHandler
// 0x0000 (0x0028 - 0x0028)
class UCurieElementAllocationHandler : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieElementAllocationHandler">();
	}
	static class UCurieElementAllocationHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieElementAllocationHandler>();
	}
};

// Class Curie.CurieElementInteractWithElementHandler
// 0x0008 (0x0030 - 0x0028)
class UCurieElementInteractWithElementHandler : public UObject
{
public:
	ECurieHandlerPriority                         HandlerPriority;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ECurieHandlerBehavior                         HandlerBehavior;                                   // 0x0029(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ElementTag;                                        // 0x002C(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieElementInteractWithElementHandler">();
	}
	static class UCurieElementInteractWithElementHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieElementInteractWithElementHandler>();
	}
};

// Class Curie.CurieElementInteractWithMaterialHandler
// 0x0008 (0x0030 - 0x0028)
class UCurieElementInteractWithMaterialHandler : public UObject
{
public:
	ECurieHandlerPriority                         HandlerPriority;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ECurieHandlerBehavior                         HandlerBehavior;                                   // 0x0029(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ElementTag;                                        // 0x002C(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieElementInteractWithMaterialHandler">();
	}
	static class UCurieElementInteractWithMaterialHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieElementInteractWithMaterialHandler>();
	}
};

// Class Curie.CurieElementAttachHandler
// 0x0038 (0x0060 - 0x0028)
class UCurieElementAttachHandler : public UCurieElementGameplayEffectOwner
{
public:
	ECurieHandlerPriority                         HandlerPriority;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECurieHandlerBehavior                         HandlerBehavior;                                   // 0x0029(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ElementTag;                                        // 0x002C(0x0004)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>          OnBeginAttachmentEffects;                          // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>          OngoingAttachmentEffects;                          // 0x0040(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>          OnEndAttachmentEffects;                            // 0x0050(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieElementAttachHandler">();
	}
	static class UCurieElementAttachHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieElementAttachHandler>();
	}
};

// Class Curie.CurieElementAttachConditionHandler
// 0x0008 (0x0030 - 0x0028)
class UCurieElementAttachConditionHandler : public UObject
{
public:
	ECurieHandlerPriority                         HandlerPriority;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ElementTag;                                        // 0x002C(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieElementAttachConditionHandler">();
	}
	static class UCurieElementAttachConditionHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieElementAttachConditionHandler>();
	}
};

// Class Curie.CurieElementInteractWithContainerHandler
// 0x0048 (0x0070 - 0x0028)
class UCurieElementInteractWithContainerHandler : public UCurieElementGameplayEffectOwner
{
public:
	ECurieHandlerPriority                         HandlerPriority;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECurieHandlerBehavior                         HandlerBehavior;                                   // 0x0029(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ElementTag;                                        // 0x002C(0x0004)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>          OnInstantInteractionEffects;                       // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>          OnBeginInteractionEffects;                         // 0x0040(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>          OngoingInteractionEffects;                         // 0x0050(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCurieEffectContainer>          OnEndInteractionEffects;                           // 0x0060(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieElementInteractWithContainerHandler">();
	}
	static class UCurieElementInteractWithContainerHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieElementInteractWithContainerHandler>();
	}
};

// Class Curie.CurieInterface
// 0x0000 (0x0000 - 0x0000)
class ICurieInterface final
{
public:
	void OnCurieContainerAcquired_BP(const struct FCurieContainerHandle& CurieContainerHandle);
	void OnCurieContainerReleased_BP(const struct FCurieContainerHandle& CurieContainerHandle);
	void OnCurieContainerReparented_BP(const struct FCurieContainerHandle& CurieContainerHandle);
	void OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteractEnded_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieStateAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieInterface">();
	}
	static class ICurieInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICurieInterface>();
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

// Class Curie.CurieManager
// 0x0590 (0x0630 - 0x00A0)
class UCurieManager : public UGameStateComponent
{
public:
	TSubclassOf<class UCurieComponent>            CurieComponentClass;                               // 0x00A0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   CurieManagerRegistryName;                          // 0x00A8(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   MaterialDataRegistryName;                          // 0x00AC(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   ElementDataRegistryName;                           // 0x00B0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   EntityStateDataRegistryName;                       // 0x00B4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_B8[0x298];                                     // 0x00B8(0x0298)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, class UCurieElementAllocationHandler*> ElementAllocationHandlers;      // 0x0350(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FCurieElementAttachHandlersContainer> ElementAttachmentHandlers; // 0x03A0(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FCurieElementAttachConditionHandlersContainer> ElementAttachmentConditionHandlers; // 0x03F0(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FCurieElementPairKey, struct FCurieElementInteractWithElementHandlersContainer> ElementInteractWithElementHandlers; // 0x0440(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FCurieElementInteractWithMaterialHandlersContainer> ElementInteractWithMaterialHandlers; // 0x0490(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FCurieElementInteractWithContainerHandlersContainer> ElementInteractWithContainerHandlers; // 0x04E0(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TArray<class UCurieManagerComponent*>         CurieManagerComponents;                            // 0x0530(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_540[0xF0];                                     // 0x0540(0x00F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BindDelegateForCurieElementAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void BindDelegateForCurieElementDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void BindDelegateForCurieElementInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void BindDelegateForCurieStateAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate);
	void BindDelegateForCurieStateDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate);
	void HandleContainerOwnerDestroyed(class AActor* OwnerActor);
	void UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& ElementIdentifier)>& Delegate);
	void UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate);
	void UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, const TDelegate<void(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier)>& Delegate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieManager">();
	}
	static class UCurieManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieManager>();
	}
};

// Class Curie.CurieManagerComponentInterface
// 0x0000 (0x0000 - 0x0000)
class ICurieManagerComponentInterface final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieManagerComponentInterface">();
	}
	static class ICurieManagerComponentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICurieManagerComponentInterface>();
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

// Class Curie.CurieManagerComponentConfig
// 0x0010 (0x0040 - 0x0030)
class UCurieManagerComponentConfig : public UPrimaryDataAsset
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ConfigName;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           ConfigTag;                                         // 0x003C(0x0004)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieManagerComponentConfig">();
	}
	static class UCurieManagerComponentConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieManagerComponentConfig>();
	}
};

// Class Curie.CurieManagerComponent
// 0x0008 (0x0030 - 0x0028)
class UCurieManagerComponent : public UObject
{
public:
	class UCurieManagerComponentConfig*           CachedConfig;                                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CurieManagerComponent">();
	}
	static class UCurieManagerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurieManagerComponent>();
	}
};

}

