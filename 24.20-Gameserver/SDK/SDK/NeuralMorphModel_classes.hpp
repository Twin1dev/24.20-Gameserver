﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NeuralMorphModel

#include "Basic.hpp"

#include "MLDeformerFramework_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "NeuralMorphModel_structs.hpp"


namespace SDK
{

// Class NeuralMorphModel.NeuralMorphModelInstance
// 0x0008 (0x00A0 - 0x0098)
class UNeuralMorphModelInstance final : public UMLDeformerMorphModelInstance
{
public:
	class UNeuralMorphNetworkInstance*            NetworkInstance;                                   // 0x0098(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphModelInstance">();
	}
	static class UNeuralMorphModelInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphModelInstance>();
	}
};

// Class NeuralMorphModel.NeuralMorphModelVizSettings
// 0x0000 (0x0028 - 0x0028)
class UNeuralMorphModelVizSettings final : public UMLDeformerMorphModelVizSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphModelVizSettings">();
	}
	static class UNeuralMorphModelVizSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphModelVizSettings>();
	}
};

// Class NeuralMorphModel.NeuralMorphNetworkLayer
// 0x0030 (0x0058 - 0x0028)
class UNeuralMorphNetworkLayer final : public UObject
{
public:
	int32                                         NumInputs;                                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumOutputs;                                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Depth;                                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Weights;                                           // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 Biases;                                            // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphNetworkLayer">();
	}
	static class UNeuralMorphNetworkLayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphNetworkLayer>();
	}
};

// Class NeuralMorphModel.NeuralMorphNetwork
// 0x0040 (0x0068 - 0x0028)
class UNeuralMorphNetwork final : public UObject
{
public:
	TArray<class UNeuralMorphNetworkLayer*>       Layers;                                            // 0x0028(0x0010)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<float>                                 InputMeans;                                        // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                 InputStd;                                          // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	ENeuralMorphMode                              Mode;                                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumMorphsPerBone;                                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         NumBones;                                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         NumCurves;                                         // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphNetwork">();
	}
	static class UNeuralMorphNetwork* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphNetwork>();
	}
};

// Class NeuralMorphModel.NeuralMorphNetworkInstance
// 0x0048 (0x0070 - 0x0028)
class UNeuralMorphNetworkInstance final : public UObject
{
public:
	uint8                                         Pad_28[0x40];                                      // 0x0028(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class UNeuralMorphNetwork*                    Network;                                           // 0x0068(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphNetworkInstance">();
	}
	static class UNeuralMorphNetworkInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphNetworkInstance>();
	}
};

// Class NeuralMorphModel.NeuralMorphModel
// 0x0038 (0x0148 - 0x0110)
class UNeuralMorphModel final : public UMLDeformerMorphModel
{
public:
	ENeuralMorphMode                              Mode;                                              // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalNumMorphTargetsPerBone;                       // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GlobalNumMorphTargets;                             // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumIterations;                                     // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LocalNumHiddenLayers;                              // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LocalNumNeuronsPerLayer;                           // 0x0124(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GlobalNumHiddenLayers;                             // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GlobalNumNeuronsPerLayer;                          // 0x012C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BatchSize;                                         // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LearningRate;                                      // 0x0134(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LearningRateDecay;                                 // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RegularizationFactor;                              // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNeuralMorphNetwork*                    NeuralMorphNetwork;                                // 0x0140(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NeuralMorphModel">();
	}
	static class UNeuralMorphModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNeuralMorphModel>();
	}
};

}

