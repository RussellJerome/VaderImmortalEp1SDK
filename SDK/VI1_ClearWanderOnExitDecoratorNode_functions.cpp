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

// Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.PerformConditionCheck
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UClearWanderOnExitDecoratorNode_C::PerformConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.PerformConditionCheck");

	UClearWanderOnExitDecoratorNode_C_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>*    NodeResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClearWanderOnExitDecoratorNode_C::ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.ReceiveExecutionFinish");

	UClearWanderOnExitDecoratorNode_C_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.ExecuteUbergraph_ClearWanderOnExitDecoratorNode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UClearWanderOnExitDecoratorNode_C::ExecuteUbergraph_ClearWanderOnExitDecoratorNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.ExecuteUbergraph_ClearWanderOnExitDecoratorNode");

	UClearWanderOnExitDecoratorNode_C_ExecuteUbergraph_ClearWanderOnExitDecoratorNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
