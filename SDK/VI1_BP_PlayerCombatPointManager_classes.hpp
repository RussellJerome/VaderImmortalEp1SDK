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

// BlueprintGeneratedClass BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C
// 0x0040 (0x0398 - 0x0358)
class ABP_PlayerCombatPointManager_C : public ACombatPointManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ReferenceActor;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ReferenceActorHeightOffset;                               // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpecificCombatPointIndex;                                 // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowSpecific_360_CombatPoint;                             // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              DisplayDuration;                                          // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SphereColor;                                              // 0x0384(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SphereThickness;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCombatPointManager.BP_PlayerCombatPointManager_C");
		return ptr;
	}


	void DrawReferenceAxis();
	void VisualizeSpecificCombatPoint();
	void DrawCombatPoint(const struct FKFCircleCombatPoint& KFCircleCombatPoint, int Index);
	void StopVisualizer();
	void VisualizeCombatPoints(TArray<struct FKFCircleCombatPoint>* InCombatPoints);
	void Visualize_360_CombatPoints();
	void VisualizeStandardCombatPoints();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlayerCombatPointManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
