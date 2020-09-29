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

// Function BP_ThrowManager.BP_ThrowManager_C.GetRandomWeapon
struct ABP_ThrowManager_C_GetRandomWeapon_Params
{
	class ABP_SliceableWeapon_C*                       Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Empty;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_ThrowManager_C*                          Throw_Manager_Ref;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ThrowManager.BP_ThrowManager_C.UserConstructionScript
struct ABP_ThrowManager_C_UserConstructionScript_Params
{
};

// Function BP_ThrowManager.BP_ThrowManager_C.ReceiveBeginPlay
struct ABP_ThrowManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_ThrowManager.BP_ThrowManager_C.ExecuteUbergraph_BP_ThrowManager
struct ABP_ThrowManager_C_ExecuteUbergraph_BP_ThrowManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
