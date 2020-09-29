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

// Function PlayDialogueTaskNode.PlayDialogueTaskNode_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayDialogueTaskNode_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayDialogueTaskNode.PlayDialogueTaskNode_C.ReceiveExecute");

	UPlayDialogueTaskNode_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayDialogueTaskNode.PlayDialogueTaskNode_C.ExecuteUbergraph_PlayDialogueTaskNode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayDialogueTaskNode_C::ExecuteUbergraph_PlayDialogueTaskNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayDialogueTaskNode.PlayDialogueTaskNode_C.ExecuteUbergraph_PlayDialogueTaskNode");

	UPlayDialogueTaskNode_C_ExecuteUbergraph_PlayDialogueTaskNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
