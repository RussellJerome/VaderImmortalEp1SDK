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

// Function StoreRelationToTargetServiceNode.StoreRelationToTargetServiceNode_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreRelationToTargetServiceNode_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRelationToTargetServiceNode.StoreRelationToTargetServiceNode_C.ReceiveTick");

	UStoreRelationToTargetServiceNode_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRelationToTargetServiceNode.StoreRelationToTargetServiceNode_C.ExecuteUbergraph_StoreRelationToTargetServiceNode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreRelationToTargetServiceNode_C::ExecuteUbergraph_StoreRelationToTargetServiceNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRelationToTargetServiceNode.StoreRelationToTargetServiceNode_C.ExecuteUbergraph_StoreRelationToTargetServiceNode");

	UStoreRelationToTargetServiceNode_C_ExecuteUbergraph_StoreRelationToTargetServiceNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
