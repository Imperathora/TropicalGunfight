// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamTypes_generated_h
#error "SteamTypes.generated.h already included, missing '#pragma once' in SteamTypes.h"
#endif
#define STEAMCORE_SteamTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_822_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyBeaconID_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FPartyBeaconID>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_805_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamSessionResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamSessionResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_779_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamSessionSearchSetting_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamSessionSearchSetting>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_755_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamSessionSetting_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamSessionSetting>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_740_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHostPingData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FHostPingData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_724_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageSubscribePublishedFileResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_705_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPublishedFileID_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FPublishedFileID>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_687_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FValidateAuthTicketResponse>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_669_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamTicketHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamTicketHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_651_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamInventoryUpdateHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_634_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamUGCHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamUGCHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_607_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamGameID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamGameID>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h_580_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamTypes_h


#define FOREACH_ENUM_ESTEAMACCOUNTTYPE(op) \
	op(ESteamAccountType::Invalid) \
	op(ESteamAccountType::Individual) \
	op(ESteamAccountType::Multiseat) \
	op(ESteamAccountType::GameServer) \
	op(ESteamAccountType::AnonGameServer) \
	op(ESteamAccountType::Pending) \
	op(ESteamAccountType::ContentServer) \
	op(ESteamAccountType::Clan) \
	op(ESteamAccountType::Chat) \
	op(ESteamAccountType::ConsoleUser) \
	op(ESteamAccountType::AnonUser) \
	op(ESteamAccountType::Max) 

enum class ESteamAccountType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAccountType>();

#define FOREACH_ENUM_ESTEAMCHATENTRYTYPE(op) \
	op(ESteamChatEntryType::Invalid) \
	op(ESteamChatEntryType::ChatMsg) \
	op(ESteamChatEntryType::Typing) \
	op(ESteamChatEntryType::InviteGame) \
	op(ESteamChatEntryType::Emote) \
	op(ESteamChatEntryType::LeftConversation) \
	op(ESteamChatEntryType::Entered) \
	op(ESteamChatEntryType::WasKicked) \
	op(ESteamChatEntryType::WasBanned) \
	op(ESteamChatEntryType::Disconnected) \
	op(ESteamChatEntryType::HistoricalChat) \
	op(ESteamChatEntryType::LinkBlocked) 

enum class ESteamChatEntryType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatEntryType>();

#define FOREACH_ENUM_ESTEAMCHATROOMENTERRESPONSE(op) \
	op(ESteamChatRoomEnterResponse::None) \
	op(ESteamChatRoomEnterResponse::Success) \
	op(ESteamChatRoomEnterResponse::DoesntExist) \
	op(ESteamChatRoomEnterResponse::NotAllowed) \
	op(ESteamChatRoomEnterResponse::Full) \
	op(ESteamChatRoomEnterResponse::Error) \
	op(ESteamChatRoomEnterResponse::Banned) \
	op(ESteamChatRoomEnterResponse::Limited) \
	op(ESteamChatRoomEnterResponse::ClanDisabled) \
	op(ESteamChatRoomEnterResponse::CommunityBan) \
	op(ESteamChatRoomEnterResponse::MemberBlockedYou) \
	op(ESteamChatRoomEnterResponse::YouBlockedMember) \
	op(ESteamChatRoomEnterResponse::RatelimitExceeded) 

enum class ESteamChatRoomEnterResponse : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>();

