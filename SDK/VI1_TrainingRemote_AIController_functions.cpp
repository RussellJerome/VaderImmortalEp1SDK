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

// Function TrainingRemote_AIController.TrainingRemote_AIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrainingRemote_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingRemote_AIController.TrainingRemote_AIController_C.UserConstructionScript");

	ATrainingRemote_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingRemote_AIController.TrainingRemote_AIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATrainingRemote_AIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingRemote_AIController.TrainingRemote_AIController_C.ReceiveBeginPlay");

	ATrainingRemote_AIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrainingRemote_AIController.TrainingRemote_AIController_C.ExecuteUbergraph_TrainingRemote_AIController
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrainingRemote_AIController_C::ExecuteUbergraph_TrainingRemote_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrainingRemote_AIController.TrainingRemote_AIController_C.ExecuteUbergraph_TrainingRemote_AIController");

	ATrainingRemote_AIController_C_ExecuteUbergraph_TrainingRemote_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
