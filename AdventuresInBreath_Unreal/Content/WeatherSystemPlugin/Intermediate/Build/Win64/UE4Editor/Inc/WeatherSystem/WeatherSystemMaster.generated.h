// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEATHERSYSTEM_WeatherSystemMaster_generated_h
#error "WeatherSystemMaster.generated.h already included, missing '#pragma once' in WeatherSystemMaster.h"
#endif
#define WEATHERSYSTEM_WeatherSystemMaster_generated_h

#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_SPARSE_DATA
#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSnowFallingTimeLine); \
	DECLARE_FUNCTION(execUpdateRainFallingTimeLine); \
	DECLARE_FUNCTION(execUpdateFrozenTimeLine); \
	DECLARE_FUNCTION(execUpdateGetWetTimeLine); \
	DECLARE_FUNCTION(execUpdateSnowOrRainFallingTimeLine); \
	DECLARE_FUNCTION(execUpdateSunTimeLine); \
	DECLARE_FUNCTION(execUpdateIsNightTimeLine);


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSnowFallingTimeLine); \
	DECLARE_FUNCTION(execUpdateRainFallingTimeLine); \
	DECLARE_FUNCTION(execUpdateFrozenTimeLine); \
	DECLARE_FUNCTION(execUpdateGetWetTimeLine); \
	DECLARE_FUNCTION(execUpdateSnowOrRainFallingTimeLine); \
	DECLARE_FUNCTION(execUpdateSunTimeLine); \
	DECLARE_FUNCTION(execUpdateIsNightTimeLine);


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeatherSystemMaster(); \
	friend struct Z_Construct_UClass_AWeatherSystemMaster_Statics; \
public: \
	DECLARE_CLASS(AWeatherSystemMaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeatherSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeatherSystemMaster)


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_INCLASS \
private: \
	static void StaticRegisterNativesAWeatherSystemMaster(); \
	friend struct Z_Construct_UClass_AWeatherSystemMaster_Statics; \
public: \
	DECLARE_CLASS(AWeatherSystemMaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeatherSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeatherSystemMaster)


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeatherSystemMaster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeatherSystemMaster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeatherSystemMaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeatherSystemMaster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeatherSystemMaster(AWeatherSystemMaster&&); \
	NO_API AWeatherSystemMaster(const AWeatherSystemMaster&); \
public:


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeatherSystemMaster(AWeatherSystemMaster&&); \
	NO_API AWeatherSystemMaster(const AWeatherSystemMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeatherSystemMaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeatherSystemMaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeatherSystemMaster)


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DirectionalLight() { return STRUCT_OFFSET(AWeatherSystemMaster, DirectionalLight); } \
	FORCEINLINE static uint32 __PPO__SkyLight() { return STRUCT_OFFSET(AWeatherSystemMaster, SkyLight); } \
	FORCEINLINE static uint32 __PPO__SkyAtmosphere() { return STRUCT_OFFSET(AWeatherSystemMaster, SkyAtmosphere); } \
	FORCEINLINE static uint32 __PPO__PostProcessComp() { return STRUCT_OFFSET(AWeatherSystemMaster, PostProcessComp); } \
	FORCEINLINE static uint32 __PPO__VolumetricCloud() { return STRUCT_OFFSET(AWeatherSystemMaster, VolumetricCloud); } \
	FORCEINLINE static uint32 __PPO__ExponentialHeightFog() { return STRUCT_OFFSET(AWeatherSystemMaster, ExponentialHeightFog); } \
	FORCEINLINE static uint32 __PPO__SkySphere() { return STRUCT_OFFSET(AWeatherSystemMaster, SkySphere); } \
	FORCEINLINE static uint32 __PPO__RainFX() { return STRUCT_OFFSET(AWeatherSystemMaster, RainFX); } \
	FORCEINLINE static uint32 __PPO__SnowFX() { return STRUCT_OFFSET(AWeatherSystemMaster, SnowFX); } \
	FORCEINLINE static uint32 __PPO__RainAudio() { return STRUCT_OFFSET(AWeatherSystemMaster, RainAudio); } \
	FORCEINLINE static uint32 __PPO__ThunderAudio() { return STRUCT_OFFSET(AWeatherSystemMaster, ThunderAudio); } \
	FORCEINLINE static uint32 __PPO__SnowAudio() { return STRUCT_OFFSET(AWeatherSystemMaster, SnowAudio); } \
	FORCEINLINE static uint32 __PPO__BirdsAudio() { return STRUCT_OFFSET(AWeatherSystemMaster, BirdsAudio); } \
	FORCEINLINE static uint32 __PPO__WindAudio() { return STRUCT_OFFSET(AWeatherSystemMaster, WindAudio); } \
	FORCEINLINE static uint32 __PPO__CicadaAudio() { return STRUCT_OFFSET(AWeatherSystemMaster, CicadaAudio); }


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_44_PROLOG
#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_SPARSE_DATA \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_RPC_WRAPPERS \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_INCLASS \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_SPARSE_DATA \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEATHERSYSTEM_API UClass* StaticClass<class AWeatherSystemMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_WeatherSystem_Source_WeatherSystem_Public_WeatherSystemMaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