#define FOREACH_ENUM_ESTEAMRESULT(op) \
	op(ESteamResult::None) \
	op(ESteamResult::OK) \
	op(ESteamResult::Fail) \
	op(ESteamResult::NoConnection) \
	op(ESteamResult::sultNoConnectionRetry) \
	op(ESteamResult::InvalidPassword) \
	op(ESteamResult::LoggedInElsewhere) \
	op(ESteamResult::InvalidProtocolVer) \
	op(ESteamResult::InvalidParam) \
	op(ESteamResult::FileNotFound) \
	op(ESteamResult::Busy) \
	op(ESteamResult::InvalidState) \
	op(ESteamResult::InvalidName) \
	op(ESteamResult::InvalidEmail) \
	op(ESteamResult::DuplicateName) \
	op(ESteamResult::AccessDenied) \
	op(ESteamResult::Timeout) \
	op(ESteamResult::Banned) \
	op(ESteamResult::AccountNotFound) \
	op(ESteamResult::InvalidSteamID) \
	op(ESteamResult::ServiceUnavailable) \
	op(ESteamResult::NotLoggedOn) \
	op(ESteamResult::Pending) \
	op(ESteamResult::EncryptionFailure) \
	op(ESteamResult::InsufficientPrivilege) \
	op(ESteamResult::LimitExceeded) \
	op(ESteamResult::Revoked) \
	op(ESteamResult::Expired) \
	op(ESteamResult::AlreadyRedeemed) \
	op(ESteamResult::DuplicateRequest) \
	op(ESteamResult::AlreadyOwned) \
	op(ESteamResult::IPNotFound) \
	op(ESteamResult::PersistFailed) \
	op(ESteamResult::LockingFailed) \
	op(ESteamResult::LogonSessionReplaced) \
	op(ESteamResult::ConnectFailed) \
	op(ESteamResult::HandshakeFailed) \
	op(ESteamResult::IOFailure) \
	op(ESteamResult::RemoteDisconnect) \
	op(ESteamResult::ShoppingCartNotFound) \
	op(ESteamResult::Blocked) \
	op(ESteamResult::Ignored) \
	op(ESteamResult::NoMatch) \
	op(ESteamResult::AccountDisabled) \
	op(ESteamResult::ServiceReadOnly) \
	op(ESteamResult::AccountNotFeatured) \
	op(ESteamResult::AdministratorOK) \
	op(ESteamResult::ContentVersion) \
	op(ESteamResult::TryAnotherCM) \
	op(ESteamResult::PasswordRequiredToKickSession) \
	op(ESteamResult::AlreadyLoggedInElsewhere) \
	op(ESteamResult::Suspended) \
	op(ESteamResult::Cancelled) \
	op(ESteamResult::DataCorruption) \
	op(ESteamResult::DiskFull) \
	op(ESteamResult::RemoteCallFailed) \
	op(ESteamResult::PasswordUnset) \
	op(ESteamResult::ExternalAccountUnlinked) \
	op(ESteamResult::PSNTicketInvalid) \
	op(ESteamResult::ExternalAccountAlreadyLinked) \
	op(ESteamResult::RemoteFileConflict) \
	op(ESteamResult::IllegalPassword) \
	op(ESteamResult::SameAsPreviousValue) \
	op(ESteamResult::AccountLogonDenied) \
	op(ESteamResult::CannotUseOldPassword) \
	op(ESteamResult::InvalidLoginAuthCode) \
	op(ESteamResult::AccountLogonDeniedNoMail) \
	op(ESteamResult::HardwareNotCapableOfIPT) \
	op(ESteamResult::IPTInitError) \
	op(ESteamResult::ParentalControlRestricted) \
	op(ESteamResult::FacebookQueryError) \
	op(ESteamResult::ExpiredLoginAuthCode) \
	op(ESteamResult::IPLoginRestrictionFailed) \
	op(ESteamResult::AccountLockedDown) \
	op(ESteamResult::AccountLogonDeniedVerifiedEmailRequired) \
	op(ESteamResult::NoMatchingURL) \
	op(ESteamResult::BadResponse) \
	op(ESteamResult::RequirePasswordReEntry) \
	op(ESteamResult::ValueOutOfRange) \
	op(ESteamResult::UnexpectedError) \
	op(ESteamResult::Disabled) \
	op(ESteamResult::InvalidCEGSubmission) \
	op(ESteamResult::RestrictedDevice) \
	op(ESteamResult::RegionLocked) \
	op(ESteamResult::RateLimitExceeded) \
	op(ESteamResult::AccountLoginDeniedNeedTwoFactor) \
	op(ESteamResult::ItemDeleted) \
	op(ESteamResult::AccountLoginDeniedThrottle) \
	op(ESteamResult::TwoFactorCodeMismatch) \
	op(ESteamResult::TwoFactorActivationCodeMismatch) \
	op(ESteamResult::AccountAssociatedToMultiplePartners) \
	op(ESteamResult::NotModified) \
	op(ESteamResult::NoMobileDevice) \
	op(ESteamResult::TimeNotSynced) \
	op(ESteamResult::SmsCodeFailed) \
	op(ESteamResult::AccountLimitExceeded) \
	op(ESteamResult::AccountActivityLimitExceeded) \
	op(ESteamResult::PhoneActivityLimitExceeded) \
	op(ESteamResult::RefundToWallet) \
	op(ESteamResult::EmailSendFailure) \
	op(ESteamResult::NotSettled) \
	op(ESteamResult::NeedCaptcha) \
	op(ESteamResult::GSLTDenied) \
	op(ESteamResult::GSOwnerDenied) \
	op(ESteamResult::InvalidItemType) \
	op(ESteamResult::IPBanned) \
	op(ESteamResult::GSLTExpired) \
	op(ESteamResult::InsufficientFunds) \
	op(ESteamResult::TooManyPending) \
	op(ESteamResult::NoSiteLicensesFound) \
	op(ESteamResult::WGNetworkSendExceeded) \
	op(ESteamResult::AccountNotFriends) \
	op(ESteamResult::LimitedUserAccount) \
	op(ESteamResult::CantRemoveItem) 

