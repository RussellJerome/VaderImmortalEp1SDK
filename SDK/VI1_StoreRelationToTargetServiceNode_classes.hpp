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

// BlueprintGeneratedClass StoreRelationToTargetServiceNode.StoreRelationToTargetServiceNode_C
// 0x009C (0x0134 - 0x0098)
class UStoreRelationToTargetServiceNode_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Dist_Store_Key;                                           // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Angle_Store_Key;                                          // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Target;                                                   // 0x00F0(0x0028) (Edit, BlueprintVisible)
	bool                                               Horizontal;                                               // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x011C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MyLocation;                                               // 0x0128(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoreRelationToTargetServiceNode.StoreRelationToTargetServiceNode_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_StoreRelationToTargetServiceNode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
