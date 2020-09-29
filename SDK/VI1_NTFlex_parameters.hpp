#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NTFlex.KismetFlexLibrary.StopSynchronisingComponentWithFlex
struct UKismetFlexLibrary_StopSynchronisingComponentWithFlex_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NTFlex.KismetFlexLibrary.StartSynchronisingComponentWithFlex
struct UKismetFlexLibrary_StartSynchronisingComponentWithFlex_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NTFlex.KismetFlexLibrary.GetComponentIsSynchronisingWithFlex
struct UKismetFlexLibrary_GetComponentIsSynchronisingWithFlex_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTFlex.NTFlexChainComponent.GetLastCutLocation
struct UNTFlexChainComponent_GetLastCutLocation_Params
{
	class AActor*                                      CuttingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.UpdateCut
struct UNTFlexClothComponent_UpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutEntryLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CutExitLocation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.StartCut
struct UNTFlexClothComponent_StartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.SetSimulationEnabled
struct UNTFlexClothComponent_SetSimulationEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.IsBeingCut
struct UNTFlexClothComponent_IsBeingCut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.GetWindStrength
struct UNTFlexClothComponent_GetWindStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.GetSimulationEnabled
struct UNTFlexClothComponent_GetSimulationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.GetCutLocations
struct UNTFlexClothComponent_GetCutLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function NTFlex.NTFlexClothComponent.GetContacts
struct UNTFlexClothComponent_GetContacts_Params
{
	TArray<struct FFlexClothContactEvent>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function NTFlex.NTFlexClothComponent.GetClothStrain
struct UNTFlexClothComponent_GetClothStrain_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.GetAproxCutLocation
struct UNTFlexClothComponent_GetAproxCutLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function NTFlex.NTFlexClothComponent.EndCut
struct UNTFlexClothComponent_EndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
