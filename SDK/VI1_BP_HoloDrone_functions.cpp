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

// Function BP_HoloDrone.BP_HoloDrone_C.OnEndCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 BladeDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoloDrone_C::OnEndCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& BladeDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnEndCut");

	ABP_HoloDrone_C_OnEndCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.BladeDirection = BladeDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnStartCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CutEntryLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoloDrone_C::OnStartCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FName& BoneName, const struct FVector& CutEntryLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnStartCut");

	ABP_HoloDrone_C_OnStartCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.BoneName = BoneName;
	params.CutEntryLocation = CutEntryLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnUpdateCut
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CuttingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 CutEntryLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CutEntryNormal                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               CollisionUV                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CutExitLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoloDrone_C::OnUpdateCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& CutEntryLocation, const struct FVector& CutEntryNormal, const struct FVector2D& CollisionUV, const struct FName& BoneName, const struct FVector& CutExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnUpdateCut");

	ABP_HoloDrone_C_OnUpdateCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.CutEntryLocation = CutEntryLocation;
	params.CutEntryNormal = CutEntryNormal;
	params.CollisionUV = CollisionUV;
	params.BoneName = BoneName;
	params.CutExitLocation = CutExitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone.BP_HoloDrone_C.UsesCuttingFX
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoloDrone_C::UsesCuttingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.UsesCuttingFX");

	ABP_HoloDrone_C_UsesCuttingFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ChangeHolographicButtonColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>     WaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::ChangeHolographicButtonColors(TEnumAsByte<EnemyWaveType> WaveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ChangeHolographicButtonColors");

	ABP_HoloDrone_C_ChangeHolographicButtonColors_Params params;
	params.WaveType = WaveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ChangeHologramBeamColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>     WaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::ChangeHologramBeamColor(TEnumAsByte<EnemyWaveType> WaveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ChangeHologramBeamColor");

	ABP_HoloDrone_C_ChangeHologramBeamColor_Params params;
	params.WaveType = WaveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.GetFastFillValue
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTimelineComponent*      Timeline                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_HoloDrone_C::GetFastFillValue(class UTimelineComponent* Timeline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.GetFastFillValue");

	ABP_HoloDrone_C_GetFastFillValue_Params params;
	params.Timeline = Timeline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone.BP_HoloDrone_C.DoesCutExceedsMinimumCutSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ULightsaberBladeComponent* LightsaberBladeComponent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoloDrone_C::DoesCutExceedsMinimumCutSpeed(class ULightsaberBladeComponent* LightsaberBladeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.DoesCutExceedsMinimumCutSpeed");

	ABP_HoloDrone_C_DoesCutExceedsMinimumCutSpeed_Params params;
	params.LightsaberBladeComponent = LightsaberBladeComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone.BP_HoloDrone_C.SetJumbotronDisplayPointAndCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHolodroneDisplayPoints DisplayPoints                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          PathRatio                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::SetJumbotronDisplayPointAndCheckpoint(const struct FHolodroneDisplayPoints& DisplayPoints, float PathRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.SetJumbotronDisplayPointAndCheckpoint");

	ABP_HoloDrone_C_SetJumbotronDisplayPointAndCheckpoint_Params params;
	params.DisplayPoints = DisplayPoints;
	params.PathRatio = PathRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.HandleJumbotronCheckpointReached
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::HandleJumbotronCheckpointReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.HandleJumbotronCheckpointReached");

	ABP_HoloDrone_C_HandleJumbotronCheckpointReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.GetCurrentWaveParameter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_HoloDrone_C::GetCurrentWaveParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.GetCurrentWaveParameter");

	ABP_HoloDrone_C_GetCurrentWaveParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone.BP_HoloDrone_C.StopWaving
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::StopWaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.StopWaving");

	ABP_HoloDrone_C_StopWaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.StartWaving
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::StartWaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.StartWaving");

	ABP_HoloDrone_C_StartWaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.UserConstructionScript");

	ABP_HoloDrone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleJumbotron__FinishedFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ScaleJumbotron__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleJumbotron__FinishedFunc");

	ABP_HoloDrone_C_Timeline_ScaleJumbotron__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleJumbotron__UpdateFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ScaleJumbotron__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleJumbotron__UpdateFunc");

	ABP_HoloDrone_C_Timeline_ScaleJumbotron__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleMinitron__FinishedFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ScaleMinitron__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleMinitron__FinishedFunc");

	ABP_HoloDrone_C_Timeline_ScaleMinitron__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleMinitron__UpdateFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ScaleMinitron__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleMinitron__UpdateFunc");

	ABP_HoloDrone_C_Timeline_ScaleMinitron__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_NextButtonMeter__FinishedFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_NextButtonMeter__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_NextButtonMeter__FinishedFunc");

	ABP_HoloDrone_C_Timeline_NextButtonMeter__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_NextButtonMeter__UpdateFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_NextButtonMeter__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_NextButtonMeter__UpdateFunc");

	ABP_HoloDrone_C_Timeline_NextButtonMeter__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__FinishedFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ReplayButtonMeter__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__FinishedFunc");

	ABP_HoloDrone_C_Timeline_ReplayButtonMeter__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__UpdateFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ReplayButtonMeter__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__UpdateFunc");

	ABP_HoloDrone_C_Timeline_ReplayButtonMeter__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__myeventrack__EventFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ReplayButtonMeter__myeventrack__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__myeventrack__EventFunc");

	ABP_HoloDrone_C_Timeline_ReplayButtonMeter__myeventrack__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleButtons__FinishedFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ScaleButtons__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleButtons__FinishedFunc");

	ABP_HoloDrone_C_Timeline_ScaleButtons__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleButtons__UpdateFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_ScaleButtons__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleButtons__UpdateFunc");

	ABP_HoloDrone_C_Timeline_ScaleButtons__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_HologramProjection__FinishedFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_HologramProjection__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_HologramProjection__FinishedFunc");

	ABP_HoloDrone_C_Timeline_HologramProjection__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_HologramProjection__UpdateFunc
// (BlueprintEvent)

void ABP_HoloDrone_C::Timeline_HologramProjection__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.Timeline_HologramProjection__UpdateFunc");

	ABP_HoloDrone_C_Timeline_HologramProjection__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnNotifyEnd_75BFFA3F40D715D72C24AB8E495AADC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::OnNotifyEnd_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnNotifyEnd_75BFFA3F40D715D72C24AB8E495AADC5");

	ABP_HoloDrone_C_OnNotifyEnd_75BFFA3F40D715D72C24AB8E495AADC5_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnNotifyBegin_75BFFA3F40D715D72C24AB8E495AADC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::OnNotifyBegin_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnNotifyBegin_75BFFA3F40D715D72C24AB8E495AADC5");

	ABP_HoloDrone_C_OnNotifyBegin_75BFFA3F40D715D72C24AB8E495AADC5_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnInterrupted_75BFFA3F40D715D72C24AB8E495AADC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::OnInterrupted_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnInterrupted_75BFFA3F40D715D72C24AB8E495AADC5");

	ABP_HoloDrone_C_OnInterrupted_75BFFA3F40D715D72C24AB8E495AADC5_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnBlendOut_75BFFA3F40D715D72C24AB8E495AADC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::OnBlendOut_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnBlendOut_75BFFA3F40D715D72C24AB8E495AADC5");

	ABP_HoloDrone_C_OnBlendOut_75BFFA3F40D715D72C24AB8E495AADC5_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnCompleted_75BFFA3F40D715D72C24AB8E495AADC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::OnCompleted_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnCompleted_75BFFA3F40D715D72C24AB8E495AADC5");

	ABP_HoloDrone_C_OnCompleted_75BFFA3F40D715D72C24AB8E495AADC5_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.PlayJumbotronAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::PlayJumbotronAnim(bool Forward_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.PlayJumbotronAnim");

	ABP_HoloDrone_C_PlayJumbotronAnim_Params params;
	params.Forward_ = Forward_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.PlayMinitronAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::PlayMinitronAnim(bool Forward_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.PlayMinitronAnim");

	ABP_HoloDrone_C_PlayMinitronAnim_Params params;
	params.Forward_ = Forward_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.SetVoiceToneFromPerformance
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::SetVoiceToneFromPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.SetVoiceToneFromPerformance");

	ABP_HoloDrone_C_SetVoiceToneFromPerformance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_HoloDrone_C::BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_HoloDrone_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.HandleButtonFillCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasSelectedNext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::HandleButtonFillCompleted(bool HasSelectedNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.HandleButtonFillCompleted");

	ABP_HoloDrone_C_HandleButtonFillCompleted_Params params;
	params.HasSelectedNext = HasSelectedNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ReverseNextButton
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::ReverseNextButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ReverseNextButton");

	ABP_HoloDrone_C_ReverseNextButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ReverseReplayButton
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::ReverseReplayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ReverseReplayButton");

	ABP_HoloDrone_C_ReverseReplayButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ResetButtonProgress
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::ResetButtonProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ResetButtonProgress");

	ABP_HoloDrone_C_ResetButtonProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.SetButtonsEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::SetButtonsEnabled(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.SetButtonsEnabled");

	ABP_HoloDrone_C_SetButtonsEnabled_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.PlayButtonEnableAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::PlayButtonEnableAnimation(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.PlayButtonEnableAnimation");

	ABP_HoloDrone_C_PlayButtonEnableAnimation_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.BeginReplayButtonProgress
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::BeginReplayButtonProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.BeginReplayButtonProgress");

	ABP_HoloDrone_C_BeginReplayButtonProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.EndReplayButtonProgress
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::EndReplayButtonProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.EndReplayButtonProgress");

	ABP_HoloDrone_C_EndReplayButtonProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.BeginNextButtonProgress
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::BeginNextButtonProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.BeginNextButtonProgress");

	ABP_HoloDrone_C_BeginNextButtonProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.EndNextButtonProgress
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::EndNextButtonProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.EndNextButtonProgress");

	ABP_HoloDrone_C_EndNextButtonProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.FastforwardNextButton
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::FastforwardNextButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.FastforwardNextButton");

	ABP_HoloDrone_C_FastforwardNextButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.FastforwardReplayButton
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::FastforwardReplayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.FastforwardReplayButton");

	ABP_HoloDrone_C_FastforwardReplayButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.InitHologramBeam
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::InitHologramBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.InitHologramBeam");

	ABP_HoloDrone_C_InitHologramBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ShowHologramBeam
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::ShowHologramBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ShowHologramBeam");

	ABP_HoloDrone_C_ShowHologramBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.HideHologramBeam
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::HideHologramBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.HideHologramBeam");

	ABP_HoloDrone_C_HideHologramBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HoloDrone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ReceiveBeginPlay");

	ABP_HoloDrone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ReceiveTick");

	ABP_HoloDrone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoloDroneState>   NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::OnStateChanged(TEnumAsByte<EHoloDroneState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnStateChanged");

	ABP_HoloDrone_C_OnStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.RequestRoundDisplay
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::RequestRoundDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.RequestRoundDisplay");

	ABP_HoloDrone_C_RequestRoundDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.HandleBeginSpawn
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::HandleBeginSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.HandleBeginSpawn");

	ABP_HoloDrone_C_HandleBeginSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.HandleBeginDespawn
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::HandleBeginDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.HandleBeginDespawn");

	ABP_HoloDrone_C_HandleBeginDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ForceDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::ForceDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ForceDestroy");

	ABP_HoloDrone_C_ForceDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.BndEvt__Widget_Minitron_K2Node_ComponentBoundEvent_1_OnAllRewardsDisplayed__DelegateSignature
// (BlueprintEvent)

void ABP_HoloDrone_C::BndEvt__Widget_Minitron_K2Node_ComponentBoundEvent_1_OnAllRewardsDisplayed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.BndEvt__Widget_Minitron_K2Node_ComponentBoundEvent_1_OnAllRewardsDisplayed__DelegateSignature");

	ABP_HoloDrone_C_BndEvt__Widget_Minitron_K2Node_ComponentBoundEvent_1_OnAllRewardsDisplayed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.ExecuteUbergraph_BP_HoloDrone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_C::ExecuteUbergraph_BP_HoloDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.ExecuteUbergraph_BP_HoloDrone");

	ABP_HoloDrone_C_ExecuteUbergraph_BP_HoloDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone.BP_HoloDrone_C.OnBeginDisplayRound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_C::OnBeginDisplayRound__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone.BP_HoloDrone_C.OnBeginDisplayRound__DelegateSignature");

	ABP_HoloDrone_C_OnBeginDisplayRound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
