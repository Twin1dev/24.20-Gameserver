﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "CinematicCamera_structs.hpp"


namespace SDK::Params
{

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// 0x0008 (0x0008 - 0x0000)
struct CameraRig_Rail_GetRailSplineComponent final
{
public:
	class USplineComponent*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// 0x0008 (0x0008 - 0x0000)
struct CineCameraActor_GetCineCameraComponent final
{
public:
	class UCineCameraComponent*                   ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetFilmbackPresetsCopy final
{
public:
	TArray<struct FNamedFilmbackPreset>           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetLensPresetsCopy final
{
public:
	TArray<struct FNamedLensPreset>               ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetCropPresetByName final
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetCropSettings
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCropSettings final
{
public:
	struct FPlateCropSettings                     NewCropSettings;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCurrentAperture final
{
public:
	float                                         NewCurrentAperture;                                // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCurrentFocalLength final
{
public:
	float                                         InFocalLength;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetFilmback
// 0x000C (0x000C - 0x0000)
struct CineCameraComponent_SetFilmback final
{
public:
	struct FCameraFilmbackSettings                NewFilmback;                                       // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetFilmbackPresetByName final
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetFocusSettings
// 0x0060 (0x0060 - 0x0000)
struct CineCameraComponent_SetFocusSettings final
{
public:
	struct FCameraFocusSettings                   NewFocusSettings;                                  // 0x0000(0x0060)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetLensPresetByName final
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetLensSettings
// 0x001C (0x001C - 0x0000)
struct CineCameraComponent_SetLensSettings final
{
public:
	struct FCameraLensSettings                    NewLensSettings;                                   // 0x0000(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetCropPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetCropPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetDefaultFilmbackPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetFilmbackPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetHorizontalFieldOfView final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetLensPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetVerticalFieldOfView final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
// 0x0008 (0x0008 - 0x0000)
struct CineCameraSettings_GetCineCameraSettings final
{
public:
	class UCineCameraSettings*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.GetCropPresetByName
// 0x0018 (0x0018 - 0x0000)
struct CineCameraSettings_GetCropPresetByName final
{
public:
	class FString                                 PresetName;                                        // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlateCropSettings                     CropSettings;                                      // 0x0010(0x0004)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
// 0x0020 (0x0020 - 0x0000)
struct CineCameraSettings_GetFilmbackPresetByName final
{
public:
	class FString                                 PresetName;                                        // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x0010(0x000C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CinematicCamera.CineCameraSettings.GetLensPresetByName
// 0x0030 (0x0030 - 0x0000)
struct CineCameraSettings_GetLensPresetByName final
{
public:
	class FString                                 PresetName;                                        // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x0010(0x001C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x002C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function CinematicCamera.CineCameraSettings.SetCropPresets
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetCropPresets final
{
public:
	TArray<struct FNamedPlateCropPreset>          InCropPresets;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetDefaultCropPresetName final
{
public:
	class FString                                 InDefaultCropPresetName;                           // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetDefaultFilmbackPreset final
{
public:
	class FString                                 InDefaultFilmbackPreset;                           // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
// 0x0004 (0x0004 - 0x0000)
struct CineCameraSettings_SetDefaultLensFocalLength final
{
public:
	float                                         InDefaultLensFocalLength;                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
// 0x0004 (0x0004 - 0x0000)
struct CineCameraSettings_SetDefaultLensFStop final
{
public:
	float                                         InDefaultLensFStop;                                // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetDefaultLensPresetName final
{
public:
	class FString                                 InDefaultLensPresetName;                           // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetFilmbackPresets final
{
public:
	TArray<struct FNamedFilmbackPreset>           InFilmbackPresets;                                 // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.SetLensPresets
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetLensPresets final
{
public:
	TArray<struct FNamedLensPreset>               InLensPresets;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.GetCropPresetNames
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_GetCropPresetNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_GetFilmbackPresetNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraSettings.GetLensPresetNames
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_GetLensPresetNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

}

