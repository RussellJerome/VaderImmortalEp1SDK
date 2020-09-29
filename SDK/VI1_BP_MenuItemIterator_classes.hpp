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

// BlueprintGeneratedClass BP_MenuItemIterator.BP_MenuItemIterator_C
// 0x0032 (0x0122 - 0x00F0)
class UBP_MenuItemIterator_C : public UActorComponent
{
public:
	class UCurveFloat*                                 Curve;                                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Min;                                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Max;                                                      // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanWrapAround_;                                           // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              IterationUpdateTimer;                                     // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurveIteration;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentIteration;                                         // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSelectionUpdated;                                       // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CanIterate_;                                              // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IncreaseIteration_;                                       // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuItemIterator.BP_MenuItemIterator_C");
		return ptr;
	}


	int GetNextIteration();
	void SetInitialIteration(int InitialIteration);
	void OverrideMinMax(int Min, int Max);
	void Iterate(float DeltaSeconds);
	void StopIterating();
	void StartIterating(bool ShouldIncrease);
	void GetCurrentIteration(int* CurrentIteration);
	void OnSelectionUpdated__DelegateSignature(int NewSelection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
