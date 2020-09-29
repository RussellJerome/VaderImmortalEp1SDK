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

// Class NTAnimation.NTAnimInstance
// 0x0020 (0x03E0 - 0x03C0)
class UNTAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	struct FName                                       InstanceTag;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimInstance");
		return ptr;
	}

};


// Class NTAnimation.NTAnimActionDesc
// 0x0000 (0x0028 - 0x0028)
class UNTAnimActionDesc : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimActionDesc");
		return ptr;
	}

};


// Class NTAnimation.NTAnimAction_IdleToMove
// 0x0000 (0x0028 - 0x0028)
class UNTAnimAction_IdleToMove : public UNTAnimActionDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimAction_IdleToMove");
		return ptr;
	}

};


// Class NTAnimation.NTAnimAction_IdleToMoveLeft
// 0x0000 (0x0028 - 0x0028)
class UNTAnimAction_IdleToMoveLeft : public UNTAnimActionDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimAction_IdleToMoveLeft");
		return ptr;
	}

};


// Class NTAnimation.NTAnimAction_IdleToMoveRight
// 0x0000 (0x0028 - 0x0028)
class UNTAnimAction_IdleToMoveRight : public UNTAnimActionDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimAction_IdleToMoveRight");
		return ptr;
	}

};


// Class NTAnimation.NTAnimAction_MoveToIdle
// 0x0000 (0x0028 - 0x0028)
class UNTAnimAction_MoveToIdle : public UNTAnimActionDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimAction_MoveToIdle");
		return ptr;
	}

};


// Class NTAnimation.NTAnimAction_None
// 0x0000 (0x0028 - 0x0028)
class UNTAnimAction_None : public UNTAnimActionDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimAction_None");
		return ptr;
	}

};


// Class NTAnimation.NTAnimAction_QuickturnLeft
// 0x0000 (0x0028 - 0x0028)
class UNTAnimAction_QuickturnLeft : public UNTAnimActionDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimAction_QuickturnLeft");
		return ptr;
	}

};


// Class NTAnimation.NTAnimAction_QuickturnRight
// 0x0000 (0x0028 - 0x0028)
class UNTAnimAction_QuickturnRight : public UNTAnimActionDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimAction_QuickturnRight");
		return ptr;
	}

};


// Class NTAnimation.NTAnimationBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNTAnimationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimationBlueprintFunctionLibrary");
		return ptr;
	}


	struct FName STATIC_GetNameFromStruct(const struct FName& AnimTypeName);
	class UNTAnimList* STATIC_GetListFromName(class UClass* AnimSetClass, const struct FName& ListName, class UClass* ListClass);
	struct FName STATIC_GetFrameRequest(const struct FName& FrameRequestName);
	struct FName STATIC_GetAnimType(const struct FName& AnimTypeName);
	struct FName STATIC_GetAnimAction(class UClass* AnimAction);
	struct FName STATIC_ContainsAnimType(TArray<struct FName> List, EContainsResult* Branches);
};


// Class NTAnimation.NTAnimComponent
// 0x00D8 (0x01C8 - 0x00F0)
class UNTAnimComponent : public UActorComponent
{
public:
	struct FNTAnimVarStruct                            AnimVariables;                                            // 0x00F0(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FNTAnimVarStruct                            AnimVariables_Old;                                        // 0x0148(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              TurnAngle_Blend;                                          // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimAngle_Blend;                                           // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullBody_BlendOutTime;                                    // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	struct FName                                       FullBody_SlotName;                                        // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Incidental_TimeAfterIdling;                               // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Incidental_TimeBetweenIdles;                              // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Incidental_TimeVariation;                                 // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugEnabled;                                             // 0x01C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimComponent");
		return ptr;
	}


	void UpdateAnimGraphVars(float DeltaTime);
	class UAnimMontage* PlayAnimMontage(class UAnimMontage* Montage, const struct FVector& AnimScale, float PlayRate, bool IsFromAction, float StartTime, float BlendTime, bool IgnoreCombatSlots, bool NoFlipSlot);
	class USkeletalMeshComponent* GetMeshComponent();
};


// Class NTAnimation.NTAnimGraphInterface
// 0x0000 (0x0028 - 0x0028)
class UNTAnimGraphInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimGraphInterface");
		return ptr;
	}


	void StartNewSpecialMovementType(TArray<struct FName> NewTypes, TArray<struct FName> OldTypes, const struct FName& Tag);
	void StartNewAnimatedMovement(const struct FName& NewType, float StartTime);
	void SendRequest(const struct FName& NewRequest);
};


// Class NTAnimation.NTAnimList
// 0x0000 (0x0028 - 0x0028)
class UNTAnimList : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimList");
		return ptr;
	}

};


// Class NTAnimation.NTAnimSet
// 0x0060 (0x0088 - 0x0028)
class UNTAnimSet : public UObject
{
public:
	TArray<struct FNTAnimListStruct>                   AnimLists;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, class UNTAnimList*>             ListMap;                                                  // 0x0038(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimSet");
		return ptr;
	}


	class UNTAnimList* STATIC_GetListFromName(class UClass* AnimSetClass, const struct FName& ListName, class UClass* ListClass);
};


// Class NTAnimation.NTAnimRequestComponent
// 0x0040 (0x0130 - 0x00F0)
class UNTAnimRequestComponent : public UActorComponent
{
public:
	class UNTAnimComponent*                            AnimComponent;                                            // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bUseHandSubgraphs;                                        // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FName                                       SubAnimInstanceName;                                      // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugAnimRequests;                                        // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	TArray<struct FName>                               UsedSlots;                                                // 0x0110(0x0010) (ZeroConstructor, Transient)
	float                                              MaxInterruptBlendTime;                                    // 0x0120(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0124(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTAnimation.NTAnimRequestComponent");
		return ptr;
	}


	void SetAnimInstance(class UAnimInstance* instance);
	void RequestHandPose(class UAnimMontage* AnimMontage, const struct FNTAnimVarStruct& animData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
