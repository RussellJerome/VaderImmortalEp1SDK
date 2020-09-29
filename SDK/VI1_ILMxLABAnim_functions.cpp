// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ILMxLABAnim.AnimationDebugComponent.OnBecomeLocalPlayer
// (Final, Native, Public, BlueprintCallable)

void UAnimationDebugComponent::OnBecomeLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDebugComponent.OnBecomeLocalPlayer");

	UAnimationDebugComponent_OnBecomeLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ILMxLABAnim.AnimationDockingComponent.UpdateDocking
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDockingRequestHandle   Handle                         (Parm)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAnimationDockingComponent::UpdateDocking(const struct FDockingRequestHandle& Handle, const struct FTransform& destTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.UpdateDocking");

	UAnimationDockingComponent_UpdateDocking_Params params;
	params.Handle = Handle;
	params.destTransform = destTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetRelevantAnimInStateDockDestinationByTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   StateName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          dockStartTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          dockEndTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetRelevantAnimInStateDockDestinationByTime(const struct FName& StateName, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetRelevantAnimInStateDockDestinationByTime");

	UAnimationDockingComponent_SetRelevantAnimInStateDockDestinationByTime_Params params;
	params.StateName = StateName;
	params.destTransform = destTransform;
	params.dockStartTime = dockStartTime;
	params.dockEndTime = dockEndTime;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetRelevantAnimInStateDockDestinationByEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   StateName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   dockStartEvent                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockEndEvent                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetRelevantAnimInStateDockDestinationByEvent(const struct FName& StateName, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetRelevantAnimInStateDockDestinationByEvent");

	UAnimationDockingComponent_SetRelevantAnimInStateDockDestinationByEvent_Params params;
	params.StateName = StateName;
	params.destTransform = destTransform;
	params.dockStartEvent = dockStartEvent;
	params.dockEndEvent = dockEndEvent;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetMontageDockDestinationByTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          dockStartTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          dockEndTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetMontageDockDestinationByTime(class UAnimMontage* Montage, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetMontageDockDestinationByTime");

	UAnimationDockingComponent_SetMontageDockDestinationByTime_Params params;
	params.Montage = Montage;
	params.destTransform = destTransform;
	params.dockStartTime = dockStartTime;
	params.dockEndTime = dockEndTime;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetMontageDockDestinationByEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   dockStartEvent                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockEndEvent                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetMontageDockDestinationByEvent(class UAnimMontage* Montage, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetMontageDockDestinationByEvent");

	UAnimationDockingComponent_SetMontageDockDestinationByEvent_Params params;
	params.Montage = Montage;
	params.destTransform = destTransform;
	params.dockStartEvent = dockStartEvent;
	params.dockEndEvent = dockEndEvent;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetDockDestinationByTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   AssetName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          dockStartTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          dockEndTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetDockDestinationByTime(const struct FName& AssetName, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetDockDestinationByTime");

	UAnimationDockingComponent_SetDockDestinationByTime_Params params;
	params.AssetName = AssetName;
	params.destTransform = destTransform;
	params.dockStartTime = dockStartTime;
	params.dockEndTime = dockEndTime;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetDockDestinationByEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   AssetName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   dockStartEvent                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockEndEvent                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTimeAActor (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetDockDestinationByEvent(const struct FName& AssetName, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTimeAActor, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetDockDestinationByEvent");

	UAnimationDockingComponent_SetDockDestinationByEvent_Params params;
	params.AssetName = AssetName;
	params.destTransform = destTransform;
	params.dockStartEvent = dockStartEvent;
	params.dockEndEvent = dockEndEvent;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTimeAActor = parallelDockingRootComponentsDockTimeAActor;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetBlendSpaceDockDestinationByTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBlendSpaceBase*         BlendSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          dockStartTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          dockEndTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetBlendSpaceDockDestinationByTime(class UBlendSpaceBase* BlendSpace, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetBlendSpaceDockDestinationByTime");

	UAnimationDockingComponent_SetBlendSpaceDockDestinationByTime_Params params;
	params.BlendSpace = BlendSpace;
	params.destTransform = destTransform;
	params.dockStartTime = dockStartTime;
	params.dockEndTime = dockEndTime;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetBlendSpaceDockDestinationByEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBlendSpaceBase*         BlendSpace                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   dockStartEvent                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockEndEvent                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetBlendSpaceDockDestinationByEvent(class UBlendSpaceBase* BlendSpace, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetBlendSpaceDockDestinationByEvent");

	UAnimationDockingComponent_SetBlendSpaceDockDestinationByEvent_Params params;
	params.BlendSpace = BlendSpace;
	params.destTransform = destTransform;
	params.dockStartEvent = dockStartEvent;
	params.dockEndEvent = dockEndEvent;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetAnimSequenceDockDestinationByTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimSequence*           AnimSeq                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          dockStartTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          dockEndTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetAnimSequenceDockDestinationByTime(class UAnimSequence* AnimSeq, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetAnimSequenceDockDestinationByTime");

	UAnimationDockingComponent_SetAnimSequenceDockDestinationByTime_Params params;
	params.AnimSeq = AnimSeq;
	params.destTransform = destTransform;
	params.dockStartTime = dockStartTime;
	params.dockEndTime = dockEndTime;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.SetAnimSequenceDockDestinationByEvent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimSequence*           AnimSeq                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              destTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   dockStartEvent                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockEndEvent                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   dockBone                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            dockingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            parallelDockingRootComponents  (Parm, ZeroConstructor, IsPlainOldData)
// float                          parallelDockingRootComponentsDockTime (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  destParentActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockingRequestHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockingRequestHandle UAnimationDockingComponent::SetAnimSequenceDockDestinationByEvent(class UAnimSequence* AnimSeq, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.SetAnimSequenceDockDestinationByEvent");

	UAnimationDockingComponent_SetAnimSequenceDockDestinationByEvent_Params params;
	params.AnimSeq = AnimSeq;
	params.destTransform = destTransform;
	params.dockStartEvent = dockStartEvent;
	params.dockEndEvent = dockEndEvent;
	params.dockBone = dockBone;
	params.dockingFlags = dockingFlags;
	params.parallelDockingRootComponents = parallelDockingRootComponents;
	params.parallelDockingRootComponentsDockTime = parallelDockingRootComponentsDockTime;
	params.destParentActor = destParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.RootComponentsToInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ERootComponentFlags> flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAnimationDockingComponent::STATIC_RootComponentsToInt(TEnumAsByte<ERootComponentFlags> flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.RootComponentsToInt");

	UAnimationDockingComponent_RootComponentsToInt_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.RequestHandleValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDockingRequestHandle   Handle                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationDockingComponent::RequestHandleValid(const struct FDockingRequestHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.RequestHandleValid");

	UAnimationDockingComponent_RequestHandleValid_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.IsDocking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDockingRequestHandle   Handle                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimationDockingComponent::IsDocking(const struct FDockingRequestHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.IsDocking");

	UAnimationDockingComponent_IsDocking_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.GetDockPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDockingRequestHandle   Handle                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimationDockingComponent::GetDockPercentage(const struct FDockingRequestHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.GetDockPercentage");

	UAnimationDockingComponent_GetDockPercentage_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.DockingFlagToInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EDockingFlags>     flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAnimationDockingComponent::STATIC_DockingFlagToInt(TEnumAsByte<EDockingFlags> flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.DockingFlagToInt");

	UAnimationDockingComponent_DockingFlagToInt_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ILMxLABAnim.AnimationDockingComponent.ClearAllDocking
// (Final, Native, Public, BlueprintCallable)

void UAnimationDockingComponent::ClearAllDocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ILMxLABAnim.AnimationDockingComponent.ClearAllDocking");

	UAnimationDockingComponent_ClearAllDocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
