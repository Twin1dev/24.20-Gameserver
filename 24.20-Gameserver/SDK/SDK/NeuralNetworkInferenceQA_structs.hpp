﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NeuralNetworkInferenceQA

#include "Basic.hpp"

#include "NeuralNetworkInference_structs.hpp"


namespace SDK
{

// ScriptStruct NeuralNetworkInferenceQA.NeuralNetworkInferenceQAOperatorTestAsset
// 0x0020 (0x0020 - 0x0000)
struct FNeuralNetworkInferenceQAOperatorTestAsset final
{
public:
	TArray<struct FNeuralTensor>                  InputTensors;                                      // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FNeuralTensor>                  OutputTensors;                                     // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// ScriptStruct NeuralNetworkInferenceQA.NeuralNetworkInferenceQAOperatorAsset
// 0x0040 (0x0040 - 0x0000)
struct FNeuralNetworkInferenceQAOperatorAsset final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNeuralNetworkInferenceQAOperatorTestAsset> PreviousTests;                         // 0x0020(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	class FString                                 PreviousTestsString;                               // 0x0030(0x0010)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

}

