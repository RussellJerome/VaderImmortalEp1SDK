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

// BlueprintGeneratedClass AnimNotify_Ragdoll.AnimNotify_Ragdoll_C
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_Ragdoll_C : public UAnimNotify
{
public:
	TArray<struct FRagdollInfo>                        BonesToRagdoll;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_Ragdoll.AnimNotify_Ragdoll_C");
		return ptr;
	}


	void GetSanitizedBoneList(class USkinnedMeshComponent* MeshComponent, TArray<struct FRagdollInfo>* BoneList, TArray<struct FRagdollInfo>* Result);
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
