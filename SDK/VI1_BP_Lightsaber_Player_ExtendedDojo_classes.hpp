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

// BlueprintGeneratedClass BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C
// 0x0028 (0x0B70 - 0x0B48)
class ABP_Lightsaber_Player_ExtendedDojo_C : public ABP_Lightsaber_Player_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B48(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         LightsaberColor;                                          // 0x0B50(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         LightsaberHilt;                                           // 0x0B60(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C");
		return ptr;
	}


	void SetHiltMesh(class UStaticMesh* NewMesh);
	void UpdateLightsaberCustomization(const struct FName& NewLightsaberColorName, const struct FName& NewLightsaberHiltName);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnCustomizationSettingsChanged(const struct FCustomizationSettings& CustomizationSettings);
	void ExecuteUbergraph_BP_Lightsaber_Player_ExtendedDojo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
