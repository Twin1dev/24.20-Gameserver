﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioGameplay_structs.hpp"
#include "AudioGameplay_classes.hpp"
#include "SoundLibrary_structs.hpp"
#include "GameFeatures_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class SoundLibrary.SoundLibraryContext
// 0x0030 (0x0058 - 0x0028)
class USoundLibraryContext : public UObject
{
public:
	TWeakObjectPtr<class AActor>                  Actor;                                             // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           BaseEventName;                                     // 0x0030(0x0004)(BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForwardToActorOwner;                              // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForwardToAttachedActors;                          // 0x0035(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoResetContext;                                 // 0x0036(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  PlaybackTags;                                      // 0x0038(0x0020)(Transient, NativeAccessSpecifierPublic)

public:
	void OnAddedToActor(const class AActor* InActor);
	void OnRemovedFromActor(const class AActor* InActor);
	bool PlaySound(class USoundBase* sound, struct FSoundLibraryPlaySoundResult& OutResults);

	bool CreateEventName(struct FGameplayTag& OutEventName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryContext">();
	}
	static class USoundLibraryContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryContext>();
	}
};

// Class SoundLibrary.SoundLibraryAnimContext
// 0x0040 (0x0098 - 0x0058)
class USoundLibraryAnimContext : public USoundLibraryContext
{
public:
	struct FSoundLibraryAnimContextSettings       AnimSettings;                                      // 0x0058(0x0024)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimSequenceBase>       Animation;                                         // 0x007C(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent>  MeshComponent;                                     // 0x0084(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSupportsNotifyEnd;                                // 0x008C(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimRate;                                          // 0x0090(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConfigureContext(class AActor* OwningActor, class UAnimSequenceBase* InAnimation, const struct FSoundLibraryAnimContextSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryAnimContext">();
	}
	static class USoundLibraryAnimContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryAnimContext>();
	}
};

// Class SoundLibrary.SoundLibraryAnimNotifyHelper
// 0x0010 (0x0038 - 0x0028)
class USoundLibraryAnimNotifyHelper final : public UObject
{
public:
	TArray<TWeakObjectPtr<class UAudioComponent>> PlayingComps;                                      // 0x0028(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryAnimNotifyHelper">();
	}
	static class USoundLibraryAnimNotifyHelper* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryAnimNotifyHelper>();
	}
};

// Class SoundLibrary.AnimNotify_SoundLibrary
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_SoundLibrary final : public UAnimNotify
{
public:
	class USoundLibraryContext*                   SoundContext;                                      // 0x0038(0x0008)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryAnimNotifyHelper*          NotifyHelper;                                      // 0x0040(0x0008)(BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_SoundLibrary">();
	}
	static class UAnimNotify_SoundLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_SoundLibrary>();
	}
};

// Class SoundLibrary.AnimNotifyState_SoundLibrary
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_SoundLibrary final : public UAnimNotifyState
{
public:
	class USoundLibraryContext*                   SoundContext;                                      // 0x0030(0x0008)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryAnimNotifyHelper*          NotifyHelper;                                      // 0x0038(0x0008)(BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotifyState_SoundLibrary">();
	}
	static class UAnimNotifyState_SoundLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_SoundLibrary>();
	}
};

// Class SoundLibrary.GameFeatureAction_AddSoundLibraryCollection
// 0x0030 (0x0058 - 0x0028)
class UGameFeatureAction_AddSoundLibraryCollection final : public UGameFeatureAction
{
public:
	TArray<class USoundLibraryCollection*>        CollectionList;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class USoundLibrarySubsystem>> TrackedSubsystems;                          // 0x0038(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x10];                                      // 0x0048(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddSoundLibraryCollection">();
	}
	static class UGameFeatureAction_AddSoundLibraryCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddSoundLibraryCollection>();
	}
};

// Class SoundLibrary.SoundLibrary
// 0x0120 (0x0148 - 0x0028)
class USoundLibrary final : public UObject
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> Sounds;                              // 0x0028(0x0050)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FAudioGameplayRequirements             LibraryRequirements;                               // 0x0078(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> FullLibrary;                         // 0x00C8(0x0050)(Edit, DisableEditOnInstance, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class USoundBase*>                     LoadedSoundObjects;                                // 0x0118(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class USoundBase>>      Assets;                                            // 0x0128(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_138[0x10];                                     // 0x0138(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrary">();
	}
	static class USoundLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrary>();
	}
};

