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

// Function TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTurnToFaceMoveDirectionTaskNode_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C.ReceiveTick");

	UTurnToFaceMoveDirectionTaskNode_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C.ExecuteUbergraph_TurnToFaceMoveDirectionTaskNode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTurnToFaceMoveDirectionTaskNode_C::ExecuteUbergraph_TurnToFaceMoveDirectionTaskNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C.ExecuteUbergraph_TurnToFaceMoveDirectionTaskNode");

	UTurnToFaceMoveDirectionTaskNode_C_ExecuteUbergraph_TurnToFaceMoveDirectionTaskNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
