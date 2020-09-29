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

// Function BP_SquadLeader.BP_SquadLeader_C.SetActionCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CooldownController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SquadLeader_C::SetActionCooldown(float CooldownController, float* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadLeader.BP_SquadLeader_C.SetActionCooldown");

	UBP_SquadLeader_C_SetActionCooldown_Params params;
	params.CooldownController = CooldownController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BP_SquadLeader.BP_SquadLeader_C.GetActionCooldown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_SquadLeader_C::GetActionCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadLeader.BP_SquadLeader_C.GetActionCooldown");

	UBP_SquadLeader_C_GetActionCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SquadLeader.BP_SquadLeader_C.OnAction
// (Event, Public, BlueprintEvent)

void UBP_SquadLeader_C::OnAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadLeader.BP_SquadLeader_C.OnAction");

	UBP_SquadLeader_C_OnAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SquadLeader.BP_SquadLeader_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SquadLeader_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadLeader.BP_SquadLeader_C.ReceiveTick");

	UBP_SquadLeader_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SquadLeader.BP_SquadLeader_C.ExecuteUbergraph_BP_SquadLeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SquadLeader_C::ExecuteUbergraph_BP_SquadLeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SquadLeader.BP_SquadLeader_C.ExecuteUbergraph_BP_SquadLeader");

	UBP_SquadLeader_C_ExecuteUbergraph_BP_SquadLeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
