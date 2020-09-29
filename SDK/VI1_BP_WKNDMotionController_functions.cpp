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

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ControllerInputIndicatesGrab
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDMotionController_C::ControllerInputIndicatesGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ControllerInputIndicatesGrab");

	ABP_WKNDMotionController_C_ControllerInputIndicatesGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetGrabberLocation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_WKNDMotionController_C::GetGrabberLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetGrabberLocation");

	ABP_WKNDMotionController_C_GetGrabberLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetGrabberRotation
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_WKNDMotionController_C::GetGrabberRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetGrabberRotation");

	ABP_WKNDMotionController_C_GetGrabberRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsHoldingObject
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDMotionController_C::IsHoldingObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsHoldingObject");

	ABP_WKNDMotionController_C_IsHoldingObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsHoldingParticularObject
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForceItemComponentBase* ForceItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDMotionController_C::IsHoldingParticularObject(class UForceItemComponentBase* ForceItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsHoldingParticularObject");

	ABP_WKNDMotionController_C_IsHoldingParticularObject_Params params;
	params.ForceItem = ForceItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsNearGrabbableObject
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDMotionController_C::IsNearGrabbableObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsNearGrabbableObject");

	ABP_WKNDMotionController_C_IsNearGrabbableObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickBestTransformToGrabItem
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForceItemComponentBase* ForceItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_WKNDMotionController_C::PickBestTransformToGrabItem(class UForceItemComponentBase* ForceItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickBestTransformToGrabItem");

	ABP_WKNDMotionController_C_PickBestTransformToGrabItem_Params params;
	params.ForceItem = ForceItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetForcePowerAim
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* ABP_WKNDMotionController_C::GetForcePowerAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetForcePowerAim");

	ABP_WKNDMotionController_C_GetForcePowerAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetMotionControllerHand
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EControllerHand ABP_WKNDMotionController_C::GetMotionControllerHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetMotionControllerHand");

	ABP_WKNDMotionController_C_GetMotionControllerHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetVelocityTracker
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVelocityTrackerBase*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVelocityTrackerBase* ABP_WKNDMotionController_C::GetVelocityTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetVelocityTracker");

	ABP_WKNDMotionController_C_GetVelocityTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsControllerTracking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDMotionController_C::IsControllerTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsControllerTracking");

	ABP_WKNDMotionController_C_IsControllerTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReenableLastClimbObject
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::ReenableLastClimbObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReenableLastClimbObject");

	ABP_WKNDMotionController_C_ReenableLastClimbObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ClearClosestMandatedLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDMotionController_C::ClearClosestMandatedLocation(const struct FVector& PlayerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ClearClosestMandatedLocation");

	ABP_WKNDMotionController_C_ClearClosestMandatedLocation_Params params;
	params.PlayerLocation = PlayerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DebugVisualizeMandatedLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::DebugVisualizeMandatedLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.DebugVisualizeMandatedLocations");

	ABP_WKNDMotionController_C_DebugVisualizeMandatedLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.Get Closest Recentering Point
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Player_Location                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Player_Rotation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              Out_Transform                  (Parm, OutParm, IsPlainOldData)
// int                            Out_Index                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::Get_Closest_Recentering_Point(const struct FVector& Player_Location, const struct FRotator& Player_Rotation, struct FTransform* Out_Transform, int* Out_Index, bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.Get Closest Recentering Point");

	ABP_WKNDMotionController_C_Get_Closest_Recentering_Point_Params params;
	params.Player_Location = Player_Location;
	params.Player_Rotation = Player_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Transform != nullptr)
		*Out_Transform = params.Out_Transform;
	if (Out_Index != nullptr)
		*Out_Index = params.Out_Index;
	if (found != nullptr)
		*found = params.found;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.FindGroundAtLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Ground_at_Location             (Parm, OutParm, IsPlainOldData)

void ABP_WKNDMotionController_C::FindGroundAtLocation(const struct FVector& WorldLocation, struct FVector* Ground_at_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.FindGroundAtLocation");

	ABP_WKNDMotionController_C_FindGroundAtLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ground_at_Location != nullptr)
		*Ground_at_Location = params.Ground_at_Location;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsZoeBlocking
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NavLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDMotionController_C::IsZoeBlocking(const struct FVector& NavLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsZoeBlocking");

	ABP_WKNDMotionController_C_IsZoeBlocking_Params params;
	params.NavLocation = NavLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateDebugHandAnimationText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::UpdateDebugHandAnimationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateDebugHandAnimationText");

	ABP_WKNDMotionController_C_UpdateDebugHandAnimationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportArcGrowthTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::GetTeleportArcGrowthTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportArcGrowthTime");

	ABP_WKNDMotionController_C_GetTeleportArcGrowthTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportLaunchSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::GetTeleportLaunchSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportLaunchSpeed");

	ABP_WKNDMotionController_C_GetTeleportLaunchSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetArrowRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)

void ABP_WKNDMotionController_C::SetArrowRotation(const struct FVector& Destination, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetArrowRotation");

	ABP_WKNDMotionController_C_SetArrowRotation_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.HandleTeleportArc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ETeleportUIState               TeleportState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::HandleTeleportArc(float DeltaTime, ETeleportUIState* TeleportState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.HandleTeleportArc");

	ABP_WKNDMotionController_C_HandleTeleportArc_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeleportState != nullptr)
		*TeleportState = params.TeleportState;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetThumbstickAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_WKNDMotionController_C::GetThumbstickAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetThumbstickAngle");

	ABP_WKNDMotionController_C_GetThumbstickAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.CheckMandatedLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           FoundSnapPoint                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ResolvedLocation               (Parm, OutParm, IsPlainOldData)
// int                            MandatedId                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ResolvedRotation               (Parm, OutParm, IsPlainOldData)
// bool                           ActiveRotation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           BlueSnapPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::CheckMandatedLocation(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool* FoundSnapPoint, struct FVector* ResolvedLocation, int* MandatedId, struct FRotator* ResolvedRotation, bool* ActiveRotation, bool* BlueSnapPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.CheckMandatedLocation");

	ABP_WKNDMotionController_C_CheckMandatedLocation_Params params;
	params.TargetLocation = TargetLocation;
	params.TargetRotation = TargetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundSnapPoint != nullptr)
		*FoundSnapPoint = params.FoundSnapPoint;
	if (ResolvedLocation != nullptr)
		*ResolvedLocation = params.ResolvedLocation;
	if (MandatedId != nullptr)
		*MandatedId = params.MandatedId;
	if (ResolvedRotation != nullptr)
		*ResolvedRotation = params.ResolvedRotation;
	if (ActiveRotation != nullptr)
		*ActiveRotation = params.ActiveRotation;
	if (BlueSnapPoint != nullptr)
		*BlueSnapPoint = params.BlueSnapPoint;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.RemoveMandatedLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::RemoveMandatedLocation(int NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.RemoveMandatedLocation");

	ABP_WKNDMotionController_C_RemoveMandatedLocation_Params params;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsMandatedLocationActive
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsActive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::IsMandatedLocationActive(int ID, bool* bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsMandatedLocationActive");

	ABP_WKNDMotionController_C_IsMandatedLocationActive_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsActive != nullptr)
		*bIsActive = params.bIsActive;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetMandatedLocationActive
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           newActive                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::SetMandatedLocationActive(int ID, bool newActive, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetMandatedLocationActive");

	ABP_WKNDMotionController_C_SetMandatedLocationActive_Params params;
	params.ID = ID;
	params.newActive = newActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.AddMandatedLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          NewSnappingRange               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStartActive                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           UseRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BlueSnapPoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::AddMandatedLocation(int NewId, const struct FVector& NewLocation, float NewSnappingRange, bool bStartActive, const struct FRotator& Rotation, bool UseRotation, bool BlueSnapPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.AddMandatedLocation");

	ABP_WKNDMotionController_C_AddMandatedLocation_Params params;
	params.NewId = NewId;
	params.NewLocation = NewLocation;
	params.NewSnappingRange = NewSnappingRange;
	params.bStartActive = bStartActive;
	params.Rotation = Rotation;
	params.UseRotation = UseRotation;
	params.BlueSnapPoint = BlueSnapPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetWeaponToWrist
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_WKNDMotionController_C::GetWeaponToWrist()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetWeaponToWrist");

	ABP_WKNDMotionController_C_GetWeaponToWrist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateBlockLag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::UpdateBlockLag(float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateBlockLag");

	ABP_WKNDMotionController_C_UpdateBlockLag_Params params;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.XLABInteractionHandlerIsSlicingTool
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Slicing_Tool                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::XLABInteractionHandlerIsSlicingTool(bool* Is_Slicing_Tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.XLABInteractionHandlerIsSlicingTool");

	ABP_WKNDMotionController_C_XLABInteractionHandlerIsSlicingTool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Slicing_Tool != nullptr)
		*Is_Slicing_Tool = params.Is_Slicing_Tool;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetMandatedProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          NewSnappingRange               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SnapId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           UseRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::SetMandatedProperties(const struct FVector& NewLocation, float NewSnappingRange, bool bEnabled, int SnapId, const struct FRotator& Rotation, bool UseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetMandatedProperties");

	ABP_WKNDMotionController_C_SetMandatedProperties_Params params;
	params.NewLocation = NewLocation;
	params.NewSnappingRange = NewSnappingRange;
	params.bEnabled = bEnabled;
	params.SnapId = SnapId;
	params.Rotation = Rotation;
	params.UseRotation = UseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateGrabToWrist
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::UpdateGrabToWrist()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateGrabToWrist");

	ABP_WKNDMotionController_C_UpdateGrabToWrist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateClashLag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::UpdateClashLag(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateClashLag");

	ABP_WKNDMotionController_C_UpdateClashLag_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ApplyResistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::ApplyResistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ApplyResistance");

	ABP_WKNDMotionController_C_ApplyResistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetControllerWithClashBlend
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::GetControllerWithClashBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetControllerWithClashBlend");

	ABP_WKNDMotionController_C_GetControllerWithClashBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandTransform
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::UpdateHandTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandTransform");

	ABP_WKNDMotionController_C_UpdateHandTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InitSaberManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::InitSaberManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.InitSaberManager");

	ABP_WKNDMotionController_C_InitSaberManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.TestForDisengage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::TestForDisengage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.TestForDisengage");

	ABP_WKNDMotionController_C_TestForDisengage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetOffsetWeaponTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              WeaponTransform                (Parm, OutParm, IsPlainOldData)

void ABP_WKNDMotionController_C::GetOffsetWeaponTransform(struct FTransform* WeaponTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetOffsetWeaponTransform");

	ABP_WKNDMotionController_C_GetOffsetWeaponTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponTransform != nullptr)
		*WeaponTransform = params.WeaponTransform;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetBlockAngle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ClashLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Clash                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::GetBlockAngle(const struct FVector& ClashLocation, bool Clash, float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetBlockAngle");

	ABP_WKNDMotionController_C_GetBlockAngle_Params params;
	params.ClashLocation = ClashLocation;
	params.Clash = Clash;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetHandToBlade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::GetHandToBlade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetHandToBlade");

	ABP_WKNDMotionController_C_GetHandToBlade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandToBlade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::UpdateHandToBlade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandToBlade");

	ABP_WKNDMotionController_C_UpdateHandToBlade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTransformWithNoise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDMotionController_C::SetTransformWithNoise(class USceneComponent* Component, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTransformWithNoise");

	ABP_WKNDMotionController_C_SetTransformWithNoise_Params params;
	params.Component = Component;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.CacheTransforms_Cutting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::CacheTransforms_Cutting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.CacheTransforms_Cutting");

	ABP_WKNDMotionController_C_CacheTransforms_Cutting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SyncIntentBladeToActualBlade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::SyncIntentBladeToActualBlade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SyncIntentBladeToActualBlade");

	ABP_WKNDMotionController_C_SyncIntentBladeToActualBlade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DropSaber
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::DropSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.DropSaber");

	ABP_WKNDMotionController_C_DropSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetABPHandTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::SetABPHandTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetABPHandTransform");

	ABP_WKNDMotionController_C_SetABPHandTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickupSaber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Lightsaber_C*        Saber                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::PickupSaber(class ABP_Lightsaber_C* Saber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickupSaber");

	ABP_WKNDMotionController_C_PickupSaber_Params params;
	params.Saber = Saber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PositionFingerCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::PositionFingerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.PositionFingerCollision");

	ABP_WKNDMotionController_C_PositionFingerCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnInitMotionController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::OnInitMotionController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnInitMotionController");

	ABP_WKNDMotionController_C_OnInitMotionController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.Teleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.Teleport");

	ABP_WKNDMotionController_C_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandToWrist
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::UpdateHandToWrist()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandToWrist");

	ABP_WKNDMotionController_C_UpdateHandToWrist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_WKNDMotionController_C::GetTeleportDestination(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportDestination");

	ABP_WKNDMotionController_C_GetTeleportDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateArcEndpoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ValidLocationFound             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RotateArrow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::UpdateArcEndpoint(const struct FVector& NewLocation, bool ValidLocationFound, bool RotateArrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateArcEndpoint");

	ABP_WKNDMotionController_C_UpdateArcEndpoint_Params params;
	params.NewLocation = NewLocation;
	params.ValidLocationFound = ValidLocationFound;
	params.RotateArrow = RotateArrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateArcSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundValidLocation             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_WKNDMotionController_C::UpdateArcSpline(bool FoundValidLocation, TArray<struct FVector>* SplinePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateArcSpline");

	ABP_WKNDMotionController_C_UpdateArcSpline_Params params;
	params.FoundValidLocation = FoundValidLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.TraceTeleportDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IncompleteArc                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceLocation                  (Parm, OutParm, IsPlainOldData)
// TArray<struct FVector>         TracePoints                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 NavMeshLocation                (Parm, OutParm, IsPlainOldData)

void ABP_WKNDMotionController_C::TraceTeleportDestination(bool* Success, bool* IncompleteArc, struct FVector* TraceLocation, TArray<struct FVector>* TracePoints, struct FVector* NavMeshLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.TraceTeleportDestination");

	ABP_WKNDMotionController_C_TraceTeleportDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (IncompleteArc != nullptr)
		*IncompleteArc = params.IncompleteArc;
	if (TraceLocation != nullptr)
		*TraceLocation = params.TraceLocation;
	if (TracePoints != nullptr)
		*TracePoints = params.TracePoints;
	if (NavMeshLocation != nullptr)
		*NavMeshLocation = params.NavMeshLocation;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DisableTeleporter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::DisableTeleporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.DisableTeleporter");

	ABP_WKNDMotionController_C_DisableTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.UserConstructionScript");

	ABP_WKNDMotionController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_C_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDMotionController_C::InpActEvt_C_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_C_K2Node_InputKeyEvent_5");

	ABP_WKNDMotionController_C_InpActEvt_C_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_One_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDMotionController_C::InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_One_K2Node_InputKeyEvent_4");

	ABP_WKNDMotionController_C_InpActEvt_One_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Two_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDMotionController_C::InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Two_K2Node_InputKeyEvent_3");

	ABP_WKNDMotionController_C_InpActEvt_Two_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Three_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDMotionController_C::InpActEvt_Three_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Three_K2Node_InputKeyEvent_2");

	ABP_WKNDMotionController_C_InpActEvt_Three_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Four_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDMotionController_C::InpActEvt_Four_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Four_K2Node_InputKeyEvent_1");

	ABP_WKNDMotionController_C_InpActEvt_Four_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_WKNDMotionController_C::BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_WKNDMotionController_C_BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WKNDMotionController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveBeginPlay");

	ABP_WKNDMotionController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveTick");

	ABP_WKNDMotionController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.RumbleController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::RumbleController(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.RumbleController");

	ABP_WKNDMotionController_C_RumbleController_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_WKNDMotionController_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_WKNDMotionController_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveActivateTeleporter
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::ReceiveActivateTeleporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveActivateTeleporter");

	ABP_WKNDMotionController_C_ReceiveActivateTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveDeactivateTeleporter
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::ReceiveDeactivateTeleporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveDeactivateTeleporter");

	ABP_WKNDMotionController_C_ReceiveDeactivateTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveOnHeldInBothHands
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::ReceiveOnHeldInBothHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveOnHeldInBothHands");

	ABP_WKNDMotionController_C_ReceiveOnHeldInBothHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveOnNotHeldInBothHands
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::ReceiveOnNotHeldInBothHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveOnNotHeldInBothHands");

	ABP_WKNDMotionController_C_ReceiveOnNotHeldInBothHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.RangedGrabSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 GrabbedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         GrabbedRange                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::RangedGrabSuccess(class AActor** GrabbedItem, float* GrabbedRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.RangedGrabSuccess");

	ABP_WKNDMotionController_C_RangedGrabSuccess_Params params;
	params.GrabbedItem = GrabbedItem;
	params.GrabbedRange = GrabbedRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 GrabbedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::ChannelForceOnActorStart(class AActor** GrabbedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorStart");

	ABP_WKNDMotionController_C_ChannelForceOnActorStart_Params params;
	params.GrabbedItem = GrabbedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 GrabbedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::ChannelForceOnActorComplete(class AActor** GrabbedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorComplete");

	ABP_WKNDMotionController_C_ChannelForceOnActorComplete_Params params;
	params.GrabbedItem = GrabbedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorBroken
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 GrabbedItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::ChannelForceOnActorBroken(class AActor** GrabbedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorBroken");

	ABP_WKNDMotionController_C_ChannelForceOnActorBroken_Params params;
	params.GrabbedItem = GrabbedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnReverseGrip
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::OnReverseGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnReverseGrip");

	ABP_WKNDMotionController_C_OnReverseGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnForeGrip
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::OnForeGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnForeGrip");

	ABP_WKNDMotionController_C_OnForeGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnGripShift
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::OnGripShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnGripShift");

	ABP_WKNDMotionController_C_OnGripShift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabSphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::BndEvt__GrabSphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabSphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_WKNDMotionController_C_BndEvt__GrabSphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnSecondHandGrab
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::OnSecondHandGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnSecondHandGrab");

	ABP_WKNDMotionController_C_OnSecondHandGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnSecondHandRelease
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::OnSecondHandRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnSecondHandRelease");

	ABP_WKNDMotionController_C_OnSecondHandRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BlinkStart
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::BlinkStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.BlinkStart");

	ABP_WKNDMotionController_C_BlinkStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BlinkFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::BlinkFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.BlinkFinished");

	ABP_WKNDMotionController_C_BlinkFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveManuallyUpdateHandPosition
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::ReceiveManuallyUpdateHandPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveManuallyUpdateHandPosition");

	ABP_WKNDMotionController_C_ReceiveManuallyUpdateHandPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.StopDisarmMontage
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::StopDisarmMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.StopDisarmMontage");

	ABP_WKNDMotionController_C_StopDisarmMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetPinHand
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Val                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::SetPinHand(bool* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetPinHand");

	ABP_WKNDMotionController_C_SetPinHand_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveInitializeMotionController
// (Event, Public, BlueprintEvent)

void ABP_WKNDMotionController_C::ReceiveInitializeMotionController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveInitializeMotionController");

	ABP_WKNDMotionController_C_ReceiveInitializeMotionController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PrepareToForceGrabItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForceItemComponentBase* ForceItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WKNDMotionController_C::PrepareToForceGrabItem(class UForceItemComponentBase* ForceItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.PrepareToForceGrabItem");

	ABP_WKNDMotionController_C_PrepareToForceGrabItem_Params params;
	params.ForceItem = ForceItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedItemSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedItemSig__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedItemSig__DelegateSignature");

	ABP_WKNDMotionController_C_BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedItemSig__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_2_DroppedItemSig__DelegateSignature
// (BlueprintEvent)

void ABP_WKNDMotionController_C::BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_2_DroppedItemSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_2_DroppedItemSig__DelegateSignature");

	ABP_WKNDMotionController_C_BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_2_DroppedItemSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SnapStart
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::SnapStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SnapStart");

	ABP_WKNDMotionController_C_SnapStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SnapStop
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::SnapStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SnapStop");

	ABP_WKNDMotionController_C_SnapStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ShowTeleportDestination
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          alsoShowArcEndpoint            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::ShowTeleportDestination(bool* alsoShowArcEndpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ShowTeleportDestination");

	ABP_WKNDMotionController_C_ShowTeleportDestination_Params params;
	params.alsoShowArcEndpoint = alsoShowArcEndpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.HideTeleportDestination
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::HideTeleportDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.HideTeleportDestination");

	ABP_WKNDMotionController_C_HideTeleportDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTeleportDestination
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_WKNDMotionController_C::SetTeleportDestination(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTeleportDestination");

	ABP_WKNDMotionController_C_SetTeleportDestination_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTeleportArcColour
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETeleportUIState*              teleportUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::SetTeleportArcColour(ETeleportUIState* teleportUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTeleportArcColour");

	ABP_WKNDMotionController_C_SetTeleportArcColour_Params params;
	params.teleportUIState = teleportUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ExecuteUbergraph_BP_WKNDMotionController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::ExecuteUbergraph_BP_WKNDMotionController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.ExecuteUbergraph_BP_WKNDMotionController");

	ABP_WKNDMotionController_C_ExecuteUbergraph_BP_WKNDMotionController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.TeleportedToMandatedLocation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDMotionController_C::TeleportedToMandatedLocation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.TeleportedToMandatedLocation__DelegateSignature");

	ABP_WKNDMotionController_C_TeleportedToMandatedLocation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DroppedWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickupWeapon*       weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::DroppedWeapon__DelegateSignature(class ARPOCPickupWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.DroppedWeapon__DelegateSignature");

	ABP_WKNDMotionController_C_DroppedWeapon__DelegateSignature_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickedUpWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickupWeapon*       weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDMotionController_C::PickedUpWeapon__DelegateSignature(class ARPOCPickupWeapon* weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickedUpWeapon__DelegateSignature");

	ABP_WKNDMotionController_C_PickedUpWeapon__DelegateSignature_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
