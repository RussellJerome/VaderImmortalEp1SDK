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

// Function BP_BlasterCaster.BP_BlasterCaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BlasterCaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlasterCaster.BP_BlasterCaster_C.UserConstructionScript");

	ABP_BlasterCaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlasterCaster.BP_BlasterCaster_C.FireBlaster
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AccurateShot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AccurateShotPosition           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ShotSpread                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BlasterCaster_C::FireBlaster(bool AccurateShot, const struct FVector& AccurateShotPosition, const struct FVector& ShotSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlasterCaster.BP_BlasterCaster_C.FireBlaster");

	ABP_BlasterCaster_C_FireBlaster_Params params;
	params.AccurateShot = AccurateShot;
	params.AccurateShotPosition = AccurateShotPosition;
	params.ShotSpread = ShotSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BlasterCaster.BP_BlasterCaster_C.ExecuteUbergraph_BP_BlasterCaster
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BlasterCaster_C::ExecuteUbergraph_BP_BlasterCaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlasterCaster.BP_BlasterCaster_C.ExecuteUbergraph_BP_BlasterCaster");

	ABP_BlasterCaster_C_ExecuteUbergraph_BP_BlasterCaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
