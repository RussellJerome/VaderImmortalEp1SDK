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

// Function BP_ZoeyDroid_AIController.BP_ZoeyDroid_AIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyDroid_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyDroid_AIController.BP_ZoeyDroid_AIController_C.UserConstructionScript");

	ABP_ZoeyDroid_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyDroid_AIController.BP_ZoeyDroid_AIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoeyDroid_AIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyDroid_AIController.BP_ZoeyDroid_AIController_C.ReceiveBeginPlay");

	ABP_ZoeyDroid_AIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyDroid_AIController.BP_ZoeyDroid_AIController_C.ExecuteUbergraph_BP_ZoeyDroid_AIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyDroid_AIController_C::ExecuteUbergraph_BP_ZoeyDroid_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyDroid_AIController.BP_ZoeyDroid_AIController_C.ExecuteUbergraph_BP_ZoeyDroid_AIController");

	ABP_ZoeyDroid_AIController_C_ExecuteUbergraph_BP_ZoeyDroid_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
