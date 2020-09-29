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

// BlueprintGeneratedClass BP_SaberDistort.BP_SaberDistort_C
// 0x0020 (0x0338 - 0x0318)
class ABP_SaberDistort_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcessProto;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SaberDistort.BP_SaberDistort_C");
		return ptr;
	}


	void UserConstructionScript();
	void EnablePPProtoDistort();
	void EnablePPSaberDistort();
	void DisablePPDistort();
	void ExecuteUbergraph_BP_SaberDistort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
