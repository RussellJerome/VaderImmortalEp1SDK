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

// BlueprintGeneratedClass BP_WKNDGameState.BP_WKNDGameState_C
// 0x004B (0x03B3 - 0x0368)
class ABP_WKNDGameState_C : public AWKNDGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UBP_SquadLeader_C*                           BP_SquadLeader;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_VylipCharacter_Basic_C*                  VylipCharacter_BP;                                        // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ZoeyCharacter_C*                         ZoeyCharacter_BP;                                         // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PriestessCharacter_Basic_C*              PriestessCharacter_BP;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MustafarianCharacter_Basic_C*            MustafarianCharacter_BP;                                  // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MustafarianChildCharacter_Basic_C*       ChildCharacter_BP;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_VaderCharacter_Basic_C*                  VaderBasicCharacter_BP;                                   // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsExtendedDojo;                                           // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCelebrationDemo;                                        // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDownloadableDemo;                                       // 0x03B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDGameState.BP_WKNDGameState_C");
		return ptr;
	}


	void GetZoeLocation(bool* found, struct FVector* Location);
	void SetVaderBasicCharacter(class ABP_VaderCharacter_Basic_C* VaderBasicCharacter_BP);
	void GetVaderBasicCharacter(class ABP_VaderCharacter_Basic_C** VaderBasicCharacter_BP);
	void SetChildCharacter(class ABP_MustafarianChildCharacter_Basic_C* ChildCharacter_BP);
	void GetChildCharacter(class ABP_MustafarianChildCharacter_Basic_C** ChildCharacter_BP);
	void SetMustafarianCharacter(class ABP_MustafarianCharacter_Basic_C* MustafarianCharacterBP);
	void GetMustafarianCharacter(class ABP_MustafarianCharacter_Basic_C** MustafarianCharacterBP);
	void SetPriestessCharacter(class ABP_PriestessCharacter_Basic_C* PriestessCharacterBP);
	void GetPriestessCharacter(class ABP_PriestessCharacter_Basic_C** PriestessCharacterBP);
	void SetZoeyCharacter(class ABP_ZoeyCharacter_C* ZoeyCharacterBP);
	void GetZoeyCharacter(class ABP_ZoeyCharacter_C** ZoeyCharacterBP);
	void GetVylipCharacter(class ABP_VylipCharacter_Basic_C** VylipCharacterBP);
	void SetVylipCharacter(class ABP_VylipCharacter_Basic_C* VylipCharacterBP);
	void SetZoeyPawn(class ABP_ZoeyPawn_C* NewParam);
	void GetZoeyPawn(class ABP_ZoeyPawn_C** NewParam);
	void UserConstructionScript();
	void ExecuteUbergraph_BP_WKNDGameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
