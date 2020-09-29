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

// ScriptStruct SimStream.SkinTensionParams
// 0x0030
struct FSkinTensionParams
{
	unsigned char                                      Enable : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Tension_PreSmooth;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Tension_PostSmooth;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tension_UDirection;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tension_VDirection;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tension_Stretch;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Stretch_Range;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Stretch_GrowShrink;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tension_Squash;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Squash_Range;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Squash_GrowShrink;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Tension_ColorContrast;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SimStream.DeltaCacheParams
// 0x0060
struct FDeltaCacheParams
{
	bool                                               Enable;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // 0x0001(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     DeltaCacheFile;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     BasePoseFile;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FSkinTensionParams                          SkinTensionParams;                                        // 0x0028(0x0030) (Edit)
	bool                                               SaveSkinTension;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               FixNormals;                                               // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Reload;                                                   // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
};

// ScriptStruct SimStream.URLDownload
// 0x0098
struct FURLDownload
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
