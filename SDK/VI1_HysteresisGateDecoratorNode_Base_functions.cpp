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

// Function HysteresisGateDecoratorNode_Base.HysteresisGateDecoratorNode_Base_C.UpdateActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          startValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StopValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHysteresisGateDecoratorNode_Base_C::UpdateActivation(float startValue, float StopValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function HysteresisGateDecoratorNode_Base.HysteresisGateDecoratorNode_Base_C.UpdateActivation");

	UHysteresisGateDecoratorNode_Base_C_UpdateActivation_Params params;
	params.startValue = startValue;
	params.StopValue = StopValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HysteresisGateDecoratorNode_Base.HysteresisGateDecoratorNode_Base_C.PerformConditionCheck
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHysteresisGateDecoratorNode_Base_C::PerformConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HysteresisGateDecoratorNode_Base.HysteresisGateDecoratorNode_Base_C.PerformConditionCheck");

	UHysteresisGateDecoratorNode_Base_C_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
