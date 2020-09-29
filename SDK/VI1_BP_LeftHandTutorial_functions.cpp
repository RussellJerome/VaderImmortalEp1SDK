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

// Function BP_LeftHandTutorial.BP_LeftHandTutorial_C.GetTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_LeftHandTutorial_C::GetTargetLocation(bool* Success, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeftHandTutorial.BP_LeftHandTutorial_C.GetTargetLocation");

	ABP_LeftHandTutorial_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function BP_LeftHandTutorial.BP_LeftHandTutorial_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LeftHandTutorial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LeftHandTutorial.BP_LeftHandTutorial_C.UserConstructionScript");

	ABP_LeftHandTutorial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
