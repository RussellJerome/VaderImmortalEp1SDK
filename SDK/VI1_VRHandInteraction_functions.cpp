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

// Function VRHandInteraction.XLABInteractionModifier.OnInteraction
// (Final, Native, Protected)
// Parameters:
// EXLABInteractionEventType      InteractionEventType           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractive> Interactive                    (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractionModifier::OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionModifier.OnInteraction");

	UXLABInteractionModifier_OnInteraction_Params params;
	params.InteractionEventType = InteractionEventType;
	params.Handler = Handler;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionModifier.ModifyTransform
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform              OriginalTransform              (Parm, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> Handler                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UXLABInteractionModifier::ModifyTransform(const struct FTransform& OriginalTransform, const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionModifier.ModifyTransform");

	UXLABInteractionModifier_ModifyTransform_Params params;
	params.OriginalTransform = OriginalTransform;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionModifier.ModifyStrength
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          OriginalStrength               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> Handler                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXLABInteractionModifier::ModifyStrength(float OriginalStrength, const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionModifier.ModifyStrength");

	UXLABInteractionModifier_ModifyStrength_Params params;
	params.OriginalStrength = OriginalStrength;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABHandSolver.SetHandler
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> InHandler                      (Parm, ZeroConstructor, IsPlainOldData)

void UXLABHandSolver::SetHandler(const TScriptInterface<class UXLABInteractionHandler>& InHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.SetHandler");

	UXLABHandSolver_SetHandler_Params params;
	params.InHandler = InHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABHandSolver.IsSolvedHandNearlyDoneLerping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABHandSolver::IsSolvedHandNearlyDoneLerping(float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.IsSolvedHandNearlyDoneLerping");

	UXLABHandSolver_IsSolvedHandNearlyDoneLerping_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABHandSolver.IsSolvedHandDoneLerping
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABHandSolver::IsSolvedHandDoneLerping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.IsSolvedHandDoneLerping");

	UXLABHandSolver_IsSolvedHandDoneLerping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABHandSolver.IsSolvedHandDoneAnimating
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABHandSolver::IsSolvedHandDoneAnimating()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.IsSolvedHandDoneAnimating");

	UXLABHandSolver_IsSolvedHandDoneAnimating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABHandSolver.IsHandInPositionForGrab
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABHandSolver::IsHandInPositionForGrab(float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.IsHandInPositionForGrab");

	UXLABHandSolver_IsHandInPositionForGrab_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABHandSolver.GetInteractionToHandTransformDelta
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UXLABHandSolver::GetInteractionToHandTransformDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.GetInteractionToHandTransformDelta");

	UXLABHandSolver_GetInteractionToHandTransformDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABHandSolver.GetHandler
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UXLABInteractionHandler> UXLABHandSolver::GetHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.GetHandler");

	UXLABHandSolver_GetHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABHandSolver.GetDesiredTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UXLABHandSolver::GetDesiredTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABHandSolver.GetDesiredTransform");

	UXLABHandSolver_GetDesiredTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABDefaultHandSolver.GetAnimationAssetForInteractive
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UXLABInteractive> Interactive                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UAnimationAsset*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimationAsset* UXLABDefaultHandSolver::GetAnimationAssetForInteractive(const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABDefaultHandSolver.GetAnimationAssetForInteractive");

	UXLABDefaultHandSolver_GetAnimationAssetForInteractive_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABItemSolver.SetCanMove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCanMove                     (Parm, ZeroConstructor, IsPlainOldData)

void UXLABItemSolver::SetCanMove(bool bInCanMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.SetCanMove");

	UXLABItemSolver_SetCanMove_Params params;
	params.bInCanMove = bInCanMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABItemSolver.OnInteraction
// (Final, Native, Protected)
// Parameters:
// EXLABInteractionEventType      InteractionEventType           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractive> Interactive                    (Parm, ZeroConstructor, IsPlainOldData)

void UXLABItemSolver::OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.OnInteraction");

	UXLABItemSolver_OnInteraction_Params params;
	params.InteractionEventType = InteractionEventType;
	params.Handler = Handler;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABItemSolver.IsHeldBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABItemSolver::IsHeldBy(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.IsHeldBy");

	UXLABItemSolver_IsHeldBy_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABItemSolver.IsBeingHeld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABItemSolver::IsBeingHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.IsBeingHeld");

	UXLABItemSolver_IsBeingHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABItemSolver.GetNumGrabbers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXLABItemSolver::GetNumGrabbers()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.GetNumGrabbers");

	UXLABItemSolver_GetNumGrabbers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABItemSolver.GetHeldInteractive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractive> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UXLABInteractive> UXLABItemSolver::GetHeldInteractive(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.GetHeldInteractive");

	UXLABItemSolver_GetHeldInteractive_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABItemSolver.GetHandlerIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXLABItemSolver::GetHandlerIndex(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.GetHandlerIndex");

	UXLABItemSolver_GetHandlerIndex_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABItemSolver.GetHandlerByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UXLABInteractionHandler> UXLABItemSolver::GetHandlerByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.GetHandlerByIndex");

	UXLABItemSolver_GetHandlerByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABItemSolver.GetCanMove
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABItemSolver::GetCanMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABItemSolver.GetCanMove");

	UXLABItemSolver_GetCanMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionAnimInstance.SetHandSolver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UXLABHandSolver*         InHandSolver                   (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractionAnimInstance::SetHandSolver(class UXLABHandSolver* InHandSolver)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionAnimInstance.SetHandSolver");

	UXLABInteractionAnimInstance_SetHandSolver_Params params;
	params.InHandSolver = InHandSolver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionHandler.GetReferenceActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UXLABInteractionHandler::GetReferenceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetReferenceActor");

	UXLABInteractionHandler_GetReferenceActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetMotionControllerPipeline
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UXLABMotionControllerPipeline* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXLABMotionControllerPipeline* UXLABInteractionHandler::GetMotionControllerPipeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetMotionControllerPipeline");

	UXLABInteractionHandler_GetMotionControllerPipeline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetInteractionState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EXLABInteractionState          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EXLABInteractionState UXLABInteractionHandler::GetInteractionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetInteractionState");

	UXLABInteractionHandler_GetInteractionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetHandSolver
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UXLABHandSolver*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXLABHandSolver* UXLABInteractionHandler::GetHandSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetHandSolver");

	UXLABInteractionHandler_GetHandSolver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetHandlerWorldTransform
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EXLABHandlerBoneType           BoneType                       (Parm, ZeroConstructor, IsPlainOldData)
// EXLABHandlerBoneSpace          BoneSpace                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UXLABInteractionHandler::GetHandlerWorldTransform(EXLABHandlerBoneType BoneType, EXLABHandlerBoneSpace BoneSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetHandlerWorldTransform");

	UXLABInteractionHandler_GetHandlerWorldTransform_Params params;
	params.BoneType = BoneType;
	params.BoneSpace = BoneSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetHandlerData
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UXLABHandlerData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXLABHandlerData* UXLABInteractionHandler::GetHandlerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetHandlerData");

	UXLABInteractionHandler_GetHandlerData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetGrabberComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UXLABInteractionHandler::GetGrabberComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetGrabberComponent");

	UXLABInteractionHandler_GetGrabberComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetGrabbedInteractive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FXLABBestInteractiveData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXLABBestInteractiveData UXLABInteractionHandler::GetGrabbedInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetGrabbedInteractive");

	UXLABInteractionHandler_GetGrabbedInteractive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetGrabAmount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXLABInteractionHandler::GetGrabAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetGrabAmount");

	UXLABInteractionHandler_GetGrabAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.GetBestInteractive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FXLABBestInteractiveData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXLABBestInteractiveData UXLABInteractionHandler::GetBestInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.GetBestInteractive");

	UXLABInteractionHandler_GetBestInteractive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandler.ForceRelease
// (Native, Public, BlueprintCallable)

void UXLABInteractionHandler::ForceRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.ForceRelease");

	UXLABInteractionHandler_ForceRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionHandler.ForceGrab
// (Native, Public, BlueprintCallable)

void UXLABInteractionHandler::ForceGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandler.ForceGrab");

	UXLABInteractionHandler_ForceGrab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.SetGrabAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InGrabAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractionHandlerComponent::SetGrabAmount(float InGrabAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.SetGrabAmount");

	UXLABInteractionHandlerComponent_SetGrabAmount_Params params;
	params.InGrabAmount = InGrabAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.InitializeGrabbing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         InGrabberComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InGrabberSocketName            (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractionHandlerComponent::InitializeGrabbing(class USceneComponent* InGrabberComp, const struct FName& InGrabberSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.InitializeGrabbing");

	UXLABInteractionHandlerComponent_InitializeGrabbing_Params params;
	params.InGrabberComp = InGrabberComp;
	params.InGrabberSocketName = InGrabberSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.GetInteractionState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EXLABInteractionState          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EXLABInteractionState UXLABInteractionHandlerComponent::GetInteractionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.GetInteractionState");

	UXLABInteractionHandlerComponent_GetInteractionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.GetGrabbedInteractive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FXLABBestInteractiveData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXLABBestInteractiveData UXLABInteractionHandlerComponent::GetGrabbedInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.GetGrabbedInteractive");

	UXLABInteractionHandlerComponent_GetGrabbedInteractive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.GetGrabAmount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXLABInteractionHandlerComponent::GetGrabAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.GetGrabAmount");

	UXLABInteractionHandlerComponent_GetGrabAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.GetBestInteractive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FXLABBestInteractiveData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXLABBestInteractiveData UXLABInteractionHandlerComponent::GetBestInteractive()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.GetBestInteractive");

	UXLABInteractionHandlerComponent_GetBestInteractive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.ForceRelease
// (Native, Public, BlueprintCallable)

void UXLABInteractionHandlerComponent::ForceRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.ForceRelease");

	UXLABInteractionHandlerComponent_ForceRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.ForceGrab
// (Native, Public, BlueprintCallable)

void UXLABInteractionHandlerComponent::ForceGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.ForceGrab");

	UXLABInteractionHandlerComponent_ForceGrab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionHandlerComponent.CanGrab
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABInteractionHandlerComponent::CanGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionHandlerComponent.CanGrab");

	UXLABInteractionHandlerComponent_CanGrab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionItemComponent.SetPrimitive
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InGrabbableComp                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UXLABInteractionItemComponent::SetPrimitive(class UPrimitiveComponent* InGrabbableComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionItemComponent.SetPrimitive");

	UXLABInteractionItemComponent_SetPrimitive_Params params;
	params.InGrabbableComp = InGrabbableComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionManager.UnregisterInteractiveGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractiveGroup> InteractiveGroup               (Parm, ZeroConstructor, IsPlainOldData)

void AXLABInteractionManager::UnregisterInteractiveGroup(const TScriptInterface<class UXLABInteractiveGroup>& InteractiveGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.UnregisterInteractiveGroup");

	AXLABInteractionManager_UnregisterInteractiveGroup_Params params;
	params.InteractiveGroup = InteractiveGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionManager.UnregisterInteractive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractive> Interactive                    (Parm, ZeroConstructor, IsPlainOldData)

void AXLABInteractionManager::UnregisterInteractive(const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.UnregisterInteractive");

	AXLABInteractionManager_UnregisterInteractive_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionManager.RegisterInteractiveGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractiveGroup> InteractiveGroup               (Parm, ZeroConstructor, IsPlainOldData)

void AXLABInteractionManager::RegisterInteractiveGroup(const TScriptInterface<class UXLABInteractiveGroup>& InteractiveGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.RegisterInteractiveGroup");

	AXLABInteractionManager_RegisterInteractiveGroup_Params params;
	params.InteractiveGroup = InteractiveGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionManager.RegisterInteractive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractive> Interactive                    (Parm, ZeroConstructor, IsPlainOldData)

void AXLABInteractionManager::RegisterInteractive(const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.RegisterInteractive");

	AXLABInteractionManager_RegisterInteractive_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractionManager.GetStrongestInteractive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractiveGroup> Group                          (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractive> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UXLABInteractive> AXLABInteractionManager::GetStrongestInteractive(const TScriptInterface<class UXLABInteractiveGroup>& Group, const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.GetStrongestInteractive");

	AXLABInteractionManager_GetStrongestInteractive_Params params;
	params.Group = Group;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForInteractive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractive> Interactive                    (Parm, ZeroConstructor, IsPlainOldData)
// EXLABLockedDataType            LockedDataType                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXLABLockedInteractionData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FXLABLockedInteractionData> AXLABInteractionManager::GetInteractionDataForInteractive(const TScriptInterface<class UXLABInteractive>& Interactive, EXLABLockedDataType LockedDataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForInteractive");

	AXLABInteractionManager_GetInteractionDataForInteractive_Params params;
	params.Interactive = Interactive;
	params.LockedDataType = LockedDataType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> InHandler                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FXLABLockedInteractionData OutData                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXLABInteractionManager::GetInteractionDataForHandler(const TScriptInterface<class UXLABInteractionHandler>& InHandler, struct FXLABLockedInteractionData* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForHandler");

	AXLABInteractionManager_GetInteractionDataForHandler_Params params;
	params.InHandler = InHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractiveGroup> Group                          (Parm, ZeroConstructor, IsPlainOldData)
// EXLABLockedDataType            LockedDataType                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXLABLockedInteractionData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FXLABLockedInteractionData> AXLABInteractionManager::GetInteractionDataForGroup(const TScriptInterface<class UXLABInteractiveGroup>& Group, EXLABLockedDataType LockedDataType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForGroup");

	AXLABInteractionManager_GetInteractionDataForGroup_Params params;
	params.Group = Group;
	params.LockedDataType = LockedDataType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionManager.GetGroupForInteractive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractive> Interactive                    (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractiveGroup> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UXLABInteractiveGroup> AXLABInteractionManager::GetGroupForInteractive(const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionManager.GetGroupForInteractive");

	AXLABInteractionManager_GetGroupForInteractive_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnTorus
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TorusCenter                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TorusNormal                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          TorusRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TorusWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnTorus(const struct FVector& Point, const struct FVector& TorusCenter, const struct FVector& TorusNormal, float TorusRadius, float TorusWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnTorus");

	UXLABInteractionMathUtils_GetClosestPointOnTorus_Params params;
	params.Point = Point;
	params.TorusCenter = TorusCenter;
	params.TorusNormal = TorusNormal;
	params.TorusRadius = TorusRadius;
	params.TorusWidth = TorusWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSquare
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CenterOfPlane                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                PlaneOrientation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               LocalHalfExtents               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnSquare(const struct FVector& Point, const struct FVector& CenterOfPlane, const struct FRotator& PlaneOrientation, const struct FVector2D& LocalHalfExtents)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSquare");

	UXLABInteractionMathUtils_GetClosestPointOnSquare_Params params;
	params.Point = Point;
	params.CenterOfPlane = CenterOfPlane;
	params.PlaneOrientation = PlaneOrientation;
	params.LocalHalfExtents = LocalHalfExtents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 sphereCenter                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnSphere(const struct FVector& Point, const struct FVector& sphereCenter, float SphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSphere");

	UXLABInteractionMathUtils_GetClosestPointOnSphere_Params params;
	params.Point = Point;
	params.sphereCenter = sphereCenter;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSegmentWithStartAndEnd
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 SegmentStart                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 SegmentEnd                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnSegmentWithStartAndEnd(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSegmentWithStartAndEnd");

	UXLABInteractionMathUtils_GetClosestPointOnSegmentWithStartAndEnd_Params params;
	params.Point = Point;
	params.SegmentStart = SegmentStart;
	params.SegmentEnd = SegmentEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSegment
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 SegmentCenter                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 SegmentDirection               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SegmentHalfLength              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnSegment(const struct FVector& Point, const struct FVector& SegmentCenter, const struct FVector& SegmentDirection, float SegmentHalfLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSegment");

	UXLABInteractionMathUtils_GetClosestPointOnSegment_Params params;
	params.Point = Point;
	params.SegmentCenter = SegmentCenter;
	params.SegmentDirection = SegmentDirection;
	params.SegmentHalfLength = SegmentHalfLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnOpenCylinder
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CylinderCenter                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CylinderAxis                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          CylinderRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CylinderHalfHeight             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnOpenCylinder(const struct FVector& Point, const struct FVector& CylinderCenter, const struct FVector& CylinderAxis, float CylinderRadius, float CylinderHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnOpenCylinder");

	UXLABInteractionMathUtils_GetClosestPointOnOpenCylinder_Params params;
	params.Point = Point;
	params.CylinderCenter = CylinderCenter;
	params.CylinderAxis = CylinderAxis;
	params.CylinderRadius = CylinderRadius;
	params.CylinderHalfHeight = CylinderHalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnOpenCone
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ConeTip                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ConeDirection                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ConeHalfAngleDegrees           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ConeLength                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnOpenCone(const struct FVector& Point, const struct FVector& ConeTip, const struct FVector& ConeDirection, float ConeHalfAngleDegrees, float ConeLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnOpenCone");

	UXLABInteractionMathUtils_GetClosestPointOnOpenCone_Params params;
	params.Point = Point;
	params.ConeTip = ConeTip;
	params.ConeDirection = ConeDirection;
	params.ConeHalfAngleDegrees = ConeHalfAngleDegrees;
	params.ConeLength = ConeLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnInfinitePlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PointOnPlane                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PlaneNormal                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnInfinitePlane(const struct FVector& Point, const struct FVector& PointOnPlane, const struct FVector& PlaneNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnInfinitePlane");

	UXLABInteractionMathUtils_GetClosestPointOnInfinitePlane_Params params;
	params.Point = Point;
	params.PointOnPlane = PointOnPlane;
	params.PlaneNormal = PlaneNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnInfiniteLine
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PointOnLine                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LineDirection                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnInfiniteLine(const struct FVector& Point, const struct FVector& PointOnLine, const struct FVector& LineDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnInfiniteLine");

	UXLABInteractionMathUtils_GetClosestPointOnInfiniteLine_Params params;
	params.Point = Point;
	params.PointOnLine = PointOnLine;
	params.LineDirection = LineDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnDisc
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 DiscCenter                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 DiscNormal                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DiscRadius                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnDisc(const struct FVector& Point, const struct FVector& DiscCenter, const struct FVector& DiscNormal, float DiscRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnDisc");

	UXLABInteractionMathUtils_GetClosestPointOnDisc_Params params;
	params.Point = Point;
	params.DiscCenter = DiscCenter;
	params.DiscNormal = DiscNormal;
	params.DiscRadius = DiscRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnClosedCylinder
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CylinderCenter                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CylinderAxis                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          CylinderRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          CylinderHalfHeight             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnClosedCylinder(const struct FVector& Point, const struct FVector& CylinderCenter, const struct FVector& CylinderAxis, float CylinderRadius, float CylinderHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnClosedCylinder");

	UXLABInteractionMathUtils_GetClosestPointOnClosedCylinder_Params params;
	params.Point = Point;
	params.CylinderCenter = CylinderCenter;
	params.CylinderAxis = CylinderAxis;
	params.CylinderRadius = CylinderRadius;
	params.CylinderHalfHeight = CylinderHalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnClosedCone
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ConeTip                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ConeDirection                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ConeHalfAngleDegrees           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ConeLength                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnClosedCone(const struct FVector& Point, const struct FVector& ConeTip, const struct FVector& ConeDirection, float ConeHalfAngleDegrees, float ConeLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnClosedCone");

	UXLABInteractionMathUtils_GetClosestPointOnClosedCone_Params params;
	params.Point = Point;
	params.ConeTip = ConeTip;
	params.ConeDirection = ConeDirection;
	params.ConeHalfAngleDegrees = ConeHalfAngleDegrees;
	params.ConeLength = ConeLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnCircle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 circleCenter                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CircleNormal                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          circleRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnCircle(const struct FVector& Point, const struct FVector& circleCenter, const struct FVector& CircleNormal, float circleRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnCircle");

	UXLABInteractionMathUtils_GetClosestPointOnCircle_Params params;
	params.Point = Point;
	params.circleCenter = circleCenter;
	params.CircleNormal = CircleNormal;
	params.circleRadius = circleRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxCenter                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                BoxOrientation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LocalBoxHalfExtents            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EXLABBoxSurfaces               Surfaces                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnBox(const struct FVector& Point, const struct FVector& BoxCenter, const struct FRotator& BoxOrientation, const struct FVector& LocalBoxHalfExtents, EXLABBoxSurfaces Surfaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnBox");

	UXLABInteractionMathUtils_GetClosestPointOnBox_Params params;
	params.Point = Point;
	params.BoxCenter = BoxCenter;
	params.BoxOrientation = BoxOrientation;
	params.LocalBoxHalfExtents = LocalBoxHalfExtents;
	params.Surfaces = Surfaces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnBoundedPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CenterOfPlane                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                PlaneOrientation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               LocalHalfExtents               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestPointOnBoundedPlane(const struct FVector& Point, const struct FVector& CenterOfPlane, const struct FRotator& PlaneOrientation, const struct FVector2D& LocalHalfExtents)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnBoundedPlane");

	UXLABInteractionMathUtils_GetClosestPointOnBoundedPlane_Params params;
	params.Point = Point;
	params.CenterOfPlane = CenterOfPlane;
	params.PlaneOrientation = PlaneOrientation;
	params.LocalHalfExtents = LocalHalfExtents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestFaceCenterOnBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxCenter                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                BoxOrientation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LocalBoxHalfExtents            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EXLABBoxSurfaces               Surfaces                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXLABInteractionMathUtils::STATIC_GetClosestFaceCenterOnBox(const struct FVector& Point, const struct FVector& BoxCenter, const struct FRotator& BoxOrientation, const struct FVector& LocalBoxHalfExtents, EXLABBoxSurfaces Surfaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionMathUtils.GetClosestFaceCenterOnBox");

	UXLABInteractionMathUtils_GetClosestFaceCenterOnBox_Params params;
	params.Point = Point;
	params.BoxCenter = BoxCenter;
	params.BoxOrientation = BoxOrientation;
	params.LocalBoxHalfExtents = LocalBoxHalfExtents;
	params.Surfaces = Surfaces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionUtils.GetRotationAngleAroundAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// TEnumAsByte<EAxis>             RotationAxis                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXLABInteractionUtils::STATIC_GetRotationAngleAroundAxis(const struct FTransform& Transform, TEnumAsByte<EAxis> RotationAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionUtils.GetRotationAngleAroundAxis");

	UXLABInteractionUtils_GetRotationAngleAroundAxis_Params params;
	params.Transform = Transform;
	params.RotationAxis = RotationAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionUtils.GetInteractionManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AXLABInteractionManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXLABInteractionManager* UXLABInteractionUtils::STATIC_GetInteractionManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionUtils.GetInteractionManager");

	UXLABInteractionUtils_GetInteractionManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractionUtils.DrawDebugString
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TextLocation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FString                 text                           (Parm, ZeroConstructor)
// float                          FontScale                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TestBaseActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TextColor                      (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawShadow                    (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractionUtils::STATIC_DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const struct FString& text, float FontScale, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration, bool bDrawShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractionUtils.DrawDebugString");

	UXLABInteractionUtils_DrawDebugString_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TextLocation = TextLocation;
	params.text = text;
	params.FontScale = FontScale;
	params.TestBaseActor = TestBaseActor;
	params.TextColor = TextColor;
	params.Duration = Duration;
	params.bDrawShadow = bDrawShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractive.SetReleaseMethod
// (Native, Public, BlueprintCallable)
// Parameters:
// EXLABInteractionReleaseMethod  ReleaseMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractive::SetReleaseMethod(EXLABInteractionReleaseMethod ReleaseMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractive.SetReleaseMethod");

	UXLABInteractive_SetReleaseMethod_Params params;
	params.ReleaseMethod = ReleaseMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractive.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractive::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractive.SetEnabled");

	UXLABInteractive_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractive.GetReleaseMethod
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EXLABInteractionReleaseMethod  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EXLABInteractionReleaseMethod UXLABInteractive::GetReleaseMethod()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractive.GetReleaseMethod");

	UXLABInteractive_GetReleaseMethod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractive.GetInteractionTransform
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UXLABInteractive::GetInteractionTransform(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractive.GetInteractionTransform");

	UXLABInteractive_GetInteractionTransform_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractive.GetInteractionStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXLABInteractive::GetInteractionStrength(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractive.GetInteractionStrength");

	UXLABInteractive_GetInteractionStrength_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractive.GetInteractionData
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// class UXLABInteractionData*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXLABInteractionData* UXLABInteractive::GetInteractionData(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractive.GetInteractionData");

	UXLABInteractive_GetInteractionData_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractive.GetEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABInteractive::GetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractive.GetEnabled");

	UXLABInteractive_GetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractiveActor.SetPrimitive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InGrabbableComp                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AXLABInteractiveActor::SetPrimitive(class UPrimitiveComponent* InGrabbableComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveActor.SetPrimitive");

	AXLABInteractiveActor_SetPrimitive_Params params;
	params.InGrabbableComp = InGrabbableComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractiveActor.IsBeingHeld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXLABInteractiveActor::IsBeingHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveActor.IsBeingHeld");

	AXLABInteractiveActor_IsBeingHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractiveActor.GetPrimitive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* AXLABInteractiveActor::GetPrimitive()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveActor.GetPrimitive");

	AXLABInteractiveActor_GetPrimitive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractiveAreaComponent.GetInteractionTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UXLABInteractiveAreaComponent::GetInteractionTransform(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveAreaComponent.GetInteractionTransform");

	UXLABInteractiveAreaComponent_GetInteractionTransform_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractiveGroup.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UXLABInteractiveGroup::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveGroup.SetEnabled");

	UXLABInteractiveGroup_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRHandInteraction.XLABInteractiveGroup.GetPrimitive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UXLABInteractiveGroup::GetPrimitive()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveGroup.GetPrimitive");

	UXLABInteractiveGroup_GetPrimitive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractiveGroup.GetGroupSolver
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UXLABItemSolver*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXLABItemSolver* UXLABInteractiveGroup::GetGroupSolver()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveGroup.GetGroupSolver");

	UXLABInteractiveGroup_GetGroupSolver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABInteractiveGroup.GetEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLABInteractiveGroup::GetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABInteractiveGroup.GetEnabled");

	UXLABInteractiveGroup_GetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRHandInteraction.XLABTwoHandedVRPawn.GetHandlerForHand
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UXLABInteractionHandler> UXLABTwoHandedVRPawn::GetHandlerForHand(EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRHandInteraction.XLABTwoHandedVRPawn.GetHandlerForHand");

	UXLABTwoHandedVRPawn_GetHandlerForHand_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
