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

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TransformDestinationToActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                ActorRotation                  (Parm, OutParm, IsPlainOldData)

void ABP_DebugTeleporter_C::TransformDestinationToActor(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, struct FVector* ActorLocation, struct FRotator* ActorRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.TransformDestinationToActor");

	ABP_DebugTeleporter_C_TransformDestinationToActor_Params params;
	params.TargetLocation = TargetLocation;
	params.TargetRotation = TargetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
	if (ActorRotation != nullptr)
		*ActorRotation = params.ActorRotation;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.SanitiseIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::SanitiseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.SanitiseIndex");

	ABP_DebugTeleporter_C_SanitiseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.UpdateActiveCheckpoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::UpdateActiveCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.UpdateActiveCheckpoint");

	ABP_DebugTeleporter_C_UpdateActiveCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TeleportToLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LocationName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_DebugTeleporter_C::TeleportToLocation(const struct FString& LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.TeleportToLocation");

	ABP_DebugTeleporter_C_TeleportToLocation_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TriggerAmbientAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATargetPoint*            TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugTeleporter_C::TriggerAmbientAudio(class ATargetPoint* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.TriggerAmbientAudio");

	ABP_DebugTeleporter_C_TriggerAmbientAudio_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.DoTeleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATargetPoint*            TeleportTargetPlayer           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ATargetPoint*            TeleportTargetZoe              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequiresLightsaber            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequiresZoe                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRequiresMultiTool             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugTeleporter_C::DoTeleport(class ATargetPoint* TeleportTargetPlayer, class ATargetPoint* TeleportTargetZoe, bool bRequiresLightsaber, bool bRequiresZoe, bool bRequiresMultiTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.DoTeleport");

	ABP_DebugTeleporter_C_DoTeleport_Params params;
	params.TeleportTargetPlayer = TeleportTargetPlayer;
	params.TeleportTargetZoe = TeleportTargetZoe;
	params.bRequiresLightsaber = bRequiresLightsaber;
	params.bRequiresZoe = bRequiresZoe;
	params.bRequiresMultiTool = bRequiresMultiTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.UserConstructionScript");

	ABP_DebugTeleporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Down_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_Down_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Down_K2Node_InputKeyEvent_10");

	ABP_DebugTeleporter_C_InpActEvt_Down_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Down_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_Down_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Down_K2Node_InputKeyEvent_9");

	ABP_DebugTeleporter_C_InpActEvt_Down_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Left_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_Left_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Left_K2Node_InputKeyEvent_8");

	ABP_DebugTeleporter_C_InpActEvt_Left_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Left_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_Left_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Left_K2Node_InputKeyEvent_7");

	ABP_DebugTeleporter_C_InpActEvt_Left_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Right_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_Right_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Right_K2Node_InputKeyEvent_6");

	ABP_DebugTeleporter_C_InpActEvt_Right_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Right_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_Right_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Right_K2Node_InputKeyEvent_5");

	ABP_DebugTeleporter_C_InpActEvt_Right_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_4");

	ABP_DebugTeleporter_C_InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_3");

	ABP_DebugTeleporter_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_2");

	ABP_DebugTeleporter_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugTeleporter_C::InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_1");

	ABP_DebugTeleporter_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DebugTeleporter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.ReceiveBeginPlay");

	ABP_DebugTeleporter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpAxisKeyEvt_MotionController_Right_Thumbstick_Y_K2Node_InputAxisKeyEvent_12
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugTeleporter_C::InpAxisKeyEvt_MotionController_Right_Thumbstick_Y_K2Node_InputAxisKeyEvent_12(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpAxisKeyEvt_MotionController_Right_Thumbstick_Y_K2Node_InputAxisKeyEvent_12");

	ABP_DebugTeleporter_C_InpAxisKeyEvt_MotionController_Right_Thumbstick_Y_K2Node_InputAxisKeyEvent_12_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.ToggleMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.ToggleMenu");

	ABP_DebugTeleporter_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.DoCheckpointTeleport
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWKNDProgressionCheckpointData** DesiredCheckpoint              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugTeleporter_C::DoCheckpointTeleport(class UWKNDProgressionCheckpointData** DesiredCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.DoCheckpointTeleport");

	ABP_DebugTeleporter_C_DoCheckpointTeleport_Params params;
	params.DesiredCheckpoint = DesiredCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.PerformTeleport
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::PerformTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.PerformTeleport");

	ABP_DebugTeleporter_C_PerformTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnTeleportFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::OnTeleportFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnTeleportFinished");

	ABP_DebugTeleporter_C_OnTeleportFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.ExecuteUbergraph_BP_DebugTeleporter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugTeleporter_C::ExecuteUbergraph_BP_DebugTeleporter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.ExecuteUbergraph_BP_DebugTeleporter");

	ABP_DebugTeleporter_C_ExecuteUbergraph_BP_DebugTeleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnFadeUpStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::OnFadeUpStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnFadeUpStart__DelegateSignature");

	ABP_DebugTeleporter_C_OnFadeUpStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnFadeUpFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::OnFadeUpFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnFadeUpFinished__DelegateSignature");

	ABP_DebugTeleporter_C_OnFadeUpFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TeleportComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DebugTeleporter_C::TeleportComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporter.BP_DebugTeleporter_C.TeleportComplete__DelegateSignature");

	ABP_DebugTeleporter_C_TeleportComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
