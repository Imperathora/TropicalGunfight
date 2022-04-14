/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/SoundWaveProcedural.h"
#include "SteamCore/SteamTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "SteamUtilities.generated.h"

class UServerFilter;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamMessage, ESteamMessageType, type, const FString&, message);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHTTPResponse, const FString&, response);

UCLASS()
class USteamCoreVoice : public USoundWaveProcedural
{
	GENERATED_BODY()
public:
	USteamCoreVoice(const FObjectInitializer& ObjectInitializer);
public:
	UFUNCTION(BlueprintCallable, Category = "SteamCoreVoice")
		void AddAudioBuffer(const TArray<uint8>& buffer);

	UFUNCTION(BlueprintCallable,  Category = "SteamCore|Utilities")
        static void DestroySteamCoreVoice(USteamCoreVoice* obj);
        
	UFUNCTION(BlueprintCallable,  Category = "SteamCore|Utilities")
		static USteamCoreVoice* ConstructSteamCoreVoice(int32 audioSampleRate = 24000);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam Utilities Class
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

template <typename TEnum>
static FORCEINLINE FString GetSteamCoreEnumAsString(const FString& name, TEnum val)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *name, true);
	if (!EnumPtr)
		return "";

	return EnumPtr->GetNameStringByValue((int64)val);
}

static FORCEINLINE UTexture2D* GetSteamTexture(int imageData)
{
	UTexture2D* Texture = nullptr;

	uint32 Width = 0;
	uint32 Height = 0;

	SteamUtils()->GetImageSize(imageData, &Width, &Height);

	if (Width > 0 && Height > 0)
	{
		Texture = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);

		uint8* RGBA = new uint8[Width * Height * 4];

		SteamUtils()->GetImageRGBA(imageData, (uint8*)RGBA, 4 * Height * Width);

		uint8* MipData = (uint8*)Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(MipData, (void*)RGBA, Height * Width * 4);

		Texture->PlatformData->Mips[0].BulkData.Unlock();
		Texture->NeverStream = true;
		Texture->UpdateResource();

		delete[] RGBA;
	}

	return Texture;
}

UENUM(BlueprintType)
enum class ESteamCoreValid : uint8
{
	Valid,NotValid
};

UENUM(BlueprintType)
enum class ESteamCoreIdentical : uint8
{
	Identical,NotIdentical
};

