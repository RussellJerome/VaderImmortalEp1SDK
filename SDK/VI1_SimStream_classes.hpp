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

// Class SimStream.AssetManagementUtilsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAssetManagementUtilsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimStream.AssetManagementUtilsLibrary");
		return ptr;
	}


	TArray<struct FString> STATIC_GetOrderedDeltaCacheFiles();
};


// Class SimStream.VertexAnimationDeltaCache
// 0x00D8 (0x0100 - 0x0028)
class UVertexAnimationDeltaCache : public UVertexAnimation
{
public:
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FramesPerSecond;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FDeltaCacheParams>                   DeltaCacheParams;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BasePoseFile;                                             // 0x0048(0x0010) (ZeroConstructor, Deprecated)
	struct FString                                     DeltaCacheFile;                                           // 0x0058(0x0010) (ZeroConstructor, Deprecated)
	struct FSkinTensionParams                          SkinTensionParams;                                        // 0x0068(0x0030) (Deprecated)
	bool                                               SaveSkinTensionDataNow;                                   // 0x0098(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               FixNormalsNow;                                            // 0x0099(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               ReloadNow;                                                // 0x009A(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x65];                                      // 0x009B(0x0065) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimStream.VertexAnimationDeltaCache");
		return ptr;
	}

};


// Class SimStream.HttpDownloadManager
// 0x0128 (0x0330 - 0x0208)
class UHttpDownloadManager : public UUserWidget
{
public:
	struct FString                                     ManifestBaseURL;                                          // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	uint64_t                                           MaxChunkSize;                                             // 0x0218(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     LocalBaseDir;                                             // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAllowOverwriting;                                        // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFF];                                      // 0x0231(0x00FF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimStream.HttpDownloadManager");
		return ptr;
	}


	struct FString GetAssetURL(const struct FString& Asset);
	TArray<struct FString> GetAssets();
	void FetchManifestURLs();
	void DownloadProgressUpdated(const struct FString& URL, float Percent);
	void DownloadFinished(const struct FString& URL, bool bWasSuccessful);
	void DownloadAvailability(const struct FString& URL, bool bIsAvailable);
	void Download(const struct FString& URL);
	void DeltaCacheManifestUpdated();
	void Cleanup(const struct FString& URL);
	void CheckDownloadAvailability(const struct FString& URL);
	void Cancel(const struct FString& URL);
	bool AlreadyDownloaded(const struct FString& URL);
};


// Class SimStream.SimStreamActor
// 0x0010 (0x0328 - 0x0318)
class ASimStreamActor : public AActor
{
public:
	class USimStreamMesh*                              SimStreamMesh;                                            // 0x0318(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bPlay;                                                    // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	float                                              AnimFrac;                                                 // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimStream.SimStreamActor");
		return ptr;
	}


	void SetFrame(int FrameIndex, float InterpFrac);
};


// Class SimStream.SimStreamAsset
// 0x00B8 (0x00E0 - 0x0028)
class USimStreamAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimStream.SimStreamAsset");
		return ptr;
	}

};


// Class SimStream.SimStreamMesh
// 0x0020 (0x06D0 - 0x06B0)
class USimStreamMesh : public UMeshComponent
{
public:
	class USimStreamAsset*                             SimStreamAsset;                                           // 0x06B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x06B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimStream.SimStreamMesh");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
