﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: POIBannerUI

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
// 0x0008 (0x0008 - 0x0000)
struct POIBannerToastSocialAvatar_SetSocialAvatar final
{
public:
	const class AFortPlayerState*                 PlayerState;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
// 0x0028 (0x0028 - 0x0000)
struct POIBannerToastSocialAvatar_SetSocialAvatarTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              AvatarTexture;                                     // 0x0000(0x0028)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
// 0x0020 (0x0020 - 0x0000)
struct POIBannerToastWidgetBase_GetLocationTextFromTag final
{
public:
	struct FGameplayTag                           LocationTag;                                       // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}

