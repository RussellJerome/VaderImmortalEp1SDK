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

// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateLeftHandTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TransformA                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_PlayerHandsAnimInterface_C::RequestUpdateLeftHandTransform(const struct FTransform& TransformA)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateLeftHandTransform");

	UBP_PlayerHandsAnimInterface_C_RequestUpdateLeftHandTransform_Params params;
	params.TransformA = TransformA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateRightHandTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TransformA                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_PlayerHandsAnimInterface_C::RequestUpdateRightHandTransform(const struct FTransform& TransformA)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateRightHandTransform");

	UBP_PlayerHandsAnimInterface_C_RequestUpdateRightHandTransform_Params params;
	params.TransformA = TransformA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestSetMotionControllerRefs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_WKNDMotionController_C* MotionController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandsAnimInterface_C::RequestSetMotionControllerRefs(EControllerHand Hand, class ABP_WKNDMotionController_C* MotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestSetMotionControllerRefs");

	UBP_PlayerHandsAnimInterface_C_RequestSetMotionControllerRefs_Params params;
	params.Hand = Hand;
	params.MotionController = MotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestPlayGripChangeMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReverseGrip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandsAnimInterface_C::RequestPlayGripChangeMontage(EControllerHand Hand, bool ReverseGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestPlayGripChangeMontage");

	UBP_PlayerHandsAnimInterface_C_RequestPlayGripChangeMontage_Params params;
	params.Hand = Hand;
	params.ReverseGrip = ReverseGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateAnimVars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimVars               animData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PlayerHandsAnimInterface_C::RequestUpdateAnimVars(EControllerHand Hand, const struct FAnimVars& animData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateAnimVars");

	UBP_PlayerHandsAnimInterface_C_RequestUpdateAnimVars_Params params;
	params.Hand = Hand;
	params.animData = animData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOculusTouchData        TouchData                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPoseAlphaData          AwareData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_PlayerHandsAnimInterface_C::RequestUpdateHand(EControllerHand Hand, const struct FOculusTouchData& TouchData, const struct FPoseAlphaData& AwareData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C.RequestUpdateHand");

	UBP_PlayerHandsAnimInterface_C_RequestUpdateHand_Params params;
	params.Hand = Hand;
	params.TouchData = TouchData;
	params.AwareData = AwareData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
