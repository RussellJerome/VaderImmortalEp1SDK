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

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetHandlerForHand
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UXLABInteractionHandler> ABP_WKNDPausePlayerPawn_C::GetHandlerForHand(EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetHandlerForHand");

	ABP_WKNDPausePlayerPawn_C_GetHandlerForHand_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetForcePowerComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForcePowerComponentBase* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UForcePowerComponentBase* ABP_WKNDPausePlayerPawn_C::GetForcePowerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetForcePowerComponent");

	ABP_WKNDPausePlayerPawn_C_GetForcePowerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetMotionControllerForHand
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_WKNDPausePlayerPawn_C::GetMotionControllerForHand(EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetMotionControllerForHand");

	ABP_WKNDPausePlayerPawn_C_GetMotionControllerForHand_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.SetComponentTicksAndVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPausePlayerPawn_C::SetComponentTicksAndVisible(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.SetComponentTicksAndVisible");

	ABP_WKNDPausePlayerPawn_C_SetComponentTicksAndVisible_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetInputData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWKNDPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOculusTouchData        TouchData                      (Parm, OutParm, IsPlainOldData)

void ABP_WKNDPausePlayerPawn_C::GetInputData(class AWKNDPlayerController* PlayerController, EControllerHand Hand, struct FOculusTouchData* TouchData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetInputData");

	ABP_WKNDPausePlayerPawn_C_GetInputData_Params params;
	params.PlayerController = PlayerController;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TouchData != nullptr)
		*TouchData = params.TouchData;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.IsCloseToButton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPausePlayerPawn_C::IsCloseToButton(EControllerHand Hand, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.IsCloseToButton");

	ABP_WKNDPausePlayerPawn_C_IsCloseToButton_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPausePlayerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.UserConstructionScript");

	ABP_WKNDPausePlayerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WKNDPausePlayerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ReceiveBeginPlay");

	ABP_WKNDPausePlayerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPausePlayerPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ReceiveTick");

	ABP_WKNDPausePlayerPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ExecuteUbergraph_BP_WKNDPausePlayerPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPausePlayerPawn_C::ExecuteUbergraph_BP_WKNDPausePlayerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ExecuteUbergraph_BP_WKNDPausePlayerPawn");

	ABP_WKNDPausePlayerPawn_C_ExecuteUbergraph_BP_WKNDPausePlayerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
