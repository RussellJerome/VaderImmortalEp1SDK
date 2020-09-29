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

// Function BP_SaberManager.BP_SaberManager_C.InitClashHistory
struct ABP_SaberManager_C_InitClashHistory_Params
{
};

// Function BP_SaberManager.BP_SaberManager_C.ReportClashInfo
struct ABP_SaberManager_C_ReportClashInfo_Params
{
	bool                                               bReportingActive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClashStarting;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Lightsaber1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Lightsaber2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SaberManager.BP_SaberManager_C.UpdateFX
struct ABP_SaberManager_C_UpdateFX_Params
{
	struct FSaberClashData                             ClashData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SaberManager.BP_SaberManager_C.UserConstructionScript
struct ABP_SaberManager_C_UserConstructionScript_Params
{
};

// Function BP_SaberManager.BP_SaberManager_C.Clash Duration Timeline__FinishedFunc
struct ABP_SaberManager_C_Clash_Duration_Timeline__FinishedFunc_Params
{
};

// Function BP_SaberManager.BP_SaberManager_C.Clash Duration Timeline__UpdateFunc
struct ABP_SaberManager_C_Clash_Duration_Timeline__UpdateFunc_Params
{
};

// Function BP_SaberManager.BP_SaberManager_C.ReceiveTick
struct ABP_SaberManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SaberManager.BP_SaberManager_C.ReceiveBeginPlay
struct ABP_SaberManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_SaberManager.BP_SaberManager_C.OnSaberContactStart
struct ABP_SaberManager_C_OnSaberContactStart_Params
{
	int*                                               clashMask;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber**                     Saber1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber**                     Saber2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SaberManager.BP_SaberManager_C.OnSaberContactStop
struct ABP_SaberManager_C_OnSaberContactStop_Params
{
	int*                                               clashMask;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber**                     Saber1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber**                     Saber2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SaberManager.BP_SaberManager_C.OnSaberSweepHit
struct ABP_SaberManager_C_OnSaberSweepHit_Params
{
	class ARPOCPickup_Lightsaber**                     Saber1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber**                     Saber2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RewindTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSaberClashData*                            Clash;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_SaberManager.BP_SaberManager_C.ExecuteUbergraph_BP_SaberManager
struct ABP_SaberManager_C_ExecuteUbergraph_BP_SaberManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SaberManager.BP_SaberManager_C.ClashStart__DelegateSignature
struct ABP_SaberManager_C_ClashStart__DelegateSignature_Params
{
	class ARPOCPickup_Lightsaber*                      Saber1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RewindTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSaberClashData                             Clash;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
