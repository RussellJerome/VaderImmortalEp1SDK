#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_PlayerHandsAnimInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerHandsAnimInterface.BP_PlayerHandsAnimInterface_C");
		return ptr;
	}


	void RequestUpdateLeftHandTransform(const struct FTransform& TransformA);
	void RequestUpdateRightHandTransform(const struct FTransform& TransformA);
	void RequestSetMotionControllerRefs(EControllerHand Hand, class ABP_WKNDMotionController_C* MotionController);
	void RequestPlayGripChangeMontage(EControllerHand Hand, bool ReverseGrip);
	void RequestUpdateAnimVars(EControllerHand Hand, const struct FAnimVars& animData);
	void RequestUpdateHand(EControllerHand Hand, const struct FOculusTouchData& TouchData, const struct FPoseAlphaData& AwareData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
