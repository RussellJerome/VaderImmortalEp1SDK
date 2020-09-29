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

// Function BP_ThrowManager.BP_ThrowManager_C.GetRandomWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SliceableWeapon_C*   Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABP_ThrowManager_C*      Throw_Manager_Ref              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ThrowManager_C::GetRandomWeapon(class ABP_SliceableWeapon_C** Output, bool* Empty, class ABP_ThrowManager_C** Throw_Manager_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThrowManager.BP_ThrowManager_C.GetRandomWeapon");

	ABP_ThrowManager_C_GetRandomWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
	if (Empty != nullptr)
		*Empty = params.Empty;
	if (Throw_Manager_Ref != nullptr)
		*Throw_Manager_Ref = params.Throw_Manager_Ref;
}


// Function BP_ThrowManager.BP_ThrowManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ThrowManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThrowManager.BP_ThrowManager_C.UserConstructionScript");

	ABP_ThrowManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ThrowManager.BP_ThrowManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ThrowManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThrowManager.BP_ThrowManager_C.ReceiveBeginPlay");

	ABP_ThrowManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ThrowManager.BP_ThrowManager_C.ExecuteUbergraph_BP_ThrowManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ThrowManager_C::ExecuteUbergraph_BP_ThrowManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ThrowManager.BP_ThrowManager_C.ExecuteUbergraph_BP_ThrowManager");

	ABP_ThrowManager_C_ExecuteUbergraph_BP_ThrowManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
