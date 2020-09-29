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

// Function SetupIdleBehaviourTaskNode.SetupIdleBehaviourTaskNode_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USetupIdleBehaviourTaskNode_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetupIdleBehaviourTaskNode.SetupIdleBehaviourTaskNode_C.ReceiveExecute");

	USetupIdleBehaviourTaskNode_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetupIdleBehaviourTaskNode.SetupIdleBehaviourTaskNode_C.ExecuteUbergraph_SetupIdleBehaviourTaskNode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USetupIdleBehaviourTaskNode_C::ExecuteUbergraph_SetupIdleBehaviourTaskNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetupIdleBehaviourTaskNode.SetupIdleBehaviourTaskNode_C.ExecuteUbergraph_SetupIdleBehaviourTaskNode");

	USetupIdleBehaviourTaskNode_C_ExecuteUbergraph_SetupIdleBehaviourTaskNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
