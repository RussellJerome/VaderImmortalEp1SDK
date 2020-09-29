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

// Class NTLibsEngine.NTAnimationList
// 0x0000 (0x0028 - 0x0028)
class UNTAnimationList : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibsEngine.NTAnimationList");
		return ptr;
	}

};


// Class NTLibsEngine.NTAnimationSet
// 0x0070 (0x0098 - 0x0028)
class UNTAnimationSet : public UObject
{
public:
	TArray<struct FName>                               ListNames;                                                // 0x0028(0x0010) (ZeroConstructor, Config)
	TArray<struct FNTAnimationListStruct>              AnimLists;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, class UNTAnimationList*>        ListMap;                                                  // 0x0048(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibsEngine.NTAnimationSet");
		return ptr;
	}


	class UNTAnimationList* STATIC_GetListFromName(class UClass* AnimSetClass, const struct FName& ListName, class UClass* ListClass);
};


// Class NTLibsEngine.NTTestBlueprint
// 0x0088 (0x00B0 - 0x0028)
class UNTTestBlueprint : public UObject
{
public:
	struct FString                                     Category;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bEnabled;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETestBlueprintType                                 Type;                                                     // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRunsInEditor;                                            // 0x003A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRunsInGame;                                              // 0x003B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRunsInCommandlet;                                        // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x003D(0x0028) UNKNOWN PROPERTY: SoftObjectProperty NTLibsEngine.NTTestBlueprint.TestMap
	bool                                               bSuppressLogs;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              AutomationCommandTimeElapsed;                             // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTestState;                                               // 0x0070(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3F];                                      // 0x0071(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibsEngine.NTTestBlueprint");
		return ptr;
	}


	void SubmitMetric_Vector(const struct FString& MetricName, const struct FVector& Value);
	void SubmitMetric_String(const struct FString& MetricName, const struct FString& Value);
	void SubmitMetric_Int32(const struct FString& MetricName, int Value);
	void SubmitMetric_Float(const struct FString& MetricName, float Value);
	void SubmitMetric_Bool(const struct FString& MetricName, bool bValue);
	void SetTestState(bool bInTestState, const struct FString& LogMessage);
	void SetTestAction(const struct FScriptDelegate& Command);
	void OnRunTest(const struct FString& Parameters);
	bool LoadMap();
};


// Class NTLibsEngine.NTAssetSurveyTestBlueprint
// 0x0050 (0x0100 - 0x00B0)
class UNTAssetSurveyTestBlueprint : public UNTTestBlueprint
{
public:
	struct FString                                     AssetType;                                                // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             AssetPaths;                                               // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              NativeParentClasses;                                      // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              DirectParentClasses;                                      // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UObject*>                             Assets;                                                   // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibsEngine.NTAssetSurveyTestBlueprint");
		return ptr;
	}

};


// Class NTLibsEngine.NTStatSummary
// 0x0028 (0x0050 - 0x0028)
class UNTStatSummary : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibsEngine.NTStatSummary");
		return ptr;
	}

};


// Class NTLibsEngine.NTTokenManager
// 0x0068 (0x0090 - 0x0028)
class UNTTokenManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	class AActor*                                      m_OwnerActor;                                             // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTLibsEngine.NTTokenManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
