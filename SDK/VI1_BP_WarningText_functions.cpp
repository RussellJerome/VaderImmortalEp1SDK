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

// Function BP_WarningText.BP_WarningText_C.ShowControllerWarning
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WarningText_C::ShowControllerWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningText.BP_WarningText_C.ShowControllerWarning");

	ABP_WarningText_C_ShowControllerWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningText.BP_WarningText_C.ShowSpaceWarning
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WarningText_C::ShowSpaceWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningText.BP_WarningText_C.ShowSpaceWarning");

	ABP_WarningText_C_ShowSpaceWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WarningText.BP_WarningText_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WarningText_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WarningText.BP_WarningText_C.UserConstructionScript");

	ABP_WarningText_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
