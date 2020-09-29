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

// Function ABP_MarksmanH.ABP_MarksmanH_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MarksmanH_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MarksmanH.ABP_MarksmanH_C.BlueprintUpdateAnimation");

	UABP_MarksmanH_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MarksmanH.ABP_MarksmanH_C.AnimNotify_HitRecovered
// (BlueprintCallable, BlueprintEvent)

void UABP_MarksmanH_C::AnimNotify_HitRecovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MarksmanH.ABP_MarksmanH_C.AnimNotify_HitRecovered");

	UABP_MarksmanH_C_AnimNotify_HitRecovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_MarksmanH.ABP_MarksmanH_C.ExecuteUbergraph_ABP_MarksmanH
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_MarksmanH_C::ExecuteUbergraph_ABP_MarksmanH(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_MarksmanH.ABP_MarksmanH_C.ExecuteUbergraph_ABP_MarksmanH");

	UABP_MarksmanH_C_ExecuteUbergraph_ABP_MarksmanH_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
