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

// Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseableMeshComponent*  InPoseableMesh                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InBonePrefix                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBoxLattice_C::Initialize(class UPoseableMeshComponent* InPoseableMesh, const struct FName& InBonePrefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.Initialize");

	ACorvaxianBoxLattice_C_Initialize_Params params;
	params.InPoseableMesh = InPoseableMesh;
	params.InBonePrefix = InBonePrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACorvaxianBoxLattice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.UserConstructionScript");

	ACorvaxianBoxLattice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.SideButtonPulse__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBoxLattice_C::SideButtonPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.SideButtonPulse__FinishedFunc");

	ACorvaxianBoxLattice_C_SideButtonPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.SideButtonPulse__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBoxLattice_C::SideButtonPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.SideButtonPulse__UpdateFunc");

	ACorvaxianBoxLattice_C_SideButtonPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.StartModulatingEmissive
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBoxLattice_C::StartModulatingEmissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.StartModulatingEmissive");

	ACorvaxianBoxLattice_C_StartModulatingEmissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.StopModulatingEmissive
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBoxLattice_C::StopModulatingEmissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.StopModulatingEmissive");

	ACorvaxianBoxLattice_C_StopModulatingEmissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.ExecuteUbergraph_CorvaxianBoxLattice
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBoxLattice_C::ExecuteUbergraph_CorvaxianBoxLattice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBoxLattice.CorvaxianBoxLattice_C.ExecuteUbergraph_CorvaxianBoxLattice");

	ACorvaxianBoxLattice_C_ExecuteUbergraph_CorvaxianBoxLattice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
