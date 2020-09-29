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

// BlueprintGeneratedClass CorvaxianBoxLattice.CorvaxianBoxLattice_C
// 0x0050 (0x0368 - 0x0318)
class ACorvaxianBoxLattice_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               LatticeCollision;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCorvaxianBoxLatticeAnimation*               CorvaxianBoxLatticeAnimation;                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SideButtonPulse_NewTrack_0_F2F50AE04647C09FD5E7AF9921908653;// 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SideButtonPulse__Direction_F2F50AE04647C09FD5E7AF9921908653;// 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SideButtonPulse;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          EmissiveMaterial;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       BonePrefix;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorvaxianBoxLattice.CorvaxianBoxLattice_C");
		return ptr;
	}


	void Initialize(class UPoseableMeshComponent* InPoseableMesh, const struct FName& InBonePrefix);
	void UserConstructionScript();
	void SideButtonPulse__FinishedFunc();
	void SideButtonPulse__UpdateFunc();
	void StartModulatingEmissive();
	void StopModulatingEmissive();
	void ExecuteUbergraph_CorvaxianBoxLattice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
