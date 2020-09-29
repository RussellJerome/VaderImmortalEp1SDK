#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SimStream.AssetManagementUtilsLibrary.GetOrderedDeltaCacheFiles
struct UAssetManagementUtilsLibrary_GetOrderedDeltaCacheFiles_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SimStream.HttpDownloadManager.GetAssetURL
struct UHttpDownloadManager_GetAssetURL_Params
{
	struct FString                                     Asset;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SimStream.HttpDownloadManager.GetAssets
struct UHttpDownloadManager_GetAssets_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SimStream.HttpDownloadManager.FetchManifestURLs
struct UHttpDownloadManager_FetchManifestURLs_Params
{
};

// Function SimStream.HttpDownloadManager.DownloadProgressUpdated
struct UHttpDownloadManager_DownloadProgressUpdated_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimStream.HttpDownloadManager.DownloadFinished
struct UHttpDownloadManager_DownloadFinished_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimStream.HttpDownloadManager.DownloadAvailability
struct UHttpDownloadManager_DownloadAvailability_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               bIsAvailable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimStream.HttpDownloadManager.Download
struct UHttpDownloadManager_Download_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function SimStream.HttpDownloadManager.DeltaCacheManifestUpdated
struct UHttpDownloadManager_DeltaCacheManifestUpdated_Params
{
};

// Function SimStream.HttpDownloadManager.Cleanup
struct UHttpDownloadManager_Cleanup_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function SimStream.HttpDownloadManager.CheckDownloadAvailability
struct UHttpDownloadManager_CheckDownloadAvailability_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function SimStream.HttpDownloadManager.Cancel
struct UHttpDownloadManager_Cancel_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function SimStream.HttpDownloadManager.AlreadyDownloaded
struct UHttpDownloadManager_AlreadyDownloaded_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SimStream.SimStreamActor.SetFrame
struct ASimStreamActor_SetFrame_Params
{
	int                                                FrameIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpFrac;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
