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

// Function RunInstructionsTaskNode.RunInstructionsTaskNode_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URunInstructionsTaskNode_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RunInstructionsTaskNode.RunInstructionsTaskNode_C.ReceiveTick");

	URunInstructionsTaskNode_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RunInstructionsTaskNode.RunInstructionsTaskNode_C.ExecuteUbergraph_RunInstructionsTaskNode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URunInstructionsTaskNode_C::ExecuteUbergraph_RunInstructionsTaskNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RunInstructionsTaskNode.RunInstructionsTaskNode_C.ExecuteUbergraph_RunInstructionsTaskNode");

	URunInstructionsTaskNode_C_ExecuteUbergraph_RunInstructionsTaskNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
