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

// BlueprintGeneratedClass BP_CharacterPerformanceRedirector_Interface.BP_CharacterPerformanceRedirector_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_CharacterPerformanceRedirector_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterPerformanceRedirector_Interface.BP_CharacterPerformanceRedirector_Interface_C");
		return ptr;
	}


	void RequestSetSequencerBlendWeight(float Weight);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
