// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamInputTypes_generated_h
#error "SteamInputTypes.generated.h already included, missing '#pragma once' in SteamInputTypes.h"
#endif
#define STEAMCORE_SteamInputTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_250_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputAnalogActionHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputDigitalActionHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_216_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputActionSetHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputMotionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputMotionData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputDigitalActionData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FInputAnalogActionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamInput_SteamInputTypes_h


#define FOREACH_ENUM_ESTEAMCOREINPUTLEDFLAG(op) \
	op(ESteamCoreInputLEDFlag::SetColor) \
	op(ESteamCoreInputLEDFlag::RestoreUserDefault) 

enum class ESteamCoreInputLEDFlag : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputLEDFlag>();

#define FOREACH_ENUM_ESTEAMCOREINPUTTYPE(op) \
	op(ESteamCoreInputType::Unknown) \
	op(ESteamCoreInputType::SteamController) \
	op(ESteamCoreInputType::XBox360Controller) \
	op(ESteamCoreInputType::XBoxOneController) \
	op(ESteamCoreInputType::GenericGamepad) \
	op(ESteamCoreInputType::PS4Controller) \
	op(ESteamCoreInputType::AppleMFiController) \
	op(ESteamCoreInputType::AndroidController) \
	op(ESteamCoreInputType::SwitchJoyConPair) \
	op(ESteamCoreInputType::SwitchJoyConSingle) \
	op(ESteamCoreInputType::SwitchProController) \
	op(ESteamCoreInputType::MobileTouch) \
	op(ESteamCoreInputType::PS3Controller) \
	op(ESteamCoreInputType::Count) \
	op(ESteamCoreInputType::MaximumPossibleValue) 

enum class ESteamCoreInputType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputType>();

#define FOREACH_ENUM_ESTEAMCORECONTROLLERPAD(op) \
	op(ESteamCoreControllerPad::Left) \
	op(ESteamCoreControllerPad::Right) 

enum class ESteamCoreControllerPad : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreControllerPad>();

#define FOREACH_ENUM_ESTEAMCOREXBOXORIGIN(op) \
	op(ESteamCoreXboxOrigin::A) \
	op(ESteamCoreXboxOrigin::B) \
	op(ESteamCoreXboxOrigin::X) \
	op(ESteamCoreXboxOrigin::Y) \
	op(ESteamCoreXboxOrigin::LeftBumper) \
	op(ESteamCoreXboxOrigin::RightBumper) \
	op(ESteamCoreXboxOrigin::Menu) \
	op(ESteamCoreXboxOrigin::View) \
	op(ESteamCoreXboxOrigin::LeftTrigger_Pull) \
	op(ESteamCoreXboxOrigin::LeftTrigger_Click) \
	op(ESteamCoreXboxOrigin::RightTrigger_Pull) \
	op(ESteamCoreXboxOrigin::RightTrigger_Click) \
	op(ESteamCoreXboxOrigin::LeftStick_Move) \
	op(ESteamCoreXboxOrigin::LeftStick_Click) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadNorth) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadSouth) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadWest) \
	op(ESteamCoreXboxOrigin::LeftStick_DPadEast) \
	op(ESteamCoreXboxOrigin::RightStick_Move) \
	op(ESteamCoreXboxOrigin::RightStick_Click) \
	op(ESteamCoreXboxOrigin::RightStick_DPadNorth) \
	op(ESteamCoreXboxOrigin::RightStick_DPadSouth) \
	op(ESteamCoreXboxOrigin::RightStick_DPadWest) \
	op(ESteamCoreXboxOrigin::RightStick_DPadEast) \
	op(ESteamCoreXboxOrigin::DPad_North) \
	op(ESteamCoreXboxOrigin::DPad_South) \
	op(ESteamCoreXboxOrigin::DPad_West) \
	op(ESteamCoreXboxOrigin::DPad_East) \
	op(ESteamCoreXboxOrigin::Count) 

enum class ESteamCoreXboxOrigin : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreXboxOrigin>();

