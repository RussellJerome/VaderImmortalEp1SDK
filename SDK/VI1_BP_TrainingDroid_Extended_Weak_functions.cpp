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

// Function BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingDroid_Extended_Weak_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C.UserConstructionScript");

	ABP_TrainingDroid_Extended_Weak_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TrainingDroid_Extended_Weak_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C.ReceiveBeginPlay");

	ABP_TrainingDroid_Extended_Weak_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C.ExecuteUbergraph_BP_TrainingDroid_Extended_Weak
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingDroid_Extended_Weak_C::ExecuteUbergraph_BP_TrainingDroid_Extended_Weak(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingDroid_Extended_Weak.BP_TrainingDroid_Extended_Weak_C.ExecuteUbergraph_BP_TrainingDroid_Extended_Weak");

	ABP_TrainingDroid_Extended_Weak_C_ExecuteUbergraph_BP_TrainingDroid_Extended_Weak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
