#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NTFlex.ENTFlexClothMeshTopology
enum class ENTFlexClothMeshTopology : uint8_t
{
	Grid                           = 0,
	Hex                            = 1,
	ENTFlexClothMeshTopology_MAX   = 2
};


// Enum NTFlex.EFlexWindFalloffType
enum class EFlexWindFalloffType : uint8_t
{
	None                           = 0,
	Linear                         = 1,
	EFlexWindFalloffType_MAX       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NTFlex.FlexClothAttachSphere
// 0x0010
struct FFlexClothAttachSphere
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTFlex.FlexClothContactEvent
// 0x0018
struct FFlexClothContactEvent
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ShapeSpeed;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClothSpeed;                                               // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
