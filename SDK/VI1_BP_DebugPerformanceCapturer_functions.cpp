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

// Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugPerformanceCapturer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.UserConstructionScript");

	ABP_DebugPerformanceCapturer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugPerformanceCapturer_C::InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_2");

	ABP_DebugPerformanceCapturer_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DebugPerformanceCapturer_C::InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_1");

	ABP_DebugPerformanceCapturer_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DebugPerformanceCapturer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.ReceiveBeginPlay");

	ABP_DebugPerformanceCapturer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.UpdatePerformanceCaptureStatus
// (BlueprintCallable, BlueprintEvent)

void ABP_DebugPerformanceCapturer_C::UpdatePerformanceCaptureStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.UpdatePerformanceCaptureStatus");

	ABP_DebugPerformanceCapturer_C_UpdatePerformanceCaptureStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugPerformanceCapturer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.ReceiveTick");

	ABP_DebugPerformanceCapturer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.ExecuteUbergraph_BP_DebugPerformanceCapturer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugPerformanceCapturer_C::ExecuteUbergraph_BP_DebugPerformanceCapturer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C.ExecuteUbergraph_BP_DebugPerformanceCapturer");

	ABP_DebugPerformanceCapturer_C_ExecuteUbergraph_BP_DebugPerformanceCapturer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
