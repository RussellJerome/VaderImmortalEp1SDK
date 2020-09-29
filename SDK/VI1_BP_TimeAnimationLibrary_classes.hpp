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

// BlueprintGeneratedClass BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_TimeAnimationLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C");
		return ptr;
	}


	void STATIC_TimeCircleMotion(float Time, float TimeScale, float Radius, float TimeOffset, float TimeOffsetScale, const struct FVector& WorldPosition, class UObject* __WorldContext, struct FVector* AbsWorldPosition);
	void STATIC_TimeFlickerStep(float Time, float TimeScale, float TimeOffset, float TimeOffsetScale, int MinInt, int MaxInt, class UObject* __WorldContext, int* TimeFlickerStep);
	void STATIC_TimeFlicker(float Time, float TimeScale, float Max, float Min, float TimeOffset, float TimeOffsetScale, class UObject* __WorldContext, float* TimeFlicker);
	void STATIC_TimeFrac(float Time, float TimeScale, float Max, float Min, float TimeOffset, float TimeOffsetScale, class UObject* __WorldContext, float* TimeFrac);
	void STATIC_TimeSine(float Time, float TimeScale, float Max, float Min, float TimeOffset, float TimeOffsetScale, class UObject* __WorldContext, float* TimeSine);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
