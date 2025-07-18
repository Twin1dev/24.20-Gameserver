﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobby

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton
// 0x0078 (0x0078 - 0x0000)
struct AthenaLobby_C_ConfigureGenericLinkButton final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue; // 0x0040(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};

// Function AthenaLobby.AthenaLobby_C.DisplayGlyphQuestUpdated
// 0x0004 (0x0004 - 0x0000)
struct AthenaLobby_C_DisplayGlyphQuestUpdated final
{
public:
	int32                                         NewGlyphs;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated
// 0x0008 (0x0008 - 0x0000)
struct AthenaLobby_C_DisplayStoreUpdated final
{
public:
	class UStoreToastRequest*                     StoreUpdatedRequest;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
// 0x0238 (0x0238 - 0x0000)
struct AthenaLobby_C_ExecuteUbergraph_AthenaLobby final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortLobbyType                                Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortLobbyType                                Temp_byte_Variable_5;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_UserWidget;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUserWidget* UserWidget)> K2Node_CreateDelegate_OutputDelegate_1;           // 0x0028(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CreateWidgetAsync*     CallFunc_CreateWidgetAsync_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPickerContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStoreToastRequest*                     K2Node_Event_StoreUpdatedRequest;                  // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldBeginRequest_ReturnValue;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStoreCallout                          CallFunc_GetToast_ReturnValue;                     // 0x0078(0x00A0)()
	bool                                          CallFunc_IsRequestReady_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x011C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivated_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortLobbyType                                K2Node_Event_LobbyType;                            // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12B[0x5];                                      // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortPlaylistAthena*              K2Node_Event_PlaylistData;                         // 0x0130(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13A[0x2];                                      // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NewGlyphs;                            // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x014C(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0158(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAthenaLobbyMatchmakingPlay_C*          K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play; // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBROnly_ReturnValue;                     // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_183[0x1];                                      // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0184(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0194(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_2;                 // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_Select_Default_2;                           // 0x01B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue;  // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_3;                 // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasUnseenQuests;                     // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA[0x6];                                      // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x01E0(0x0018)()
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;    // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1;  // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0218(0x0018)()
	ESlateVisibility                              K2Node_Event_NewVisibility;                        // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.HandleLobbyColorSchemeChange
// 0x0050 (0x0050 - 0x0000)
struct AthenaLobby_C_HandleLobbyColorSchemeChange final
{
public:
	struct FLinearColor                           NewColorScheme;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDefaultScheme;                                  // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaLobbyMatchmakingPlay_C*          K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.HandleUnseenQuestsChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaLobby_C_HandleUnseenQuestsChanged final
{
public:
	bool                                          bHasUnseenQuests;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.OnComplete_9036807A49B907A7A1B78EB727BAB97A
// 0x0008 (0x0008 - 0x0000)
struct AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A final
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged
// 0x0010 (0x0010 - 0x0000)
struct AthenaLobby_C_OnPlaylistChanged final
{
public:
	EFortLobbyType                                LobbyType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortPlaylistAthena*              PlaylistData;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.OnQuestsButtonVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaLobby_C_OnQuestsButtonVisibilityChanged final
{
public:
	ESlateVisibility                              NewVisibility;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic
// 0x0020 (0x0020 - 0x0000)
struct AthenaLobby_C_StartAthenaLobbyMusic final
{
public:
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;         // 0x0000(0x0010)(ReferenceParm)
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