// Class SoundLibrary.SoundLibraryComponent
// 0x0038 (0x00E0 - 0x00A8)
class USoundLibraryComponent : public UAudioGameplayComponent
{
public:
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FSoundLibraryPlaySoundResult& Results, const class USoundLibraryContext* Context)> OnSoundLibraryPlayEvent; // 0x00B0(0x0010)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class USoundLibrary*>                  Libraries;                                         // 0x00C0(0x0010)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class USoundLibraryContext>> ContextClasses;                                  // 0x00D0(0x0010)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryComponent">();
	}
	static class USoundLibraryComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryComponent>();
	}
};

// Class SoundLibrary.SoundLibraryProviderInterface
// 0x0000 (0x0000 - 0x0000)
class ISoundLibraryProviderInterface final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryProviderInterface">();
	}
	static class ISoundLibraryProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISoundLibraryProviderInterface>();
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

// Class SoundLibrary.SoundLibraryCollection
// 0x0050 (0x0080 - 0x0030)
class USoundLibraryCollection final : public UDataAsset
{
public:
	TMap<struct FGameplayTag, struct FSoundLibrarySet> Libraries;                                    // 0x0030(0x0050)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryCollection">();
	}
	static class USoundLibraryCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryCollection>();
	}
};

// Class SoundLibrary.SoundLibrarySettings
// 0x0028 (0x0058 - 0x0030)
class USoundLibrarySettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class USoundLibraryCollection> CommonLibraries;                                   // 0x0030(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrarySettings">();
	}
	static class USoundLibrarySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrarySettings>();
	}
};

// Class SoundLibrary.SoundLibrarySimpleContext
// 0x0058 (0x00B0 - 0x0058)
class USoundLibrarySimpleContext : public USoundLibraryContext
{
public:
	struct FSoundLibrarySimpleContextSettings     Settings;                                          // 0x0058(0x0058)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)

public:
	void ConfigureContext(class AActor* OwningActor, const struct FSoundLibrarySimpleContextSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrarySimpleContext">();
	}
	static class USoundLibrarySimpleContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrarySimpleContext>();
	}
};

// Class SoundLibrary.SoundLibrarySubsystem
// 0x00B8 (0x00E8 - 0x0030)
class USoundLibrarySubsystem final : public UWorldSubsystem
{
public:
	TArray<class USoundLibraryCollection*>        LibraryCollections;                                // 0x0030(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class USoundLibrarySimpleContext*             SimpleContext;                                     // 0x0040(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<uint32, struct FSoundLibraryActorData>   ActorDataMap;                                      // 0x0048(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_98[0x50];                                      // 0x0098(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class USoundLibraryContext* AddContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	void AddLibraries(class AActor* Actor, const TArray<class USoundLibrary*>& Libraries);
	void AddLibrary(class AActor* Actor, class USoundLibrary* Library);
	void DisableEventsForActor(const class AActor* Actor);
	void EnableEventsForActor(const class AActor* Actor);
	class USoundLibraryContext* GetContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	void PlaySound(class USoundLibraryContext* Context, struct FSoundLibraryPlaySoundResult* OutResults);
	struct FSoundLibraryPlaySoundResult PlaySoundSimple(class AActor* OwningActor, const struct FSoundLibrarySimpleContextSettings& InSettings);
	bool RemoveContext(const class AActor* Actor, TSubclassOf<class USoundLibraryContext> ContextClass);
	void RemoveLibraries(const class AActor* Actor, const TArray<class USoundLibrary*>& Libraries);
	void RemoveLibrary(const class AActor* Actor, class USoundLibrary* Library);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibrarySubsystem">();
	}
	static class USoundLibrarySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibrarySubsystem>();
	}
};

// Class SoundLibrary.SoundLibraryTagHelperFunctions
// 0x0000 (0x0028 - 0x0028)
class USoundLibraryTagHelperFunctions final : public UObject
{
public:
	static struct FSoundLibraryTag MakeSoundLibraryTag(const struct FGameplayTag& tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundLibraryTagHelperFunctions">();
	}
	static class USoundLibraryTagHelperFunctions* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundLibraryTagHelperFunctions>();
	}
};

}

