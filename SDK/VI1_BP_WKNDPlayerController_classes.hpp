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

// BlueprintGeneratedClass BP_WKNDPlayerController.BP_WKNDPlayerController_C
// 0x000C (0x0704 - 0x06F8)
class ABP_WKNDPlayerController_C : public AWKNDPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)
	float                                              FaceButton2TS;                                            // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDPlayerController.BP_WKNDPlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_BP_WKNDPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
