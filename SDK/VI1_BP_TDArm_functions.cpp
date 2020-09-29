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

// Function BP_TDArm.BP_TDArm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TDArm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDArm.BP_TDArm_C.UserConstructionScript");

	ABP_TDArm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDArm.BP_TDArm_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_TDArm_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDArm.BP_TDArm_C.Timeline_0__FinishedFunc");

	ABP_TDArm_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDArm.BP_TDArm_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_TDArm_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDArm.BP_TDArm_C.Timeline_0__UpdateFunc");

	ABP_TDArm_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDArm.BP_TDArm_C.Dissolve
// (BlueprintCallable, BlueprintEvent)

void ABP_TDArm_C::Dissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDArm.BP_TDArm_C.Dissolve");

	ABP_TDArm_C_Dissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDArm.BP_TDArm_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      CopyMat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StrikeDir                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TDArm_C::Init(class UMaterialInterface* CopyMat, const struct FVector& StrikeDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDArm.BP_TDArm_C.Init");

	ABP_TDArm_C_Init_Params params;
	params.CopyMat = CopyMat;
	params.StrikeDir = StrikeDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TDArm.BP_TDArm_C.ExecuteUbergraph_BP_TDArm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TDArm_C::ExecuteUbergraph_BP_TDArm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TDArm.BP_TDArm_C.ExecuteUbergraph_BP_TDArm");

	ABP_TDArm_C_ExecuteUbergraph_BP_TDArm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