#define FOREACH_ENUM_ESTEAMCOREINPUTACTIONORIGIN(op) \
	op(ESteamCoreInputActionOrigin::None) \
	op(ESteamCoreInputActionOrigin::SteamController_A) \
	op(ESteamCoreInputActionOrigin::SteamController_B) \
	op(ESteamCoreInputActionOrigin::SteamController_X) \
	op(ESteamCoreInputActionOrigin::SteamController_Y) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftBumper) \
	op(ESteamCoreInputActionOrigin::SteamController_RightBumper) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftGrip) \
	op(ESteamCoreInputActionOrigin::SteamController_RightGrip) \
	op(ESteamCoreInputActionOrigin::SteamController_Start) \
	op(ESteamCoreInputActionOrigin::SteamController_Back) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftPad_Touch) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftPad_Swipe) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftPad_Click) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadNorth) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadSouth) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadWest) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadEast) \
	op(ESteamCoreInputActionOrigin::SteamController_RightPad_Touch) \
	op(ESteamCoreInputActionOrigin::SteamController_RightPad_Swipe) \
	op(ESteamCoreInputActionOrigin::SteamController_RightPad_Click) \
	op(ESteamCoreInputActionOrigin::SteamController_RightPad_DPadNorth) \
	op(ESteamCoreInputActionOrigin::SteamController_RightPad_DPadSouth) \
	op(ESteamCoreInputActionOrigin::SteamController_RightPad_DPadWest) \
	op(ESteamCoreInputActionOrigin::SteamController_RightPad_DPadEast) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Click) \
	op(ESteamCoreInputActionOrigin::SteamController_RightTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::SteamController_RightTrigger_Click) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftStick_Move) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftStick_Click) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::SteamController_Gyro_Move) \
	op(ESteamCoreInputActionOrigin::SteamController_Gyro_Pitch) \
	op(ESteamCoreInputActionOrigin::SteamController_Gyro_Yaw) \
	op(ESteamCoreInputActionOrigin::SteamController_Gyro_Roll) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved0) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved1) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved2) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved3) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved4) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved5) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved6) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved7) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved8) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved9) \
	op(ESteamCoreInputActionOrigin::SteamController_Reserved10) \
	op(ESteamCoreInputActionOrigin::PS4_X) \
	op(ESteamCoreInputActionOrigin::PS4_Circle) \
	op(ESteamCoreInputActionOrigin::PS4_Triangle) \
	op(ESteamCoreInputActionOrigin::PS4_Square) \
	op(ESteamCoreInputActionOrigin::PS4_LeftBumper) \
	op(ESteamCoreInputActionOrigin::PS4_RightBumper) \
	op(ESteamCoreInputActionOrigin::PS4_Options) \
	op(ESteamCoreInputActionOrigin::PS4_Share) \
	op(ESteamCoreInputActionOrigin::PS4_LeftPad_Touch) \
	op(ESteamCoreInputActionOrigin::PS4_LeftPad_Swipe) \
	op(ESteamCoreInputActionOrigin::PS4_LeftPad_Click) \
	op(ESteamCoreInputActionOrigin::PS4_LeftPad_DPadNorth) \
	op(ESteamCoreInputActionOrigin::PS4_LeftPad_DPadSouth) \
	op(ESteamCoreInputActionOrigin::PS4_LeftPad_DPadWest) \
	op(ESteamCoreInputActionOrigin::PS4_LeftPad_DPadEast) \
	op(ESteamCoreInputActionOrigin::PS4_RightPad_Touch) \
	op(ESteamCoreInputActionOrigin::PS4_RightPad_Swipe) \
	op(ESteamCoreInputActionOrigin::PS4_RightPad_Click) \
	op(ESteamCoreInputActionOrigin::PS4_RightPad_DPadNorth) \
	op(ESteamCoreInputActionOrigin::PS4_RightPad_DPadSouth) \
	op(ESteamCoreInputActionOrigin::PS4_RightPad_DPadWest) \
	op(ESteamCoreInputActionOrigin::PS4_RightPad_DPadEast) \
	op(ESteamCoreInputActionOrigin::PS4_CenterPad_Touch) \
	op(ESteamCoreInputActionOrigin::PS4_CenterPad_Swipe) \
	op(ESteamCoreInputActionOrigin::PS4_CenterPad_Click) \
	op(ESteamCoreInputActionOrigin::PS4_CenterPad_DPadNorth) \
	op(ESteamCoreInputActionOrigin::PS4_CenterPad_DPadSouth) \
	op(ESteamCoreInputActionOrigin::PS4_CenterPad_DPadWest) \
	op(ESteamCoreInputActionOrigin::PS4_CenterPad_DPadEast) \
	op(ESteamCoreInputActionOrigin::PS4_LeftTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::PS4_LeftTrigger_Click) \
	op(ESteamCoreInputActionOrigin::PS4_RightTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::PS4_RightTrigger_Click) \
	op(ESteamCoreInputActionOrigin::PS4_LeftStick_Move) \
	op(ESteamCoreInputActionOrigin::PS4_LeftStick_Click) \
	op(ESteamCoreInputActionOrigin::PS4_LeftStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::PS4_LeftStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::PS4_LeftStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::PS4_LeftStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::PS4_RightStick_Move) \
	op(ESteamCoreInputActionOrigin::PS4_RightStick_Click) \
	op(ESteamCoreInputActionOrigin::PS4_RightStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::PS4_RightStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::PS4_RightStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::PS4_RightStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::PS4_DPad_North) \
	op(ESteamCoreInputActionOrigin::PS4_DPad_South) \
	op(ESteamCoreInputActionOrigin::PS4_DPad_West) \
	op(ESteamCoreInputActionOrigin::PS4_DPad_East) \
	op(ESteamCoreInputActionOrigin::PS4_Gyro_Move) \
	op(ESteamCoreInputActionOrigin::PS4_Gyro_Pitch) \
	op(ESteamCoreInputActionOrigin::PS4_Gyro_Yaw) \
	op(ESteamCoreInputActionOrigin::PS4_Gyro_Roll) \
	op(ESteamCoreInputActionOrigin::PS4_DPad_Move) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved1) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved2) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved3) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved4) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved5) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved6) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved7) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved8) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved9) \
	op(ESteamCoreInputActionOrigin::PS4_Reserved10) \
	op(ESteamCoreInputActionOrigin::XBoxOne_A) \
	op(ESteamCoreInputActionOrigin::XBoxOne_B) \
	op(ESteamCoreInputActionOrigin::XBoxOne_X) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Y) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftBumper) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightBumper) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Menu) \
	op(ESteamCoreInputActionOrigin::XBoxOne_View) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Click) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Click) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Move) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Click) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightStick_Move) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightStick_Click) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::XBoxOne_DPad_North) \
	op(ESteamCoreInputActionOrigin::XBoxOne_DPad_South) \
	op(ESteamCoreInputActionOrigin::XBoxOne_DPad_West) \
	op(ESteamCoreInputActionOrigin::XBoxOne_DPad_East) \
	op(ESteamCoreInputActionOrigin::XBoxOne_DPad_Move) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved1) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved2) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved3) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved4) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved5) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved6) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved7) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved8) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved9) \
	op(ESteamCoreInputActionOrigin::XBoxOne_Reserved10) \
	op(ESteamCoreInputActionOrigin::XBox360_A) \
	op(ESteamCoreInputActionOrigin::XBox360_B) \
	op(ESteamCoreInputActionOrigin::XBox360_X) \
	op(ESteamCoreInputActionOrigin::XBox360_Y) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftBumper) \
	op(ESteamCoreInputActionOrigin::XBox360_RightBumper) \
	op(ESteamCoreInputActionOrigin::XBox360_Start) \
	op(ESteamCoreInputActionOrigin::XBox360_Back) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Click) \
	op(ESteamCoreInputActionOrigin::XBox360_RightTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::XBox360_RightTrigger_Click) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftStick_Move) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftStick_Click) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::XBox360_RightStick_Move) \
	op(ESteamCoreInputActionOrigin::XBox360_RightStick_Click) \
	op(ESteamCoreInputActionOrigin::XBox360_RightStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::XBox360_RightStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::XBox360_RightStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::XBox360_RightStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::XBox360_DPad_North) \
	op(ESteamCoreInputActionOrigin::XBox360_DPad_South) \
	op(ESteamCoreInputActionOrigin::XBox360_DPad_West) \
	op(ESteamCoreInputActionOrigin::XBox360_DPad_East) \
	op(ESteamCoreInputActionOrigin::XBox360_DPad_Move) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved1) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved2) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved3) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved4) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved5) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved6) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved7) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved8) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved9) \
	op(ESteamCoreInputActionOrigin::XBox360_Reserved10) \
	op(ESteamCoreInputActionOrigin::Switch_A) \
	op(ESteamCoreInputActionOrigin::Switch_B) \
	op(ESteamCoreInputActionOrigin::Switch_X) \
	op(ESteamCoreInputActionOrigin::Switch_Y) \
	op(ESteamCoreInputActionOrigin::Switch_LeftBumper) \
	op(ESteamCoreInputActionOrigin::Switch_RightBumper) \
	op(ESteamCoreInputActionOrigin::Switch_Plus) \
	op(ESteamCoreInputActionOrigin::Switch_Minus) \
	op(ESteamCoreInputActionOrigin::Switch_Capture) \
	op(ESteamCoreInputActionOrigin::Switch_LeftTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::Switch_LeftTrigger_Click) \
	op(ESteamCoreInputActionOrigin::Switch_RightTrigger_Pull) \
	op(ESteamCoreInputActionOrigin::Switch_RightTrigger_Click) \
	op(ESteamCoreInputActionOrigin::Switch_LeftStick_Move) \
	op(ESteamCoreInputActionOrigin::Switch_LeftStick_Click) \
	op(ESteamCoreInputActionOrigin::Switch_LeftStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::Switch_LeftStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::Switch_LeftStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::Switch_LeftStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::Switch_RightStick_Move) \
	op(ESteamCoreInputActionOrigin::Switch_RightStick_Click) \
	op(ESteamCoreInputActionOrigin::Switch_RightStick_DPadNorth) \
	op(ESteamCoreInputActionOrigin::Switch_RightStick_DPadSouth) \
	op(ESteamCoreInputActionOrigin::Switch_RightStick_DPadWest) \
	op(ESteamCoreInputActionOrigin::Switch_RightStick_DPadEast) \
	op(ESteamCoreInputActionOrigin::Switch_DPad_North) \
	op(ESteamCoreInputActionOrigin::Switch_DPad_South) \
	op(ESteamCoreInputActionOrigin::Switch_DPad_West) \
	op(ESteamCoreInputActionOrigin::Switch_DPad_East) \
	op(ESteamCoreInputActionOrigin::Switch_ProGyro_Move) \
	op(ESteamCoreInputActionOrigin::Switch_ProGyro_Pitch) \
	op(ESteamCoreInputActionOrigin::Switch_ProGyro_Yaw) \
	op(ESteamCoreInputActionOrigin::Switch_ProGyro_Roll) \
	op(ESteamCoreInputActionOrigin::Switch_DPad_Move) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved1) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved2) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved3) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved4) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved5) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved6) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved7) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved8) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved9) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved10) \
	op(ESteamCoreInputActionOrigin::Switch_RightGyro_Move) \
	op(ESteamCoreInputActionOrigin::Switch_RightGyro_Pitch) \
	op(ESteamCoreInputActionOrigin::Switch_RightGyro_Yaw) \
	op(ESteamCoreInputActionOrigin::Switch_RightGyro_Roll) \
	op(ESteamCoreInputActionOrigin::Switch_LeftGyro_Move) \
	op(ESteamCoreInputActionOrigin::Switch_LeftGyro_Pitch) \
	op(ESteamCoreInputActionOrigin::Switch_LeftGyro_Yaw) \
	op(ESteamCoreInputActionOrigin::Switch_LeftGyro_Roll) \
	op(ESteamCoreInputActionOrigin::Switch_LeftGrip_Lower) \
	op(ESteamCoreInputActionOrigin::Switch_LeftGrip_Upper) \
	op(ESteamCoreInputActionOrigin::Switch_RightGrip_Lower) \
	op(ESteamCoreInputActionOrigin::Switch_RightGrip_Upper) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved11) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved12) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved13) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved14) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved15) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved16) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved17) \
	op(ESteamCoreInputActionOrigin::Switch_Reserved18) 

