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

// BlueprintGeneratedClass BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C
// 0x000B (0x0388 - 0x037D)
class ABP_TrainingRemoteBlasterShot_Extended_C : public ABP_TrainingRemoteBlasterShot_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingRemoteBlasterShot_Extended.BP_TrainingRemoteBlasterShot_Extended_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayDeflectionVFX(class AActor** DeflectingActor);
	void ExecuteUbergraph_BP_TrainingRemoteBlasterShot_Extended(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
