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

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetJumbotronPathCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Path_Ratio                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_Controller_C::SetJumbotronPathCheckpoint(float Path_Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetJumbotronPathCheckpoint");

	ABP_HoloDrone_Controller_C_SetJumbotronPathCheckpoint_Params params;
	params.Path_Ratio = Path_Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetDisplayPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHolodroneDisplayPoints DisplayPoints                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HoloDrone_Controller_C::SetDisplayPoints(const struct FHolodroneDisplayPoints& DisplayPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetDisplayPoints");

	ABP_HoloDrone_Controller_C_SetDisplayPoints_Params params;
	params.DisplayPoints = DisplayPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HasReachedJumbotronPathCheckpoint
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HoloDrone_Controller_C::HasReachedJumbotronPathCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HasReachedJumbotronPathCheckpoint");

	ABP_HoloDrone_Controller_C_HasReachedJumbotronPathCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SelectDisplayLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 DisplayLoc                     (Parm, OutParm, IsPlainOldData)

void ABP_HoloDrone_Controller_C::SelectDisplayLocation(struct FVector* DisplayLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SelectDisplayLocation");

	ABP_HoloDrone_Controller_C_SelectDisplayLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayLoc != nullptr)
		*DisplayLoc = params.DisplayLoc;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CheckFOV
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_Controller_C::CheckFOV(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CheckFOV");

	ABP_HoloDrone_Controller_C_CheckFOV_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.EndState
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::EndState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.EndState");

	ABP_HoloDrone_Controller_C_EndState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.DoManualPositionUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::DoManualPositionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.DoManualPositionUpdate");

	ABP_HoloDrone_Controller_C_DoManualPositionUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.GetManualPositionUpdateLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_HoloDrone_Controller_C::GetManualPositionUpdateLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.GetManualPositionUpdateLocation");

	ABP_HoloDrone_Controller_C_GetManualPositionUpdateLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.StartManualPositionUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_HoloDrone_Controller_C::StartManualPositionUpdate(const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.StartManualPositionUpdate");

	ABP_HoloDrone_Controller_C_StartManualPositionUpdate_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoloDroneState>   NewHoloDroneState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_Controller_C::SetState(TEnumAsByte<EHoloDroneState> NewHoloDroneState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetState");

	ABP_HoloDrone_Controller_C_SetState_Params params;
	params.NewHoloDroneState = NewHoloDroneState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HandleRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::HandleRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HandleRotation");

	ABP_HoloDrone_Controller_C_HandleRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HandlePositioning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::HandlePositioning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HandlePositioning");

	ABP_HoloDrone_Controller_C_HandlePositioning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.UserConstructionScript");

	ABP_HoloDrone_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_Controller_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ReceiveTick");

	ABP_HoloDrone_Controller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_Controller_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnPossess");

	ABP_HoloDrone_Controller_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnAIMoveCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_Controller_C::OnAIMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnAIMoveCompleted");

	ABP_HoloDrone_Controller_C_OnAIMoveCompleted_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.RequestDisplayNextRound
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::RequestDisplayNextRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.RequestDisplayNextRound");

	ABP_HoloDrone_Controller_C_RequestDisplayNextRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ResetJumbotronCheckpoint
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::ResetJumbotronCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ResetJumbotronCheckpoint");

	ABP_HoloDrone_Controller_C_ResetJumbotronCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CheckPositionFromJumbotronCheckpoint
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::CheckPositionFromJumbotronCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CheckPositionFromJumbotronCheckpoint");

	ABP_HoloDrone_Controller_C_CheckPositionFromJumbotronCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CloseJumbotronPathCheckpoint
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::CloseJumbotronPathCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CloseJumbotronPathCheckpoint");

	ABP_HoloDrone_Controller_C_CloseJumbotronPathCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ExecuteUbergraph_BP_HoloDrone_Controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDrone_Controller_C::ExecuteUbergraph_BP_HoloDrone_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ExecuteUbergraph_BP_HoloDrone_Controller");

	ABP_HoloDrone_Controller_C_ExecuteUbergraph_BP_HoloDrone_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnReachedJumbotronPathCheckpoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_HoloDrone_Controller_C::OnReachedJumbotronPathCheckpoint__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnReachedJumbotronPathCheckpoint__DelegateSignature");

	ABP_HoloDrone_Controller_C_OnReachedJumbotronPathCheckpoint__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
