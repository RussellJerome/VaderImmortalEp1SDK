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

// Function BP_HoverController.BP_HoverController_C.LoadPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHoverSettings          HoverPreset                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HoverController_C::LoadPreset(const struct FHoverSettings& HoverPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverController.BP_HoverController_C.LoadPreset");

	UBP_HoverController_C_LoadPreset_Params params;
	params.HoverPreset = HoverPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverController.BP_HoverController_C.UpdateHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_HoverController_C::UpdateHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverController.BP_HoverController_C.UpdateHover");

	UBP_HoverController_C_UpdateHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverController.BP_HoverController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HoverController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverController.BP_HoverController_C.ReceiveTick");

	UBP_HoverController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverController.BP_HoverController_C.Event TeleportHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_HoverController_C::Event_TeleportHover(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverController.BP_HoverController_C.Event TeleportHover");

	UBP_HoverController_C_Event_TeleportHover_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoverController.BP_HoverController_C.ExecuteUbergraph_BP_HoverController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HoverController_C::ExecuteUbergraph_BP_HoverController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoverController.BP_HoverController_C.ExecuteUbergraph_BP_HoverController");

	UBP_HoverController_C_ExecuteUbergraph_BP_HoverController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