UCLASS(abstract)
class STEAMCORE_API USteamUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Native Make Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamID MakeSteamID(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamGameID MakeSteamGameID(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FPublishedFileID MakePublishedFileID(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamUGCHandle MakeUGCHandle(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamTicketHandle MakeTicketHandle(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamSessionSetting MakeBool(bool value)
	{
		return FSteamSessionSetting(value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamSessionSetting MakeString(FString value)
	{
		return FSteamSessionSetting(value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamSessionSetting MakeInteger(int32 value)
	{
		return FSteamSessionSetting(value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamSessionSearchSetting MakeSearchBool(bool value)
	{
		return FSteamSessionSearchSetting(value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamSessionSearchSetting MakeSearchString(FString value)
	{
		return FSteamSessionSearchSetting(value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamSessionSearchSetting MakeSearchInteger(ESteamComparisonOp comparisonOperator, int32 value)
	{
		return FSteamSessionSearchSetting(comparisonOperator, value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static bool GetBool(FSteamSessionSetting settings, FString& key)
	{
		bool Result = false;

		if (settings.Data.IsType<bool>())
		{
			key = settings.Key;
			Result = settings.Data.Get<bool>();
		}

		return Result;
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static int32 GetInteger(FSteamSessionSetting settings, FString& key)
	{
		int32 Result = -1;
		key.Empty();

		if (settings.Data.IsType<FString>())
		{
			key = settings.Key;
			Result = settings.Data.Get<int32>();
		}

		return Result;
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static FString GetString(FSteamSessionSetting settings, FString& key)
	{
		FString Result;
		key.Empty();

		if (settings.Data.IsType<FString>())
		{
			key = settings.Key;
			Result = settings.Data.Get<FString>();
		}

		return Result;
	};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Native Break Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakSteamID(FSteamID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakSteamGameID(FSteamGameID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakPublishedFileID(FPublishedFileID fileID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakUGCHandle(FSteamUGCHandle handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakTicketHandle(FSteamTicketHandle handle);
	
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Is Valid
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static bool IsValid(FSteamID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Is Valid"))
		static bool IsPublishedFileIDValid(FPublishedFileID publishedFileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsPublishedFileIDValid_Exec(FPublishedFileID handle, ESteamCoreValid& result) { result = handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsSteamIDValid_Exec(FSteamID steamID, ESteamCoreValid& result) { result = steamID.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsGameIDValid(FSteamGameID gameID) { return gameID.IsValid(); }
	 
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsGameIDValid_Exec(FSteamGameID gameID, ESteamCoreValid& result) { result = gameID.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsUGCHandleValid(FSteamUGCHandle handle) { return handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsUGCHandleValid_Exec(FSteamUGCHandle handle, ESteamCoreValid& result) { result = handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsSteamTicketHandleValid(FSteamTicketHandle handle) { return handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsSteamTicketHandleValid_Exec(FSteamTicketHandle handle, ESteamCoreValid& result) { result = handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsSteamInventoryUpdateHandleValid(FSteamInventoryUpdateHandle handle) { return handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsSteamInventoryUpdateHandleValid_Exec(FSteamInventoryUpdateHandle handle, ESteamCoreValid& result) { result = handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }
		
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Equal
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool Equal(FSteamID a, FSteamID b);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "result"))
		static void Equal_Exec(FSteamID a, FSteamID b, ESteamCoreIdentical& result) { result = a == b ? ESteamCoreIdentical::Identical : ESteamCoreIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
		static bool NotEqual(FSteamID a, FSteamID b);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool PublishedFileID_Equals(FPublishedFileID a, FPublishedFileID b);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "result"))
		static void PublishedFileID_Equals_Exec(FPublishedFileID a, FPublishedFileID b, ESteamCoreIdentical& result) { result = a == b ? ESteamCoreIdentical::Identical : ESteamCoreIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
		static bool PublishedFileID_NotEquals(FPublishedFileID a, FPublishedFileID b);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool SteamItemInstanceID_Equals(struct FSteamItemInstanceID a, struct FSteamItemInstanceID b);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "result"))
		static void SteamItemInstanceID_Equals_Exec(struct FSteamItemInstanceID a, struct FSteamItemInstanceID b, ESteamCoreIdentical& result);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Utility Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static ESteamAccountType GetAccountType(FSteamID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static bool IsLobby(FSteamID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static bool IsSteamAvailable();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (WorldContext="WorldContextObject"))
		static UServerFilter* ConstructServerFilter(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static FDateTime FromUnixTimestamp(FString timestamp)
	{
		return FDateTime::FromUnixTimestamp(FCString::Atoi64(*timestamp));
	}

	// Returns a hashed/encrypted version of the string
	UFUNCTION(BlueprintCallable,  Category = "SteamCore|Utilities")
		static FString EncryptString(FString string);
	
	// Try getting our public ip
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
		static void GetPublicIp(const FOnHTTPResponse& callback);

	/*
	 * Releases the asynchronous request object and cancels any pending query on it if there's a pending query in progress.
	 * RefreshComplete callback is not posted when request is released.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
		static void ReleaseRequest();

	/*
	 *Cancel an request which is operation on the given list type.  You should call this to cancel
	 * any in-progress requests before destructing a callback object that may have been passed
	 * to one of the above list request calls.  Not doing so may result in a crash when a callback
	 * occurs on the destructed object.
	 *
	 * Canceling a query does not release the allocated request handle.
	 * The request handle must be released using ReleaseRequest( hRequest )
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
		static void CancelQuery();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static FSteamID GetSteamIdFromPlayerState(APlayerState* PlayerState);
	
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Ping Utilities
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	/**
	 * Returns if this application is set up to use the Steam P2P Relay Network
	 * for communication.
	 *
	 * Uses OnlineSubsystemSteam.bAllowP2PPacketRelay
	 *
	 * @return true if relays are enabled for P2P connections.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
		static bool IsUsingP2PRelays();

	/**
	 * Returns the P2P relay ping information for the current machine. This information can be
	 * serialized over the network and used to calculate the ping data between a client and a host.
	 *
	 * @return relay information blob stored as a string for relaying over the network.
	 *         If an error occurred, the return is an empty string.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
		static FHostPingData GetHostPingData();

	/**
	 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.
	 *
	 * @param HostPingStr The relay information blob we got from the host. This information
	 *                    should be directly serialized over the network and not tampered with.
	 *
	 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
		static int32 GetPingFromHostData(const FHostPingData& data);

	/**
	* An informative member that allows us to check if we are recalculating our ping
	* information over the Valve network. Data is additively modified during recalculation
	* such that we do not need to block on this function returning false before using
	* ping data.
	*
	* @return true if we're recalculating our ping within the Valve relay network.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities|Ping")
		static bool IsRecalculatingPing();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
		static void ListenForSteamMessages(const FOnSteamMessage& callback);

	static void InvokeSteamMessage(ESteamMessageType type, const FString& message);
public:
	static TArray<FOnSteamMessage> s_SteamMessageListeners;
};