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

// Function BP_MustafarianChildCharacter_Basic.BP_MustafarianChildCharacter_Basic_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MustafarianChildCharacter_Basic_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MustafarianChildCharacter_Basic.BP_MustafarianChildCharacter_Basic_C.SetSequenceBlendWeight");

	ABP_MustafarianChildCharacter_Basic_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MustafarianChildCharacter_Basic.BP_MustafarianChildCharacter_Basic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MustafarianChildCharacter_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MustafarianChildCharacter_Basic.BP_MustafarianChildCharacter_Basic_C.UserConstructionScript");

	ABP_MustafarianChildCharacter_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
