﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimGraphRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_PlayMontageNotifyWindow final : public UAnimNotifyState
{
public:
	class FName                                   NotifyName;                                        // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_PlayMontageNotifyWindow">();
	}
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayMontageNotifyWindow>();
	}
};

// Class AnimGraphRuntime.AnimationStateMachineLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationStateMachineLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node, struct FAnimationStateMachineReference* AnimationState, bool* Result);
	static void ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, struct FAnimationStateResultReference* AnimationState, bool* Result);
	static float GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
	static float GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
	static class FName GetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node);
	static bool IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
	static bool IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node);
	static void SetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, class FName TargetState, float Duration, ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationStateMachineLibrary">();
	}
	static class UAnimationStateMachineLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationStateMachineLibrary>();
	}
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetAnimationLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
	static float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const class FName SocketOrBoneName, const class FName ReferenceSocketOrBone, ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);
	static struct FVector K2_DirectionBetweenSockets(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameFrom, const class FName SocketOrBoneNameTo);
	static float K2_DistanceBetweenTwoSocketsAndMapRange(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	static float K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix);
	static struct FTransform K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
	static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	static struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	static void K2_StartProfilingTimer();
	static void K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KismetAnimationLibrary">();
	}
	static class UKismetAnimationLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetAnimationLibrary>();
	}
};

// Class AnimGraphRuntime.AnimExecutionContextLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimExecutionContextLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
	static struct FAnimInitializationContext ConvertToInitializationContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
	static struct FAnimPoseContext ConvertToPoseContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
	static struct FAnimUpdateContext ConvertToUpdateContext(const struct FAnimExecutionContext& Context, EAnimExecutionContextConversionResult* Result);
	static class UAnimInstance* GetAnimInstance(const struct FAnimExecutionContext& Context);
	static struct FAnimNodeReference GetAnimNodeReference(class UAnimInstance* Instance, int32 Index_0);
	static float GetCurrentWeight(const struct FAnimUpdateContext& Context);
	static float GetDeltaTime(const struct FAnimUpdateContext& Context);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimExecutionContextLibrary">();
	}
	static class UAnimExecutionContextLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimExecutionContextLibrary>();
	}
};

// Class AnimGraphRuntime.BlendSpacePlayerLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlendSpacePlayerLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FBlendSpacePlayerReference ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference* BlendSpacePlayer, bool* Result);
	static class UBlendSpace* GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	static bool GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	static float GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	static struct FVector GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	static float GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	static struct FBlendSpacePlayerReference SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace);
	static struct FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime);
	static struct FBlendSpacePlayerReference SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);
	static struct FBlendSpacePlayerReference SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);
	static struct FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset);
	static bool ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlendSpacePlayerLibrary">();
	}
	static class UBlendSpacePlayerLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlendSpacePlayerLibrary>();
	}
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayMontageNotify final : public UAnimNotify
{
public:
	class FName                                   NotifyName;                                        // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimNotify_PlayMontageNotify">();
	}
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayMontageNotify>();
	}
};

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x0350 - 0x0350)
class UAnimSequencerInstance final : public UAnimInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSequencerInstance">();
	}
	static class UAnimSequencerInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSequencerInstance>();
	}
};

// Class AnimGraphRuntime.BlendListBaseLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlendListBaseLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FBlendListBaseReference ConvertToBlendListBase(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ResetNode(const struct FBlendListBaseReference& BlendListBase);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlendListBaseLibrary">();
	}
	static class UBlendListBaseLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlendListBaseLibrary>();
	}
};

// Class AnimGraphRuntime.LayeredBoneBlendLibrary
// 0x0000 (0x0028 - 0x0028)
class ULayeredBoneBlendLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference* LayeredBoneBlend, bool* Result);
	static struct FLayeredBoneBlendReference ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static int32 GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend);
	static struct FLayeredBoneBlendReference SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, class FName BlendMaskName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LayeredBoneBlendLibrary">();
	}
	static class ULayeredBoneBlendLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULayeredBoneBlendLibrary>();
	}
};

// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// 0x0000 (0x0028 - 0x0028)
class ULinkedAnimGraphLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result);
	static class UAnimInstance* GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node);
	static bool HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinkedAnimGraphLibrary">();
	}
	static class ULinkedAnimGraphLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULinkedAnimGraphLibrary>();
	}
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UPlayMontageCallbackProxy final : public UObject
{
public:
	TMulticastInlineDelegate<void(class FName NotifyName)> OnCompleted;                              // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class FName NotifyName)> OnBlendOut;                               // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class FName NotifyName)> OnInterrupted;                            // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class FName NotifyName)> OnNotifyBegin;                            // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class FName NotifyName)> OnNotifyEnd;                              // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x30];                                      // 0x0078(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection);

	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayMontageCallbackProxy">();
	}
	static class UPlayMontageCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayMontageCallbackProxy>();
	}
};

// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// 0x0000 (0x0028 - 0x0028)
class USequenceEvaluatorLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FSequenceEvaluatorReference AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate);
	static struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result);
	static float GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator);
	static class UAnimSequenceBase* GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator);
	static struct FSequenceEvaluatorReference SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time);
	static struct FSequenceEvaluatorReference SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence);
	static struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceEvaluatorLibrary">();
	}
	static class USequenceEvaluatorLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceEvaluatorLibrary>();
	}
};

// Class AnimGraphRuntime.SequencePlayerLibrary
// 0x0000 (0x0028 - 0x0028)
class USequencePlayerLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration);
	static struct FSequencePlayerReference ConvertToSequencePlayer(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, struct FSequencePlayerReference* SequencePlayer, bool* Result);
	static float GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer);
	static bool GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer);
	static float GetPlayRate(const struct FSequencePlayerReference& SequencePlayer);
	static struct FSequencePlayerReference GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& SequenceBase);
	static class UAnimSequenceBase* GetSequencePure(const struct FSequencePlayerReference& SequencePlayer);
	static float GetStartPosition(const struct FSequencePlayerReference& SequencePlayer);
	static struct FSequencePlayerReference SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time);
	static struct FSequencePlayerReference SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate);
	static struct FSequencePlayerReference SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence);
	static struct FSequencePlayerReference SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime);
	static struct FSequencePlayerReference SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequencePlayerLibrary">();
	}
	static class USequencePlayerLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequencePlayerLibrary>();
	}
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// 0x0000 (0x0000 - 0x0000)
class ISequencerAnimationSupport final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequencerAnimationSupport">();
	}
	static class ISequencerAnimationSupport* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISequencerAnimationSupport>();
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

// Class AnimGraphRuntime.SkeletalControlLibrary
// 0x0000 (0x0028 - 0x0028)
class USkeletalControlLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FSkeletalControlReference ConvertToSkeletalControl(const struct FAnimNodeReference& Node, EAnimNodeReferenceConversionResult* Result);
	static void ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl, bool* Result);
	static float GetAlpha(const struct FSkeletalControlReference& SkeletalControl);
	static struct FSkeletalControlReference SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalControlLibrary">();
	}
	static class USkeletalControlLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalControlLibrary>();
	}
};

}