enum class ESteamResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamResult>();

#define FOREACH_ENUM_ESTEAMBEGINAUTHSESSIONRESULT(op) \
	op(ESteamBeginAuthSessionResult::OK) \
	op(ESteamBeginAuthSessionResult::InvalidTicket) \
	op(ESteamBeginAuthSessionResult::DuplicateRequest) \
	op(ESteamBeginAuthSessionResult::InvalidVersion) \
	op(ESteamBeginAuthSessionResult::GameMismatch) \
	op(ESteamBeginAuthSessionResult::ExpiredTicket) 

enum class ESteamBeginAuthSessionResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamBeginAuthSessionResult>();

#define FOREACH_ENUM_ESTEAMUSERHASLICENSEFORAPPRESULT(op) \
	op(ESteamUserHasLicenseForAppResult::HasLicense) \
	op(ESteamUserHasLicenseForAppResult::DoesNotHaveLicense) \
	op(ESteamUserHasLicenseForAppResult::NoAuth) 

enum class ESteamUserHasLicenseForAppResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserHasLicenseForAppResult>();

#define FOREACH_ENUM_ESTEAMAUTHSESSIONRESPONSE(op) \
	op(ESteamAuthSessionResponse::OK) \
	op(ESteamAuthSessionResponse::UserNotConnectedToSteam) \
	op(ESteamAuthSessionResponse::NoLicenseOrExpired) \
	op(ESteamAuthSessionResponse::VACBanned) \
	op(ESteamAuthSessionResponse::LoggedInElseWhere) \
	op(ESteamAuthSessionResponse::VACCheckTimedOut) \
	op(ESteamAuthSessionResponse::AuthTicketCanceled) \
	op(ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed) \
	op(ESteamAuthSessionResponse::AuthTicketInvalid) \
	op(ESteamAuthSessionResponse::PublisherIssuedBan) 

enum class ESteamAuthSessionResponse : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAuthSessionResponse>();

#define FOREACH_ENUM_ESTEAMDENYREASON(op) \
	op(ESteamDenyReason::Invalid) \
	op(ESteamDenyReason::InvalidVersion) \
	op(ESteamDenyReason::Generic) \
	op(ESteamDenyReason::NotLoggedOn) \
	op(ESteamDenyReason::NoLicense) \
	op(ESteamDenyReason::Cheater) \
	op(ESteamDenyReason::LoggedInElseWhere) \
	op(ESteamDenyReason::UnknownText) \
	op(ESteamDenyReason::IncompatibleAnticheat) \
	op(ESteamDenyReason::MemoryCorruption) \
	op(ESteamDenyReason::IncompatibleSoftware) \
	op(ESteamDenyReason::SteamConnectionLost) \
	op(ESteamDenyReason::SteamConnectionError) \
	op(ESteamDenyReason::SteamResponseTimedOut) \
	op(ESteamDenyReason::SteamValidationStalled) \
	op(ESteamDenyReason::SteamOwnerLeftGuestUser) 

enum class ESteamDenyReason : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamDenyReason>();

#define FOREACH_ENUM_EONLINECOMPARISON(op) \
	op(EOnlineComparison::Equals) \
	op(EOnlineComparison::NotEquals) \
	op(EOnlineComparison::GreaterThan) \
	op(EOnlineComparison::GreaterThanEquals) \
	op(EOnlineComparison::LessThan) \
	op(EOnlineComparison::LessThanEquals) 

enum class EOnlineComparison : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<EOnlineComparison>();

#define FOREACH_ENUM_ESTEAMMESSAGETYPE(op) \
	op(ESteamMessageType::ENotification) \
	op(ESteamMessageType::EMessage) \
	op(ESteamMessageType::EWarning) 

enum class ESteamMessageType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamMessageType>();

#define FOREACH_ENUM_ESTEAMCOMPARISONOP(op) \
	op(ESteamComparisonOp::Equals) \
	op(ESteamComparisonOp::NotEquals) \
	op(ESteamComparisonOp::GreaterThan) \
	op(ESteamComparisonOp::GreaterThanEquals) \
	op(ESteamComparisonOp::LessThan) \
	op(ESteamComparisonOp::LessThanEquals) \
	op(ESteamComparisonOp::Near) \
	op(ESteamComparisonOp::In) \
	op(ESteamComparisonOp::NotIn) 

enum class ESteamComparisonOp : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamComparisonOp>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
