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

// BlueprintGeneratedClass BP_SubtitleManager.BP_SubtitleManager_C
// 0x0074 (0x042C - 0x03B8)
class ABP_SubtitleManager_C : public AWKNDSubtitleManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TEnumAsByte<ESupportedLanguages>, struct FString> CultureCodesByLanguage;                                   // 0x03C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ESupportedLanguages>                   CurrentLanguage;                                          // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	int                                                DebugIndex;                                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsPerWord;                                           // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsPerCharacter;                                      // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDuration;                                              // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubtitleManager.BP_SubtitleManager_C");
		return ptr;
	}


	void GetApproximateLocalizedDuration(const struct FText& InText, float* Duration);
	void DebugCycleSubtitle();
	void GetLocalizedLanguage(TEnumAsByte<ESupportedLanguages>* CurrentLanguage);
	void SetLocalizedLanguage(TEnumAsByte<ESupportedLanguages> NewLanuage, bool Force);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SubtitleManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
