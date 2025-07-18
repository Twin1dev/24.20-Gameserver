﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VKDownloadOnDemandUI

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkIdTextChanged
// 0x0018 (0x0018 - 0x0000)
struct DownloadOnDemandAddProjectModal_HandleDownloadLinkIdTextChanged final
{
public:
	class FText                                   InputLinkCode;                                     // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator
// 0x0020 (0x0020 - 0x0000)
struct DownloadOnDemandAddProjectModal_UpdateLightningViolator final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InText;                                            // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel
// 0x0001 (0x0001 - 0x0000)
struct DownloadOnDemandProjectTile_UpdateLabel final
{
public:
	bool                                          bShowLabel;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