enum class ESteamCoreInputActionOrigin : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputActionOrigin>();

#define FOREACH_ENUM_ESTEAMCOREINPUTSOURCEMODE(op) \
	op(ESteamCoreInputSourceMode::None) \
	op(ESteamCoreInputSourceMode::Dpad) \
	op(ESteamCoreInputSourceMode::Buttons) \
	op(ESteamCoreInputSourceMode::FourButtons) \
	op(ESteamCoreInputSourceMode::AbsoluteMouse) \
	op(ESteamCoreInputSourceMode::RelativeMouse) \
	op(ESteamCoreInputSourceMode::JoystickMove) \
	op(ESteamCoreInputSourceMode::JoystickMouse) \
	op(ESteamCoreInputSourceMode::JoystickCamera) \
	op(ESteamCoreInputSourceMode::ScrollWheel) \
	op(ESteamCoreInputSourceMode::Trigger) \
	op(ESteamCoreInputSourceMode::TouchMenu) \
	op(ESteamCoreInputSourceMode::MouseJoystick) \
	op(ESteamCoreInputSourceMode::MouseRegion) \
	op(ESteamCoreInputSourceMode::RadialMenu) \
	op(ESteamCoreInputSourceMode::SingleButton) \
	op(ESteamCoreInputSourceMode::Switches) 

enum class ESteamCoreInputSourceMode : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSourceMode>();

#define FOREACH_ENUM_ESTEAMCOREINPUTSOURCE(op) \
	op(ESteamCoreInputSource::None) \
	op(ESteamCoreInputSource::LeftTrackpad) \
	op(ESteamCoreInputSource::RightTrackpad) \
	op(ESteamCoreInputSource::Joystick) \
	op(ESteamCoreInputSource::ABXY) \
	op(ESteamCoreInputSource::Switch) \
	op(ESteamCoreInputSource::LeftTrigger) \
	op(ESteamCoreInputSource::RightTrigger) \
	op(ESteamCoreInputSource::LeftBumper) \
	op(ESteamCoreInputSource::RightBumper) \
	op(ESteamCoreInputSource::Gyro) \
	op(ESteamCoreInputSource::CenterTrackpad) \
	op(ESteamCoreInputSource::RightJoystick) \
	op(ESteamCoreInputSource::DPad) \
	op(ESteamCoreInputSource::Key) \
	op(ESteamCoreInputSource::Mouse) \
	op(ESteamCoreInputSource::LeftGyro) \
	op(ESteamCoreInputSource::Count) 

enum class ESteamCoreInputSource : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
