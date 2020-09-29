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

// Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.PerformConditionCheck
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUnsetOnFinishDecoratorNode_C::PerformConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.PerformConditionCheck");

	UUnsetOnFinishDecoratorNode_C_PerformConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>*    NodeResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnsetOnFinishDecoratorNode_C::ReceiveExecutionFinish(class AActor** OwnerActor, TEnumAsByte<EBTNodeResult>* NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.ReceiveExecutionFinish");

	UUnsetOnFinishDecoratorNode_C_ReceiveExecutionFinish_Params params;
	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.ExecuteUbergraph_UnsetOnFinishDecoratorNode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnsetOnFinishDecoratorNode_C::ExecuteUbergraph_UnsetOnFinishDecoratorNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.ExecuteUbergraph_UnsetOnFinishDecoratorNode");

	UUnsetOnFinishDecoratorNode_C_ExecuteUbergraph_UnsetOnFinishDecoratorNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
