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

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.UpdateTutorialText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_RightHandTutorial_C::UpdateTutorialText(const struct FString& inString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RightHandTutorial.BP_RightHandTutorial_C.UpdateTutorialText");

	ABP_RightHandTutorial_C_UpdateTutorialText_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RightHandTutorial.BP_RightHandTutorial_C.GetTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_RightHandTutorial_C::GetTargetLocation(bool* Success, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RightHandTutorial.BP_RightHandTutorial_C.GetTargetLocation");

	ABP_RightHandTutorial_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function BP_RightHandTutorial.BP_RightHandTutorial_C.InitMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RightHandTutorial_C::InitMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RightHandTutorial.BP_RightHandTutorial_C.InitMaterials");

	ABP_RightHandTutorial_C_InitMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RightHandTutorial.BP_RightHandTutorial_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RightHandTutorial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RightHandTutorial.BP_RightHandTutorial_C.UserConstructionScript");

	ABP_RightHandTutorial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RightHandTutorial.BP_RightHandTutorial_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RightHandTutorial_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RightHandTutorial.BP_RightHandTutorial_C.ReceiveTick");

	ABP_RightHandTutorial_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RightHandTutorial.BP_RightHandTutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RightHandTutorial_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RightHandTutorial.BP_RightHandTutorial_C.ReceiveBeginPlay");

	ABP_RightHandTutorial_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RightHandTutorial.BP_RightHandTutorial_C.ExecuteUbergraph_BP_RightHandTutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RightHandTutorial_C::ExecuteUbergraph_BP_RightHandTutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RightHandTutorial.BP_RightHandTutorial_C.ExecuteUbergraph_BP_RightHandTutorial");

	ABP_RightHandTutorial_C_ExecuteUbergraph_BP_RightHandTutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
