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

// BlueprintGeneratedClass BP_OculusSplashScreen.BP_OculusSplashScreen_C
// 0x0088 (0x03A0 - 0x0318)
class ABP_OculusSplashScreen_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Background;                                               // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      text;                                                     // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Logo;                                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeOut_BackgroundOpacity_691FE2D3433FEA92A6F9A48E2EC65E0B;// 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeOut_LogoAndTextOpacity_691FE2D3433FEA92A6F9A48E2EC65E0B;// 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOut__Direction_691FE2D3433FEA92A6F9A48E2EC65E0B;      // 0x0348(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeOut;                                                  // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TextFadeIn_Opacity_5186770E4867D8A13DA446B6E2CABB37;      // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TextFadeIn__Direction_5186770E4867D8A13DA446B6E2CABB37;   // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TextFadeIn;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LogoFadeIn_Opacity_0BA266C34371C865A0B9D2BC895143D0;      // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LogoFadeIn__Direction_0BA266C34371C865A0B9D2BC895143D0;   // 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LogoFadeIn;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Animate_YPosition_8EBFB7AF4AA6A45EA9FEBF97A33A0C02;       // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Animate__Direction_8EBFB7AF4AA6A45EA9FEBF97A33A0C02;      // 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Animate;                                                  // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    LogoMat;                                                  // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TextMat;                                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BackgroundMat;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OculusSplashScreen.BP_OculusSplashScreen_C");
		return ptr;
	}


	void UserConstructionScript();
	void Animate__FinishedFunc();
	void Animate__UpdateFunc();
	void LogoFadeIn__FinishedFunc();
	void LogoFadeIn__UpdateFunc();
	void TextFadeIn__FinishedFunc();
	void TextFadeIn__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayLogo();
	void ExecuteUbergraph_BP_OculusSplashScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
