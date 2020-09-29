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

// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.SetHiltMesh
struct ABP_Lightsaber_Player_ExtendedDojo_C_SetHiltMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.UpdateLightsaberCustomization
struct ABP_Lightsaber_Player_ExtendedDojo_C_UpdateLightsaberCustomization_Params
{
	struct FName                                       NewLightsaberColorName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewLightsaberHiltName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.UserConstructionScript
struct ABP_Lightsaber_Player_ExtendedDojo_C_UserConstructionScript_Params
{
};

// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.ReceiveBeginPlay
struct ABP_Lightsaber_Player_ExtendedDojo_C_ReceiveBeginPlay_Params
{
};

// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.OnCustomizationSettingsChanged
struct ABP_Lightsaber_Player_ExtendedDojo_C_OnCustomizationSettingsChanged_Params
{
	struct FCustomizationSettings                      CustomizationSettings;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.ExecuteUbergraph_BP_Lightsaber_Player_ExtendedDojo
struct ABP_Lightsaber_Player_ExtendedDojo_C_ExecuteUbergraph_BP_Lightsaber_Player_ExtendedDojo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
