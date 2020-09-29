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

// Function NTFlex.KismetFlexLibrary.StopSynchronisingComponentWithFlex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKismetFlexLibrary::STATIC_StopSynchronisingComponentWithFlex(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.KismetFlexLibrary.StopSynchronisingComponentWithFlex");

	UKismetFlexLibrary_StopSynchronisingComponentWithFlex_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTFlex.KismetFlexLibrary.StartSynchronisingComponentWithFlex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKismetFlexLibrary::STATIC_StartSynchronisingComponentWithFlex(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.KismetFlexLibrary.StartSynchronisingComponentWithFlex");

	UKismetFlexLibrary_StartSynchronisingComponentWithFlex_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTFlex.KismetFlexLibrary.GetComponentIsSynchronisingWithFlex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKismetFlexLibrary::STATIC_GetComponentIsSynchronisingWithFlex(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.KismetFlexLibrary.GetComponentIsSynchronisingWithFlex");

	UKismetFlexLibrary_GetComponentIsSynchronisingWithFlex_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexChainComponent.GetLastCutLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  CuttingActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UNTFlexChainComponent::GetLastCutLocation(class AActor* CuttingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexChainComponent.GetLastCutLocation");

	UNTFlexChainComponent_GetLastCutLocation_Params params;
	params.CuttingActor = CuttingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.UpdateCut
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  CuttingActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CutEntryLocation               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 CutExitLocation                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNTFlexClothComponent::UpdateCut(class AActor* CuttingActor, const struct FVector& CutEntryLocation, const struct FVector& CutExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.UpdateCut");

	UNTFlexClothComponent_UpdateCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutEntryLocation = CutEntryLocation;
	params.CutExitLocation = CutExitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTFlex.NTFlexClothComponent.StartCut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  CuttingActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNTFlexClothComponent::StartCut(class AActor* CuttingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.StartCut");

	UNTFlexClothComponent_StartCut_Params params;
	params.CuttingActor = CuttingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTFlex.NTFlexClothComponent.SetSimulationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UNTFlexClothComponent::SetSimulationEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.SetSimulationEnabled");

	UNTFlexClothComponent_SetSimulationEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTFlex.NTFlexClothComponent.IsBeingCut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTFlexClothComponent::IsBeingCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.IsBeingCut");

	UNTFlexClothComponent_IsBeingCut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.GetWindStrength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTFlexClothComponent::GetWindStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.GetWindStrength");

	UNTFlexClothComponent_GetWindStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.GetSimulationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTFlexClothComponent::GetSimulationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.GetSimulationEnabled");

	UNTFlexClothComponent_GetSimulationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.GetCutLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UNTFlexClothComponent::GetCutLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.GetCutLocations");

	UNTFlexClothComponent_GetCutLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.GetContacts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFlexClothContactEvent> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FFlexClothContactEvent> UNTFlexClothComponent::GetContacts()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.GetContacts");

	UNTFlexClothComponent_GetContacts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.GetClothStrain
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTFlexClothComponent::GetClothStrain(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.GetClothStrain");

	UNTFlexClothComponent_GetClothStrain_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.GetAproxCutLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UNTFlexClothComponent::GetAproxCutLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.GetAproxCutLocation");

	UNTFlexClothComponent_GetAproxCutLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTFlex.NTFlexClothComponent.EndCut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  CuttingActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNTFlexClothComponent::EndCut(class AActor* CuttingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTFlex.NTFlexClothComponent.EndCut");

	UNTFlexClothComponent_EndCut_Params params;
	params.CuttingActor = CuttingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
