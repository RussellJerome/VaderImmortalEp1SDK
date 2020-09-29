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

// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateLeftHandTransform
struct UBP_PlayerHandsAnimInterface_C_RequestUpdateLeftHandTransform_Params
{
	struct FTransform                                  TransformA;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateRightHandTransform
struct UBP_PlayerHandsAnimInterface_C_RequestUpdateRightHandTransform_Params
{
	struct FTransform                                  TransformA;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestSetMotionControllerRefs
struct UBP_PlayerHandsAnimInterface_C_RequestSetMotionControllerRefs_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  MotionController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestPlayGripChangeMontage
struct UBP_PlayerHandsAnimInterface_C_RequestPlayGripChangeMontage_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseGrip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateAnimVars
struct UBP_PlayerHandsAnimInterface_C_RequestUpdateAnimVars_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimVars                                   animData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateHand
struct UBP_PlayerHandsAnimInterface_C_RequestUpdateHand_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOculusTouchData                            TouchData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPoseAlphaData                              AwareData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
