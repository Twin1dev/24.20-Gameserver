﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseGameplayTags

#include "Basic.hpp"

#include "VerseGameplayTags_classes.hpp"
#include "VerseGameplayTags_parameters.hpp"


namespace SDK
{

// Function VerseGameplayTags.VerseGameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// struct FVerseGameplayTagContainer*      TagContainer                                           (Parm, OutParm, NativeAccessSpecifierPublic)

void IVerseGameplayTagAssetInterface::GetOwnedGameplayTags(struct FVerseGameplayTagContainer* TagContainer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("VerseGameplayTagAssetInterface", "GetOwnedGameplayTags");

	Params::VerseGameplayTagAssetInterface_GetOwnedGameplayTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TagContainer != nullptr)
		*TagContainer = std::move(Parms.TagContainer);
}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// const struct FVerseGameplayTagContainer&TagContainer                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVerseGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FVerseGameplayTagContainer& TagContainer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("VerseGameplayTagAssetInterface", "HasAllMatchingGameplayTags");

	Params::VerseGameplayTagAssetInterface_HasAllMatchingGameplayTags Parms{};

	Parms.TagContainer = std::move(TagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParams, Const)
// Parameters:
// const struct FVerseGameplayTagContainer&TagContainer                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVerseGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FVerseGameplayTagContainer& TagContainer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("VerseGameplayTagAssetInterface", "HasAnyMatchingGameplayTags");

	Params::VerseGameplayTagAssetInterface_HasAnyMatchingGameplayTags Parms{};

	Parms.TagContainer = std::move(TagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VerseGameplayTags.VerseGameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, Const)
// Parameters:
// const struct FVerseGameplayTag&         TagToCheck                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVerseGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FVerseGameplayTag& TagToCheck) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("VerseGameplayTagAssetInterface", "HasMatchingGameplayTag");

	Params::VerseGameplayTagAssetInterface_HasMatchingGameplayTag Parms{};

	Parms.TagToCheck = std::move(TagToCheck);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	AsUObject()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

