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

// Function BP_SaberDistort.BP_SaberDistort_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SaberDistort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberDistort.BP_SaberDistort_C.UserConstructionScript");

	ABP_SaberDistort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberDistort.BP_SaberDistort_C.EnablePPProtoDistort
// (BlueprintCallable, BlueprintEvent)

void ABP_SaberDistort_C::EnablePPProtoDistort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberDistort.BP_SaberDistort_C.EnablePPProtoDistort");

	ABP_SaberDistort_C_EnablePPProtoDistort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberDistort.BP_SaberDistort_C.EnablePPSaberDistort
// (BlueprintCallable, BlueprintEvent)

void ABP_SaberDistort_C::EnablePPSaberDistort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberDistort.BP_SaberDistort_C.EnablePPSaberDistort");

	ABP_SaberDistort_C_EnablePPSaberDistort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberDistort.BP_SaberDistort_C.DisablePPDistort
// (BlueprintCallable, BlueprintEvent)

void ABP_SaberDistort_C::DisablePPDistort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberDistort.BP_SaberDistort_C.DisablePPDistort");

	ABP_SaberDistort_C_DisablePPDistort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberDistort.BP_SaberDistort_C.ExecuteUbergraph_BP_SaberDistort
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaberDistort_C::ExecuteUbergraph_BP_SaberDistort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberDistort.BP_SaberDistort_C.ExecuteUbergraph_BP_SaberDistort");

	ABP_SaberDistort_C_ExecuteUbergraph_BP_SaberDistort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
