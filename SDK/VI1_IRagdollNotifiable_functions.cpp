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

// Function IRagdollNotifiable.IRagdollNotifiable_C.DoRagdoll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRagdollInfo>    BonesToRagdoll                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UIRagdollNotifiable_C::DoRagdoll(TArray<struct FRagdollInfo>* BonesToRagdoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function IRagdollNotifiable.IRagdollNotifiable_C.DoRagdoll");

	UIRagdollNotifiable_C_DoRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonesToRagdoll != nullptr)
		*BonesToRagdoll = params.BonesToRagdoll;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
