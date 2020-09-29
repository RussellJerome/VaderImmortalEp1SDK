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

// Function BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemoteBlasterShot_Extended_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C.UserConstructionScript");

	ABP_TrainingRemoteBlasterShot_Extended_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C.PlayDeflectionVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DeflectingActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_Extended_C::PlayDeflectionVFX(class AActor** DeflectingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C.PlayDeflectionVFX");

	ABP_TrainingRemoteBlasterShot_Extended_C_PlayDeflectionVFX_Params params;
	params.DeflectingActor = DeflectingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C.ExecuteUbergraph_BP_TrainingRemoteBlasterShot_Extended
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_Extended_C::ExecuteUbergraph_BP_TrainingRemoteBlasterShot_Extended(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C.ExecuteUbergraph_BP_TrainingRemoteBlasterShot_Extended");

	ABP_TrainingRemoteBlasterShot_Extended_C_ExecuteUbergraph_BP_TrainingRemoteBlasterShot_Extended_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
