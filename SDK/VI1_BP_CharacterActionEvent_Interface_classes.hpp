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

// BlueprintGeneratedClass BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_CharacterActionEvent_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C");
		return ptr;
	}


	void GetNpcChestLocation(struct FVector* Location);
	void ToggleDropShadow(bool Enable);
	void BlueprintAnimationRateOptimization(bool Enable);
	void Hide_Blaster(bool Show);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void BlueprintTick(bool Enable);
	void Decals___SpawnSlash();
	void Decals___SpawnStab();
	void Decals___SpawnHit();
	void Decals___Delete();
	void AimAtActor_(class AActor** Actor);
	void ShouldAimAtPlayer_(bool* Result);
	void FireBlaster();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
