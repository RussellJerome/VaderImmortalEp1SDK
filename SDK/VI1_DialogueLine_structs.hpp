#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DialogueLine.DialogueLine
// 0x0048
struct FDialogueLine
{
	TEnumAsByte<ESpeakingCharacter>                    Speaker_32_03B7A79C41F7655C02D8059E095E2924;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DialogueLine.DialogueLine.ScriptLine_33_12B225464AC73623D1A322B99C7DF37A
	bool                                               AllowConcurrent_35_E4FD653241C2BBE9A55DF7800AD672A4;      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                Priority_26_706FF82E429BF9D9D64B6285B9886F1C;             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment_38_43D254344DAA55CD9FB75C9A9E82F34D;              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
