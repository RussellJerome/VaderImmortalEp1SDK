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

// Function Gaze.Gaze_Attention.UpdateAttention
// (Final, Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// EAttentionAction               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAttentionAction UGaze_Attention::UpdateAttention(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.UpdateAttention");

	UGaze_Attention_UpdateAttention_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Attention.UnForceAttention
// (Final, Native, Public, BlueprintCallable)

void UGaze_Attention::UnForceAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.UnForceAttention");

	UGaze_Attention_UnForceAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.SetFocus
// (Final, Native, Protected)
// Parameters:
// struct FAttentionFocus         nextFocus                      (Parm)

void UGaze_Attention::SetFocus(const struct FAttentionFocus& nextFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.SetFocus");

	UGaze_Attention_SetFocus_Params params;
	params.nextFocus = nextFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.IsValidFocus
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FAttentionFocus         attn                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_Attention::IsValidFocus(struct FAttentionFocus* attn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.IsValidFocus");

	UGaze_Attention_IsValidFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (attn != nullptr)
		*attn = params.attn;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Attention.GetWorldSpaceAttention
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_Attention::GetWorldSpaceAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.GetWorldSpaceAttention");

	UGaze_Attention_GetWorldSpaceAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Attention.GetAttention
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGaze_PointOfInterest*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGaze_PointOfInterest* UGaze_Attention::GetAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.GetAttention");

	UGaze_Attention_GetAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Attention.ForceAttentionChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGaze_PointOfInterest*   poi                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_Attention::ForceAttentionChange(class UGaze_PointOfInterest* poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.ForceAttentionChange");

	UGaze_Attention_ForceAttentionChange_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.EnableDebugRender
// (Final, Native, Public, BlueprintCallable)

void UGaze_Attention::EnableDebugRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.EnableDebugRender");

	UGaze_Attention_EnableDebugRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.DisableDebugRender
// (Final, Native, Public, BlueprintCallable)

void UGaze_Attention::DisableDebugRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.DisableDebugRender");

	UGaze_Attention_DisableDebugRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.DebugRender
// (Final, Native, Protected)

void UGaze_Attention::DebugRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.DebugRender");

	UGaze_Attention_DebugRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.ClearPOIArray
// (Final, Native, Protected)

void UGaze_Attention::ClearPOIArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.ClearPOIArray");

	UGaze_Attention_ClearPOIArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.ClearAttention
// (Final, Native, Public, BlueprintCallable)

void UGaze_Attention::ClearAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.ClearAttention");

	UGaze_Attention_ClearAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.ChooseNewFocus
// (Final, Native, Protected)

void UGaze_Attention::ChooseNewFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.ChooseNewFocus");

	UGaze_Attention_ChooseNewFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.AddSinglePOIToAttention
// (Final, Native, Protected)
// Parameters:
// class UGaze_PointOfInterest*   poi                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_Attention::AddSinglePOIToAttention(class UGaze_PointOfInterest* poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.AddSinglePOIToAttention");

	UGaze_Attention_AddSinglePOIToAttention_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.AddPOIAndGroupToAttention
// (Final, Native, Protected)
// Parameters:
// class UGaze_PointOfInterest*   poi                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_Attention::AddPOIAndGroupToAttention(class UGaze_PointOfInterest* poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.AddPOIAndGroupToAttention");

	UGaze_Attention_AddPOIAndGroupToAttention_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.AddGroupToAttention
// (Final, Native, Protected)
// Parameters:
// class AActor*                  interestingActor               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_Attention::AddGroupToAttention(class AActor* interestingActor, const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.AddGroupToAttention");

	UGaze_Attention_AddGroupToAttention_Params params;
	params.interestingActor = interestingActor;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Attention.AddEntireActorToAttention
// (Final, Native, Protected)
// Parameters:
// class AActor*                  interestingActor               (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_Attention::AddEntireActorToAttention(class AActor* interestingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Attention.AddEntireActorToAttention");

	UGaze_Attention_AddEntireActorToAttention_Params params;
	params.interestingActor = interestingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_BlendSpace.VectorToSpace
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 lookAtVector                   (Parm, IsPlainOldData)
// struct FVector                 spaceVector                    (Parm, IsPlainOldData)
// struct FRotator                spaceRotator                   (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_BlendSpace::VectorToSpace(const struct FVector& lookAtVector, const struct FVector& spaceVector, const struct FRotator& spaceRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_BlendSpace.VectorToSpace");

	UGaze_BlendSpace_VectorToSpace_Params params;
	params.lookAtVector = lookAtVector;
	params.spaceVector = spaceVector;
	params.spaceRotator = spaceRotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_BlendSpace.VectorToHeadingForEyes
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 perceptionFacing               (Parm, IsPlainOldData)
// struct FVector                 localLookAt                    (Parm, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGaze_BlendSpace::VectorToHeadingForEyes(const struct FVector& perceptionFacing, const struct FVector& localLookAt, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_BlendSpace.VectorToHeadingForEyes");

	UGaze_BlendSpace_VectorToHeadingForEyes_Params params;
	params.perceptionFacing = perceptionFacing;
	params.localLookAt = localLookAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function Gaze.Gaze_BlendSpace.VectorToHeading
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 perceptionFacing               (Parm, IsPlainOldData)
// struct FVector                 localLookAt                    (Parm, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGaze_BlendSpace::VectorToHeading(const struct FVector& perceptionFacing, const struct FVector& localLookAt, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_BlendSpace.VectorToHeading");

	UGaze_BlendSpace_VectorToHeading_Params params;
	params.perceptionFacing = perceptionFacing;
	params.localLookAt = localLookAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function Gaze.Gaze_BlendSpace.VectorToActorHeading
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 localLookAt                    (Parm, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGaze_BlendSpace::VectorToActorHeading(const struct FVector& localLookAt, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_BlendSpace.VectorToActorHeading");

	UGaze_BlendSpace_VectorToActorHeading_Params params;
	params.localLookAt = localLookAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function Gaze.Gaze_BlendSpace.VectorSpaceToHeading
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 localLookAt                    (Parm, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGaze_BlendSpace::VectorSpaceToHeading(const struct FVector& localLookAt, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_BlendSpace.VectorSpaceToHeading");

	UGaze_BlendSpace_VectorSpaceToHeading_Params params;
	params.localLookAt = localLookAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function Gaze.Gaze_BlendSpace.GetBoneTransform
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGaze_BlendSpace::GetBoneTransform(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_BlendSpace.GetBoneTransform");

	UGaze_BlendSpace_GetBoneTransform_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Daydream.Update
// (Final, Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_Daydream::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Daydream.Update");

	UGaze_Daydream_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Daydream.StopDaydream
// (Final, Native, Protected)

void UGaze_Daydream::StopDaydream()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Daydream.StopDaydream");

	UGaze_Daydream_StopDaydream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Daydream.StartDaydream
// (Final, Native, Protected)

void UGaze_Daydream::StartDaydream()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Daydream.StartDaydream");

	UGaze_Daydream_StartDaydream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Daydream.GetDayDreamAngles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGaze_Daydream::GetDayDreamAngles(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Daydream.GetDayDreamAngles");

	UGaze_Daydream_GetDayDreamAngles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function Gaze.Gaze_Daydream.GetDayDreamActivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_Daydream::GetDayDreamActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Daydream.GetDayDreamActivity");

	UGaze_Daydream_GetDayDreamActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Daydream.EnableDaydream
// (Final, Native, Public, BlueprintCallable)

void UGaze_Daydream::EnableDaydream()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Daydream.EnableDaydream");

	UGaze_Daydream_EnableDaydream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Daydream.DisableDaydream
// (Final, Native, Public, BlueprintCallable)

void UGaze_Daydream::DisableDaydream()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Daydream.DisableDaydream");

	UGaze_Daydream_DisableDaydream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.Update
// (Final, Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_EyeVector::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.Update");

	UGaze_EyeVector_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.TriggerSaccade
// (Final, Native, Public, BlueprintCallable)

void UGaze_EyeVector::TriggerSaccade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.TriggerSaccade");

	UGaze_EyeVector_TriggerSaccade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.SaccadeToWorldspacePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 worldspacePoint                (Parm, IsPlainOldData)

void UGaze_EyeVector::SaccadeToWorldspacePoint(const struct FVector& worldspacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.SaccadeToWorldspacePoint");

	UGaze_EyeVector_SaccadeToWorldspacePoint_Params params;
	params.worldspacePoint = worldspacePoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.SaccadeToPOI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGaze_PointOfInterest*   newPOI                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_EyeVector::SaccadeToPOI(class UGaze_PointOfInterest* newPOI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.SaccadeToPOI");

	UGaze_EyeVector_SaccadeToPOI_Params params;
	params.newPOI = newPOI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.PreUpdate
// (Final, Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_EyeVector::PreUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.PreUpdate");

	UGaze_EyeVector_PreUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.Linger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_EyeVector::Linger(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.Linger");

	UGaze_EyeVector_Linger_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.GetPitchAndYaw
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          leftEye                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          rightEye                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGaze_EyeVector::GetPitchAndYaw(float* Pitch, float* leftEye, float* rightEye)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.GetPitchAndYaw");

	UGaze_EyeVector_GetPitchAndYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (leftEye != nullptr)
		*leftEye = params.leftEye;
	if (rightEye != nullptr)
		*rightEye = params.rightEye;
}


// Function Gaze.Gaze_EyeVector.EnableEyeVector
// (Final, Native, Public, BlueprintCallable)

void UGaze_EyeVector::EnableEyeVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.EnableEyeVector");

	UGaze_EyeVector_EnableEyeVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_EyeVector.DisableEyeVector
// (Final, Native, Public, BlueprintCallable)

void UGaze_EyeVector::DisableEyeVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_EyeVector.DisableEyeVector");

	UGaze_EyeVector_DisableEyeVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_FloatNode.Evaluate
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_FloatNode::Evaluate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_FloatNode.Evaluate");

	UGaze_FloatNode_Evaluate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_FloatConstant.SetValue
// (Final, Native, Public)
// Parameters:
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_FloatConstant::SetValue(float V)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_FloatConstant.SetValue");

	UGaze_FloatConstant_SetValue_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_FloatConstant.Evaluate
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_FloatConstant::Evaluate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_FloatConstant.Evaluate");

	UGaze_FloatConstant_Evaluate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_FloatLerp.Set
// (Final, Native, Public)
// Parameters:
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_FloatLerp::Set(float Start, float End, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_FloatLerp.Set");

	UGaze_FloatLerp_Set_Params params;
	params.Start = Start;
	params.End = End;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_FloatLerp.Evaluate
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_FloatLerp::Evaluate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_FloatLerp.Evaluate");

	UGaze_FloatLerp_Evaluate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_FloatSCurve.Set
// (Final, Native, Public)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_FloatSCurve::Set(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_FloatSCurve.Set");

	UGaze_FloatSCurve_Set_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_FloatSCurve.Evaluate
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_FloatSCurve::Evaluate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_FloatSCurve.Evaluate");

	UGaze_FloatSCurve_Evaluate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Update_UsingAlertness
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_HeadVector::Update_UsingAlertness(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Update_UsingAlertness");

	UGaze_HeadVector_Update_UsingAlertness_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_HeadVector.SetUrgency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_HeadVector::SetUrgency(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.SetUrgency");

	UGaze_HeadVector_SetUrgency_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_HeadVector.SetPOILocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 poi                            (Parm, IsPlainOldData)

void UGaze_HeadVector::SetPOILocation(const struct FVector& poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.SetPOILocation");

	UGaze_HeadVector_SetPOILocation_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_HeadVector.SetPOI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGaze_PointOfInterest*   poi                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_HeadVector::SetPOI(class UGaze_PointOfInterest* poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.SetPOI");

	UGaze_HeadVector_SetPOI_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_HeadVector.ResponseCurve
// (Final, Native, Public)
// Parameters:
// float                          In                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::ResponseCurve(float In)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.ResponseCurve");

	UGaze_HeadVector_ResponseCurve_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Lerp
// (Final, Native, Public)
// Parameters:
// float                          from                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          to                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::Lerp(float from, float to, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Lerp");

	UGaze_HeadVector_Lerp_Params params;
	params.from = from;
	params.to = to;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.HV2_GetVectorToPOI
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_HeadVector::HV2_GetVectorToPOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.HV2_GetVectorToPOI");

	UGaze_HeadVector_HV2_GetVectorToPOI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetTurnSign
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetTurnSign()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetTurnSign");

	UGaze_HeadVector_GetTurnSign_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetRootToPOI
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_HeadVector::GetRootToPOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetRootToPOI");

	UGaze_HeadVector_GetRootToPOI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetPTHSign
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetPTHSign()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetPTHSign");

	UGaze_HeadVector_GetPTHSign_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetPOILocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_HeadVector::GetPOILocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetPOILocation");

	UGaze_HeadVector_GetPOILocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetPitchToPOI
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetPitchToPOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetPitchToPOI");

	UGaze_HeadVector_GetPitchToPOI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetPerceptionToHead
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetPerceptionToHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetPerceptionToHead");

	UGaze_HeadVector_GetPerceptionToHead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetNormalisedPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetNormalisedPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetNormalisedPitch");

	UGaze_HeadVector_GetNormalisedPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetNormalisdAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetNormalisdAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetNormalisdAngle");

	UGaze_HeadVector_GetNormalisdAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetLimitedAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetLimitedAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetLimitedAngle");

	UGaze_HeadVector_GetLimitedAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetIdealHead
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetIdealHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetIdealHead");

	UGaze_HeadVector_GetIdealHead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetHeadYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetHeadYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetHeadYaw");

	UGaze_HeadVector_GetHeadYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetHeadPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetHeadPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetHeadPitch");

	UGaze_HeadVector_GetHeadPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.GetActualHead
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::GetActualHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.GetActualHead");

	UGaze_HeadVector_GetActualHead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Get_YawToPOI
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::Get_YawToPOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Get_YawToPOI");

	UGaze_HeadVector_Get_YawToPOI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Get_normalizedYawToPOI
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::Get_normalizedYawToPOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Get_normalizedYawToPOI");

	UGaze_HeadVector_Get_normalizedYawToPOI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Get_idealYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::Get_idealYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Get_idealYaw");

	UGaze_HeadVector_Get_idealYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Get_idealPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::Get_idealPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Get_idealPitch");

	UGaze_HeadVector_Get_idealPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Get_eyeContributionYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::Get_eyeContributionYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Get_eyeContributionYaw");

	UGaze_HeadVector_Get_eyeContributionYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.Get_actualYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_HeadVector::Get_actualYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.Get_actualYaw");

	UGaze_HeadVector_Get_actualYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.EnableDebugDraw
// (Final, Native, Public, BlueprintCallable)

void UGaze_HeadVector::EnableDebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.EnableDebugDraw");

	UGaze_HeadVector_EnableDebugDraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_HeadVector.DisableDebugDraw
// (Final, Native, Public, BlueprintCallable)

void UGaze_HeadVector::DisableDebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.DisableDebugDraw");

	UGaze_HeadVector_DisableDebugDraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_HeadVector.CalculateYawSpaceToPOI
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 referenceVector                (Parm, OutParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_HeadVector::CalculateYawSpaceToPOI(struct FVector* referenceVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.CalculateYawSpaceToPOI");

	UGaze_HeadVector_CalculateYawSpaceToPOI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (referenceVector != nullptr)
		*referenceVector = params.referenceVector;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.CalculateReferenceLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_HeadVector::CalculateReferenceLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.CalculateReferenceLocation");

	UGaze_HeadVector_CalculateReferenceLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_HeadVector.CalculateOmegaContribution
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_HeadVector::CalculateOmegaContribution(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_HeadVector.CalculateOmegaContribution");

	UGaze_HeadVector_CalculateOmegaContribution_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Perception.GetSpottedPOIHacks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGaze_PointOfInterest*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGaze_PointOfInterest* UGaze_Perception::GetSpottedPOIHacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Perception.GetSpottedPOIHacks");

	UGaze_Perception_GetSpottedPOIHacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Perception.GetSpottedActorHacks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGaze_Perception::GetSpottedActorHacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Perception.GetSpottedActorHacks");

	UGaze_Perception_GetSpottedActorHacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_Perception.EvaluateTargets
// (Native, Event, Protected, BlueprintEvent)

void UGaze_Perception::EvaluateTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Perception.EvaluateTargets");

	UGaze_Perception_EvaluateTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Perception.EnableDebugRender
// (Final, Native, Public, BlueprintCallable)

void UGaze_Perception::EnableDebugRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Perception.EnableDebugRender");

	UGaze_Perception_EnableDebugRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Perception.DisableDebugRender
// (Final, Native, Public, BlueprintCallable)

void UGaze_Perception::DisableDebugRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Perception.DisableDebugRender");

	UGaze_Perception_DisableDebugRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Perception.DebugRender
// (Final, Native, Protected)

void UGaze_Perception::DebugRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Perception.DebugRender");

	UGaze_Perception_DebugRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PerceptionPolicy.EnableDebug
// (Final, Native, Public)

void UGaze_PerceptionPolicy::EnableDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionPolicy.EnableDebug");

	UGaze_PerceptionPolicy_EnableDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PerceptionPolicy.Discover
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  perceptionOwner                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 perceptionRoot                 (Parm, IsPlainOldData)
// struct FVector                 Facing                         (Parm, IsPlainOldData)
// TArray<class UGaze_PointOfInterest*> pois                           (Parm, OutParm, ZeroConstructor)
// TArray<struct FPerceivedActor> perceived                      (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGaze_PerceptionPolicy::Discover(class AActor* perceptionOwner, const struct FVector& perceptionRoot, const struct FVector& Facing, TArray<class UGaze_PointOfInterest*>* pois, TArray<struct FPerceivedActor>* perceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionPolicy.Discover");

	UGaze_PerceptionPolicy_Discover_Params params;
	params.perceptionOwner = perceptionOwner;
	params.perceptionRoot = perceptionRoot;
	params.Facing = Facing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pois != nullptr)
		*pois = params.pois;
	if (perceived != nullptr)
		*perceived = params.perceived;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PerceptionPolicy.DisableDebug
// (Final, Native, Public)

void UGaze_PerceptionPolicy::DisableDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionPolicy.DisableDebug");

	UGaze_PerceptionPolicy_DisableDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PerceptionPolicy.DebugDraw
// (Native, Public, HasDefaults)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Root                           (Parm, IsPlainOldData)
// struct FVector                 Facing                         (Parm, IsPlainOldData)

void UGaze_PerceptionPolicy::DebugDraw(class UWorld* World, const struct FVector& Root, const struct FVector& Facing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionPolicy.DebugDraw");

	UGaze_PerceptionPolicy_DebugDraw_Params params;
	params.World = World;
	params.Root = Root;
	params.Facing = Facing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PerceptionCone.Discover
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  perceptionOwner                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 perceptionRoot                 (Parm, IsPlainOldData)
// struct FVector                 Facing                         (Parm, IsPlainOldData)
// TArray<class UGaze_PointOfInterest*> pois                           (Parm, OutParm, ZeroConstructor)
// TArray<struct FPerceivedActor> perceived                      (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGaze_PerceptionCone::Discover(class AActor* perceptionOwner, const struct FVector& perceptionRoot, const struct FVector& Facing, TArray<class UGaze_PointOfInterest*>* pois, TArray<struct FPerceivedActor>* perceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionCone.Discover");

	UGaze_PerceptionCone_Discover_Params params;
	params.perceptionOwner = perceptionOwner;
	params.perceptionRoot = perceptionRoot;
	params.Facing = Facing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pois != nullptr)
		*pois = params.pois;
	if (perceived != nullptr)
		*perceived = params.perceived;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PerceptionCone.DebugDraw
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Root                           (Parm, IsPlainOldData)
// struct FVector                 Facing                         (Parm, IsPlainOldData)

void UGaze_PerceptionCone::DebugDraw(class UWorld* World, const struct FVector& Root, const struct FVector& Facing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionCone.DebugDraw");

	UGaze_PerceptionCone_DebugDraw_Params params;
	params.World = World;
	params.Root = Root;
	params.Facing = Facing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PerceptionRaycastCone.Discover
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  perceptionOwner                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 perceptionRoot                 (Parm, IsPlainOldData)
// struct FVector                 Facing                         (Parm, IsPlainOldData)
// TArray<class UGaze_PointOfInterest*> pois                           (Parm, OutParm, ZeroConstructor)
// TArray<struct FPerceivedActor> perceived                      (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGaze_PerceptionRaycastCone::Discover(class AActor* perceptionOwner, const struct FVector& perceptionRoot, const struct FVector& Facing, TArray<class UGaze_PointOfInterest*>* pois, TArray<struct FPerceivedActor>* perceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionRaycastCone.Discover");

	UGaze_PerceptionRaycastCone_Discover_Params params;
	params.perceptionOwner = perceptionOwner;
	params.perceptionRoot = perceptionRoot;
	params.Facing = Facing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pois != nullptr)
		*pois = params.pois;
	if (perceived != nullptr)
		*perceived = params.perceived;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PerceptionRaycastCone.DebugDraw
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Root                           (Parm, IsPlainOldData)
// struct FVector                 Facing                         (Parm, IsPlainOldData)

void UGaze_PerceptionRaycastCone::DebugDraw(class UWorld* World, const struct FVector& Root, const struct FVector& Facing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PerceptionRaycastCone.DebugDraw");

	UGaze_PerceptionRaycastCone_DebugDraw_Params params;
	params.World = World;
	params.Root = Root;
	params.Facing = Facing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PointOfInterest.RemoveTag
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   RemoveTag                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGaze_PointOfInterest::RemoveTag(const struct FName& RemoveTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.RemoveTag");

	UGaze_PointOfInterest_RemoveTag_Params params;
	params.RemoveTag = RemoveTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PointOfInterest.Register
// (Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_PointOfInterest::Register(class AGameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.Register");

	UGaze_PointOfInterest_Register_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PointOfInterest.IsInGroup
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_PointOfInterest::IsInGroup(const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.IsInGroup");

	UGaze_PointOfInterest_IsInGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PointOfInterest.GetRadius
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_PointOfInterest::GetRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.GetRadius");

	UGaze_PointOfInterest_GetRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PointOfInterest.GetPrimaryGroup
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UGaze_PointOfInterest::GetPrimaryGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.GetPrimaryGroup");

	UGaze_PointOfInterest_GetPrimaryGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PointOfInterest.Deregister
// (Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_PointOfInterest::Deregister(class AGameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.Deregister");

	UGaze_PointOfInterest_Deregister_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PointOfInterest.DebugDraw
// (Native, Public, HasDefaults)
// Parameters:
// struct FColor                  col                            (Parm, IsPlainOldData)

void UGaze_PointOfInterest::DebugDraw(const struct FColor& col)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.DebugDraw");

	UGaze_PointOfInterest_DebugDraw_Params params;
	params.col = col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_PointOfInterest.ContainsTag
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   checkTag                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_PointOfInterest::ContainsTag(const struct FName& checkTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.ContainsTag");

	UGaze_PointOfInterest_ContainsTag_Params params;
	params.checkTag = checkTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PointOfInterest.ContainsAnyTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           checkTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_PointOfInterest::ContainsAnyTags(TArray<struct FName> checkTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.ContainsAnyTags");

	UGaze_PointOfInterest_ContainsAnyTags_Params params;
	params.checkTags = checkTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PointOfInterest.ContainsAllTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           checkTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_PointOfInterest::ContainsAllTags(TArray<struct FName> checkTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.ContainsAllTags");

	UGaze_PointOfInterest_ContainsAllTags_Params params;
	params.checkTags = checkTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_PointOfInterest.AddTag
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AddTag                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGaze_PointOfInterest::AddTag(const struct FName& AddTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_PointOfInterest.AddTag");

	UGaze_PointOfInterest_AddTag_Params params;
	params.AddTag = AddTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POI.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   RemoveTag                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGaze_POI::RemoveTag(const struct FName& RemoveTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.RemoveTag");

	UGaze_POI_RemoveTag_Params params;
	params.RemoveTag = RemoveTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POI.Register
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_POI::Register(class AGameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.Register");

	UGaze_POI_Register_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POI.IsInGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_POI::IsInGroup(const struct FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.IsInGroup");

	UGaze_POI_IsInGroup_Params params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_POI.GetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGaze_POI::GetRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.GetRadius");

	UGaze_POI_GetRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_POI.GetPrimaryGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UGaze_POI::GetPrimaryGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.GetPrimaryGroup");

	UGaze_POI_GetPrimaryGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_POI.Deregister
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_POI::Deregister(class AGameStateBase* GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.Deregister");

	UGaze_POI_Deregister_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POI.DebugDraw
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FColor                  col                            (Parm, IsPlainOldData)

void UGaze_POI::DebugDraw(const struct FColor& col)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.DebugDraw");

	UGaze_POI_DebugDraw_Params params;
	params.col = col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POI.ContainsTag
// (Final, Native, Public)
// Parameters:
// struct FName                   checkTag                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_POI::ContainsTag(const struct FName& checkTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.ContainsTag");

	UGaze_POI_ContainsTag_Params params;
	params.checkTag = checkTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_POI.ContainsAnyTags
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           checkTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_POI::ContainsAnyTags(TArray<struct FName> checkTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.ContainsAnyTags");

	UGaze_POI_ContainsAnyTags_Params params;
	params.checkTags = checkTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_POI.ContainsAllTags
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           checkTags                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGaze_POI::ContainsAllTags(TArray<struct FName> checkTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.ContainsAllTags");

	UGaze_POI_ContainsAllTags_Params params;
	params.checkTags = checkTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_POI.AddTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   AddTag                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGaze_POI::AddTag(const struct FName& AddTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI.AddTag");

	UGaze_POI_AddTag_Params params;
	params.AddTag = AddTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POIContainer.RemovePOI
// (Final, Native, Public)
// Parameters:
// class UGaze_PointOfInterest*   poi                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_POIContainer::RemovePOI(class UGaze_PointOfInterest* poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POIContainer.RemovePOI");

	UGaze_POIContainer_RemovePOI_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POIContainer.AddPOI
// (Final, Native, Public)
// Parameters:
// class UGaze_PointOfInterest*   poi                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_POIContainer::AddPOI(class UGaze_PointOfInterest* poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POIContainer.AddPOI");

	UGaze_POIContainer_AddPOI_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_POI_Visualiser.DebugDraw
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FColor                  col                            (Parm, IsPlainOldData)

void UGaze_POI_Visualiser::DebugDraw(const struct FColor& col)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_POI_Visualiser.DebugDraw");

	UGaze_POI_Visualiser_DebugDraw_Params params;
	params.col = col;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Task.Update
// (Final, Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_Task::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Task.Update");

	UGaze_Task_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_Task.LookForNewTask
// (Final, Native, Protected)

void UGaze_Task::LookForNewTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_Task.LookForNewTask");

	UGaze_Task_LookForNewTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorNode.Tick
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorNode::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorNode.Tick");

	UGaze_VectorNode_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorNode.Replace
// (Native, Public)
// Parameters:
// class UGaze_VectorNode*        Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGaze_VectorNode*        Destination                    (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorNode::Replace(class UGaze_VectorNode* Source, class UGaze_VectorNode* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorNode.Replace");

	UGaze_VectorNode_Replace_Params params;
	params.Source = Source;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorNode.Evaluate
// (Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_VectorNode::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorNode.Evaluate");

	UGaze_VectorNode_Evaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_VectorActor.Tick
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorActor::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorActor.Tick");

	UGaze_VectorActor_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorActor.SetActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  T                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   B                              (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorActor::SetActor(class AActor* T, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorActor.SetActor");

	UGaze_VectorActor_SetActor_Params params;
	params.T = T;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorActor.Evaluate
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_VectorActor::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorActor.Evaluate");

	UGaze_VectorActor_Evaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_VectorBlend.Tick
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorBlend::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorBlend.Tick");

	UGaze_VectorBlend_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorBlend.SetRange
// (Final, Native, Public)
// Parameters:
// class UGaze_VectorNode*        S                              (Parm, ZeroConstructor, IsPlainOldData)
// class UGaze_VectorNode*        E                              (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorBlend::SetRange(class UGaze_VectorNode* S, class UGaze_VectorNode* E)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorBlend.SetRange");

	UGaze_VectorBlend_SetRange_Params params;
	params.S = S;
	params.E = E;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorBlend.SetParent
// (Final, Native, Public)
// Parameters:
// class UGaze_VectorNode*        P                              (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorBlend::SetParent(class UGaze_VectorNode* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorBlend.SetParent");

	UGaze_VectorBlend_SetParent_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorBlend.SetFunction
// (Final, Native, Public)
// Parameters:
// class UGaze_FloatNode*         F                              (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorBlend::SetFunction(class UGaze_FloatNode* F)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorBlend.SetFunction");

	UGaze_VectorBlend_SetFunction_Params params;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorBlend.Evaluate
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_VectorBlend::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorBlend.Evaluate");

	UGaze_VectorBlend_Evaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_VectorConstant.Tick
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorConstant::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorConstant.Tick");

	UGaze_VectorConstant_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorConstant.SetVector
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 V                              (Parm, IsPlainOldData)

void UGaze_VectorConstant::SetVector(const struct FVector& V)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorConstant.SetVector");

	UGaze_VectorConstant_SetVector_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorConstant.Evaluate
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_VectorConstant::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorConstant.Evaluate");

	UGaze_VectorConstant_Evaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_VectorPOI.Tick
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorPOI::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorPOI.Tick");

	UGaze_VectorPOI_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorPOI.SetPOI
// (Final, Native, Public)
// Parameters:
// class UGaze_PointOfInterest*   poi                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGaze_VectorPOI::SetPOI(class UGaze_PointOfInterest* poi)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorPOI.SetPOI");

	UGaze_VectorPOI_SetPOI_Params params;
	params.poi = poi;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorPOI.Evaluate
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_VectorPOI::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorPOI.Evaluate");

	UGaze_VectorPOI_Evaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gaze.Gaze_VectorReference.Tick
// (Final, Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorReference::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorReference.Tick");

	UGaze_VectorReference_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorReference.Replace
// (Final, Native, Public)
// Parameters:
// class UGaze_VectorNode*        Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGaze_VectorNode*        Destination                    (Parm, ZeroConstructor, IsPlainOldData)

void UGaze_VectorReference::Replace(class UGaze_VectorNode* Source, class UGaze_VectorNode* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorReference.Replace");

	UGaze_VectorReference_Replace_Params params;
	params.Source = Source;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gaze.Gaze_VectorReference.Evaluate
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGaze_VectorReference::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gaze.Gaze_VectorReference.Evaluate");

	UGaze_VectorReference_Evaluate_Params params;

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
