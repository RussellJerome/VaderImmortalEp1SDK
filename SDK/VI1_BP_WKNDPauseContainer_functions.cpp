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

// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.CheckLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPauseContainer_C::CheckLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.CheckLocation");

	ABP_WKNDPauseContainer_C_CheckLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.CheckHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPauseContainer_C::CheckHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.CheckHeight");

	ABP_WKNDPauseContainer_C_CheckHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.CheckRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPauseContainer_C::CheckRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.CheckRotation");

	ABP_WKNDPauseContainer_C_CheckRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDPauseContainer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.UserConstructionScript");

	ABP_WKNDPauseContainer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WKNDPauseContainer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.ReceiveBeginPlay");

	ABP_WKNDPauseContainer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPauseContainer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.ReceiveTick");

	ABP_WKNDPauseContainer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.SetVars
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDPauseContainer_C::SetVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.SetVars");

	ABP_WKNDPauseContainer_C_SetVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.ExecuteUbergraph_BP_WKNDPauseContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDPauseContainer_C::ExecuteUbergraph_BP_WKNDPauseContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDPauseContainer.BP_WKNDPauseContainer_C.ExecuteUbergraph_BP_WKNDPauseContainer");

	ABP_WKNDPauseContainer_C_ExecuteUbergraph_BP_WKNDPauseContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
