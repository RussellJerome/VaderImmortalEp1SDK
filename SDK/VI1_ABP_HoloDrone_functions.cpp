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

// Function ABP_HoloDrone.ABP_HoloDrone_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_HoloDrone_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_HoloDrone.ABP_HoloDrone_C.BlueprintUpdateAnimation");

	UABP_HoloDrone_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_HoloDrone.ABP_HoloDrone_C.ExecuteUbergraph_ABP_HoloDrone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_HoloDrone_C::ExecuteUbergraph_ABP_HoloDrone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_HoloDrone.ABP_HoloDrone_C.ExecuteUbergraph_ABP_HoloDrone");

	UABP_HoloDrone_C_ExecuteUbergraph_ABP_HoloDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
