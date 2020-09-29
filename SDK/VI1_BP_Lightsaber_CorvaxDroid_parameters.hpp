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

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ShouldAimAtPlayer?
struct ABP_Lightsaber_CorvaxDroid_C_ShouldAimAtPlayer__Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.AimAtActor?
struct ABP_Lightsaber_CorvaxDroid_C_AimAtActor__Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.GetAnimInstance
struct ABP_Lightsaber_CorvaxDroid_C_GetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.GetNpcChestLocation
struct ABP_Lightsaber_CorvaxDroid_C_GetNpcChestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.UserConstructionScript
struct ABP_Lightsaber_CorvaxDroid_C_UserConstructionScript_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_0_0__FinishedFunc
struct ABP_Lightsaber_CorvaxDroid_C_Timeline_0_0__FinishedFunc_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_0_0__UpdateFunc
struct ABP_Lightsaber_CorvaxDroid_C_Timeline_0_0__UpdateFunc_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_1__FinishedFunc
struct ABP_Lightsaber_CorvaxDroid_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Timeline_1__UpdateFunc
struct ABP_Lightsaber_CorvaxDroid_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ReceiveTick
struct ABP_Lightsaber_CorvaxDroid_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TrainingDroidUpdate
struct ABP_Lightsaber_CorvaxDroid_C_TrainingDroidUpdate_Params
{
	float*                                             BladeProgress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.StartCharge
struct ABP_Lightsaber_CorvaxDroid_C_StartCharge_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.EndCharge
struct ABP_Lightsaber_CorvaxDroid_C_EndCharge_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.Recoil
struct ABP_Lightsaber_CorvaxDroid_C_Recoil_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ReceiveBeginPlay
struct ABP_Lightsaber_CorvaxDroid_C_ReceiveBeginPlay_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.RecoilRecover
struct ABP_Lightsaber_CorvaxDroid_C_RecoilRecover_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TD_FXOff
struct ABP_Lightsaber_CorvaxDroid_C_TD_FXOff_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.TD_FXOn
struct ABP_Lightsaber_CorvaxDroid_C_TD_FXOn_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.RTPC_HumDistanceVolume
struct ABP_Lightsaber_CorvaxDroid_C_RTPC_HumDistanceVolume_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.AK_LoadBank
struct ABP_Lightsaber_CorvaxDroid_C_AK_LoadBank_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.FadeInSaber
struct ABP_Lightsaber_CorvaxDroid_C_FadeInSaber_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.FadeOutSaber
struct ABP_Lightsaber_CorvaxDroid_C_FadeOutSaber_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.IntensityGlowUp
struct ABP_Lightsaber_CorvaxDroid_C_IntensityGlowUp_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.IntensityGlowDown
struct ABP_Lightsaber_CorvaxDroid_C_IntensityGlowDown_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.InitialSparkBurst
struct ABP_Lightsaber_CorvaxDroid_C_InitialSparkBurst_Params
{
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.BlueprintTick
struct ABP_Lightsaber_CorvaxDroid_C_BlueprintTick_Params
{
	bool*                                              Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_CorvaxDroid.BP_Lightsaber_CorvaxDroid_C.ExecuteUbergraph_BP_Lightsaber_CorvaxDroid
struct ABP_Lightsaber_CorvaxDroid_C_ExecuteUbergraph_BP_Lightsaber_CorvaxDroid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
