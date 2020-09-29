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

// Function BP_UpdatingScreen.BP_UpdatingScreen_C.SetUpdatingImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Frame                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UpdatingScreen_C::SetUpdatingImage(int Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpdatingScreen.BP_UpdatingScreen_C.SetUpdatingImage");

	ABP_UpdatingScreen_C_SetUpdatingImage_Params params;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UpdatingScreen.BP_UpdatingScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UpdatingScreen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpdatingScreen.BP_UpdatingScreen_C.UserConstructionScript");

	ABP_UpdatingScreen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UpdatingScreen.BP_UpdatingScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UpdatingScreen_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpdatingScreen.BP_UpdatingScreen_C.ReceiveBeginPlay");

	ABP_UpdatingScreen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UpdatingScreen.BP_UpdatingScreen_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UpdatingScreen_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpdatingScreen.BP_UpdatingScreen_C.ReceiveTick");

	ABP_UpdatingScreen_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UpdatingScreen.BP_UpdatingScreen_C.ExecuteUbergraph_BP_UpdatingScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UpdatingScreen_C::ExecuteUbergraph_BP_UpdatingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UpdatingScreen.BP_UpdatingScreen_C.ExecuteUbergraph_BP_UpdatingScreen");

	ABP_UpdatingScreen_C_ExecuteUbergraph_BP_UpdatingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
