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

// BlueprintGeneratedClass BP_HoloDronePod.BP_HoloDronePod_C
// 0x0024 (0x03C4 - 0x03A0)
class ABP_HoloDronePod_C : public ABP_DronePod_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class ABP_HoloDrone_C*                             Holodrone;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHolodroneDisplayPoints                     DisplayPoints;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible)
	float                                              JumbotronPathRatio;                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoloDronePod.BP_HoloDronePod_C");
		return ptr;
	}


	void UserConstructionScript();
	void DebugShowCheckPoint();
	void HideDebugLines();
	void SpawnHoloDrone();
	void ReceiveBeginPlay();
	void InitHolodrone(int LoadedWaveIndex);
	void DespawnHolodrone();
	void DestroyHolodrone();
	void ExecuteUbergraph_BP_HoloDronePod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
