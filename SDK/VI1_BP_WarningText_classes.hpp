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

// BlueprintGeneratedClass BP_WarningText.BP_WarningText_C
// 0x00A0 (0x03B8 - 0x0318)
class ABP_WarningText_C : public AActor
{
public:
	class UWidgetComponent*                            TextWidget;                                               // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       SpaceWarning1;                                            // 0x0328(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SpaceWarning2;                                            // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SpaceWarning3;                                            // 0x0358(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ControllerWarning1;                                       // 0x0370(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ControllerWarning2;                                       // 0x0388(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ControllerWarning3;                                       // 0x03A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WarningText.BP_WarningText_C");
		return ptr;
	}


	void ShowControllerWarning();
	void ShowSpaceWarning();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
