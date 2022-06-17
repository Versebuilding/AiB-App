// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeatherSystem/Public/WeatherSystemMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherSystemMaster() {}
// Cross Module References
	WEATHERSYSTEM_API UClass* Z_Construct_UClass_AWeatherSystemMaster_NoRegister();
	WEATHERSYSTEM_API UClass* Z_Construct_UClass_AWeatherSystemMaster();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeatherSystem();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeatherSystemMaster::execUpdateSnowFallingTimeLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SnowFallingOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSnowFallingTimeLine(Z_Param_SnowFallingOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeatherSystemMaster::execUpdateRainFallingTimeLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RainFallingOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRainFallingTimeLine(Z_Param_RainFallingOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeatherSystemMaster::execUpdateFrozenTimeLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrozenOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFrozenTimeLine(Z_Param_FrozenOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeatherSystemMaster::execUpdateGetWetTimeLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_GetWetOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGetWetTimeLine(Z_Param_GetWetOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeatherSystemMaster::execUpdateSnowOrRainFallingTimeLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SnowOrRainFallingOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSnowOrRainFallingTimeLine(Z_Param_SnowOrRainFallingOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeatherSystemMaster::execUpdateSunTimeLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SunOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSunTimeLine(Z_Param_SunOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeatherSystemMaster::execUpdateIsNightTimeLine)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_IsNightOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIsNightTimeLine(Z_Param_IsNightOutput);
		P_NATIVE_END;
	}
	void AWeatherSystemMaster::StaticRegisterNativesAWeatherSystemMaster()
	{
		UClass* Class = AWeatherSystemMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateFrozenTimeLine", &AWeatherSystemMaster::execUpdateFrozenTimeLine },
			{ "UpdateGetWetTimeLine", &AWeatherSystemMaster::execUpdateGetWetTimeLine },
			{ "UpdateIsNightTimeLine", &AWeatherSystemMaster::execUpdateIsNightTimeLine },
			{ "UpdateRainFallingTimeLine", &AWeatherSystemMaster::execUpdateRainFallingTimeLine },
			{ "UpdateSnowFallingTimeLine", &AWeatherSystemMaster::execUpdateSnowFallingTimeLine },
			{ "UpdateSnowOrRainFallingTimeLine", &AWeatherSystemMaster::execUpdateSnowOrRainFallingTimeLine },
			{ "UpdateSunTimeLine", &AWeatherSystemMaster::execUpdateSunTimeLine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics
	{
		struct WeatherSystemMaster_eventUpdateFrozenTimeLine_Parms
		{
			float FrozenOutput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrozenOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::NewProp_FrozenOutput = { "FrozenOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherSystemMaster_eventUpdateFrozenTimeLine_Parms, FrozenOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::NewProp_FrozenOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe9\x9b\xaa\xe5\xa4\xa9\xe7\xa7\xaf\xe9\x9b\xaa\xe5\x86\xb0\xe5\x86\xbb\xe6\x95\x88\xe6\x9e\x9c\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe9\x9b\xaa\xe5\xa4\xa9\xe7\xa7\xaf\xe9\x9b\xaa\xe5\x86\xb0\xe5\x86\xbb\xe6\x95\x88\xe6\x9e\x9c" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherSystemMaster, nullptr, "UpdateFrozenTimeLine", nullptr, nullptr, sizeof(WeatherSystemMaster_eventUpdateFrozenTimeLine_Parms), Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics
	{
		struct WeatherSystemMaster_eventUpdateGetWetTimeLine_Parms
		{
			float GetWetOutput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GetWetOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::NewProp_GetWetOutput = { "GetWetOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherSystemMaster_eventUpdateGetWetTimeLine_Parms, GetWetOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::NewProp_GetWetOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe9\x9b\xa8\xe5\xa4\xa9\xe6\xb7\x8b\xe6\xb9\xbf\xe6\x95\x88\xe6\x9e\x9c\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe9\x9b\xa8\xe5\xa4\xa9\xe6\xb7\x8b\xe6\xb9\xbf\xe6\x95\x88\xe6\x9e\x9c" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherSystemMaster, nullptr, "UpdateGetWetTimeLine", nullptr, nullptr, sizeof(WeatherSystemMaster_eventUpdateGetWetTimeLine_Parms), Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics
	{
		struct WeatherSystemMaster_eventUpdateIsNightTimeLine_Parms
		{
			float IsNightOutput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IsNightOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::NewProp_IsNightOutput = { "IsNightOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherSystemMaster_eventUpdateIsNightTimeLine_Parms, IsNightOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::NewProp_IsNightOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x97\xb6\xe9\x97\xb4\xe8\xbd\xb4\xe7\x9b\xb8\xe5\x85\xb3\xe5\x87\xbd\xe6\x95\xb0\n//\xe6\x9b\xb4\xe6\x96\xb0\xe5\xa4\x9c\xe6\x99\x9a\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe8\xbd\xb4\xe7\x9b\xb8\xe5\x85\xb3\xe5\x87\xbd\xe6\x95\xb0\n\xe6\x9b\xb4\xe6\x96\xb0\xe5\xa4\x9c\xe6\x99\x9a\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherSystemMaster, nullptr, "UpdateIsNightTimeLine", nullptr, nullptr, sizeof(WeatherSystemMaster_eventUpdateIsNightTimeLine_Parms), Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics
	{
		struct WeatherSystemMaster_eventUpdateRainFallingTimeLine_Parms
		{
			float RainFallingOutput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RainFallingOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::NewProp_RainFallingOutput = { "RainFallingOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherSystemMaster_eventUpdateRainFallingTimeLine_Parms, RainFallingOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::NewProp_RainFallingOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe4\xb8\x8b\xe9\x9b\xa8\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xb8\x8b\xe9\x9b\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherSystemMaster, nullptr, "UpdateRainFallingTimeLine", nullptr, nullptr, sizeof(WeatherSystemMaster_eventUpdateRainFallingTimeLine_Parms), Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics
	{
		struct WeatherSystemMaster_eventUpdateSnowFallingTimeLine_Parms
		{
			float SnowFallingOutput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnowFallingOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::NewProp_SnowFallingOutput = { "SnowFallingOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherSystemMaster_eventUpdateSnowFallingTimeLine_Parms, SnowFallingOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::NewProp_SnowFallingOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe4\xb8\x8b\xe9\x9b\xaa\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xb8\x8b\xe9\x9b\xaa" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherSystemMaster, nullptr, "UpdateSnowFallingTimeLine", nullptr, nullptr, sizeof(WeatherSystemMaster_eventUpdateSnowFallingTimeLine_Parms), Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics
	{
		struct WeatherSystemMaster_eventUpdateSnowOrRainFallingTimeLine_Parms
		{
			float SnowOrRainFallingOutput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnowOrRainFallingOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::NewProp_SnowOrRainFallingOutput = { "SnowOrRainFallingOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherSystemMaster_eventUpdateSnowOrRainFallingTimeLine_Parms, SnowOrRainFallingOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::NewProp_SnowOrRainFallingOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe9\x9b\xa8\xe9\x9b\xaa\xe5\xa4\xa9\xe7\x9b\xb8\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe9\x9b\xa8\xe9\x9b\xaa\xe5\xa4\xa9\xe7\x9b\xb8\xe5\x85\xb3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherSystemMaster, nullptr, "UpdateSnowOrRainFallingTimeLine", nullptr, nullptr, sizeof(WeatherSystemMaster_eventUpdateSnowOrRainFallingTimeLine_Parms), Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics
	{
		struct WeatherSystemMaster_eventUpdateSunTimeLine_Parms
		{
			float SunOutput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::NewProp_SunOutput = { "SunOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeatherSystemMaster_eventUpdateSunTimeLine_Parms, SunOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::NewProp_SunOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe6\x98\xbc\xe5\xa4\x9c\xe6\x9b\xb4\xe6\x9b\xbf\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x98\xbc\xe5\xa4\x9c\xe6\x9b\xb4\xe6\x9b\xbf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherSystemMaster, nullptr, "UpdateSunTimeLine", nullptr, nullptr, sizeof(WeatherSystemMaster_eventUpdateSunTimeLine_Parms), Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeatherSystemMaster_NoRegister()
	{
		return AWeatherSystemMaster::StaticClass();
	}
	struct Z_Construct_UClass_AWeatherSystemMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectionalLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkyLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkyAtmosphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricCloud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumetricCloud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExponentialHeightFog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExponentialHeightFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkySphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkySphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RainFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnowFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RainAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThunderAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThunderAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnowAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BirdsAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BirdsAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CicadaAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CicadaAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnowIsComing_MetaData[];
#endif
		static void NewProp_bSnowIsComing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnowIsComing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRainIsComing_MetaData[];
#endif
		static void NewProp_bRainIsComing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRainIsComing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNight_MetaData[];
#endif
		static void NewProp_bIsNight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeatherRandomTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeatherRandomTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysRain_MetaData[];
#endif
		static void NewProp_AlwaysRain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysRain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysSnow_MetaData[];
#endif
		static void NewProp_AlwaysSnow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysSnow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysSunny_MetaData[];
#endif
		static void NewProp_AlwaysSunny_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysSunny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysDayTime_MetaData[];
#endif
		static void NewProp_AlwaysDayTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysDayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysNight_MetaData[];
#endif
		static void NewProp_AlwaysNight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlwaysNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DarkClouds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DarkClouds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSnowFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSnowFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowBlendMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnowBlendMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowColorOfDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnowColorOfDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowColorOfNight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnowColorOfNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainColorOfDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RainColorOfDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainColorOfNight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RainColorOfNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRainFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRainFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRainFogFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRainFogFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainDropsBlendMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RainDropsBlendMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetWetRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GetWetRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetWetSpecular_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GetWetSpecular;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThunderWaitingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThunderWaitingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThunderMinVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThunderMinVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThunderMaxVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThunderMaxVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunIntensityOfSunny_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunIntensityOfSunny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunIntensityOfRainOrSnow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunIntensityOfRainOrSnow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunTemperatureOfDaytime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunTemperatureOfDaytime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunTemperatureOfNight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunTemperatureOfNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensityOfSunny_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensityOfSunny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensityOfRainOrSnow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensityOfRainOrSnow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloffOfSunny_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloffOfSunny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloffOfRainOrSnow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloffOfRainOrSnow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSpeedOfSnowOrRain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindSpeedOfSnowOrRain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSpeedOfSunny_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindSpeedOfSunny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindWeightOfSnowOrRain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindWeightOfSnowOrRain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindWeightOfSunny_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindWeightOfSunny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLightIntensityOfDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkyLightIntensityOfDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLightIntensityOfNight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkyLightIntensityOfNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNightTimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IsNightTimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunTimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SunTimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowOrRainFallingTimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnowOrRainFallingTimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainFallingTimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RainFallingTimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowFallingTimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnowFallingTimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetWetTimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GetWetTimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrozenTimeLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrozenTimeLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNightCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IsNightCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunAngleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SunAngleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowOrRainFallingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnowOrRainFallingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainFallingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RainFallingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowFallingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnowFallingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetWetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GetWetCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrozenCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrozenCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeatherSystemMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeatherSystemMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeatherSystemMaster_UpdateFrozenTimeLine, "UpdateFrozenTimeLine" }, // 1220581373
		{ &Z_Construct_UFunction_AWeatherSystemMaster_UpdateGetWetTimeLine, "UpdateGetWetTimeLine" }, // 335577002
		{ &Z_Construct_UFunction_AWeatherSystemMaster_UpdateIsNightTimeLine, "UpdateIsNightTimeLine" }, // 965451139
		{ &Z_Construct_UFunction_AWeatherSystemMaster_UpdateRainFallingTimeLine, "UpdateRainFallingTimeLine" }, // 793991042
		{ &Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowFallingTimeLine, "UpdateSnowFallingTimeLine" }, // 4262373914
		{ &Z_Construct_UFunction_AWeatherSystemMaster_UpdateSnowOrRainFallingTimeLine, "UpdateSnowOrRainFallingTimeLine" }, // 3415218839
		{ &Z_Construct_UFunction_AWeatherSystemMaster_UpdateSunTimeLine, "UpdateSunTimeLine" }, // 1119820159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeatherSystemMaster.h" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DirectionalLight_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "// \xe5\xa4\xaa\xe9\x98\xb3\xe5\x85\x89\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe5\xa4\xaa\xe9\x98\xb3\xe5\x85\x89" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DirectionalLight = { "DirectionalLight", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, DirectionalLight), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DirectionalLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DirectionalLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLight_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "// \xe5\xa4\xa9\xe7\xa9\xba\xe5\x85\x89\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe5\xa4\xa9\xe7\xa9\xba\xe5\x85\x89" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLight = { "SkyLight", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SkyLight), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyAtmosphere_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "// \xe5\xa4\xa9\xe7\xa9\xba\xe5\xa4\xa7\xe6\xb0\x94\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe5\xa4\xa9\xe7\xa9\xba\xe5\xa4\xa7\xe6\xb0\x94" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyAtmosphere = { "SkyAtmosphere", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SkyAtmosphere), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyAtmosphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_PostProcessComp_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "// \xe5\x90\x8e\xe5\xa4\x84\xe7\x90\x86\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe5\x90\x8e\xe5\xa4\x84\xe7\x90\x86" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_PostProcessComp = { "PostProcessComp", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, PostProcessComp), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_PostProcessComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_PostProcessComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_VolumetricCloud_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "// \xe4\xbd\x93\xe7\xa7\xaf\xe4\xba\x91\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe4\xbd\x93\xe7\xa7\xaf\xe4\xba\x91" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_VolumetricCloud = { "VolumetricCloud", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, VolumetricCloud), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_VolumetricCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_VolumetricCloud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ExponentialHeightFog_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "// \xe9\xab\x98\xe5\xba\xa6\xe9\x9b\xbe\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe9\xab\x98\xe5\xba\xa6\xe9\x9b\xbe" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ExponentialHeightFog = { "ExponentialHeightFog", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, ExponentialHeightFog), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ExponentialHeightFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ExponentialHeightFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkySphere_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe5\xa4\xa9\xe7\xa9\xba\xe7\x90\x83\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe5\xa4\xa9\xe7\xa9\xba\xe7\x90\x83" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkySphere = { "SkySphere", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SkySphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkySphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkySphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFX_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe7\xb2\x92\xe5\xad\x90\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe7\xb2\x92\xe5\xad\x90" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFX = { "RainFX", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, RainFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFX_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFX = { "SnowFX", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowFX), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainAudio_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe9\x9f\xb3\xe6\x95\x88\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe6\x95\x88" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainAudio = { "RainAudio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, RainAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderAudio_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderAudio = { "ThunderAudio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, ThunderAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowAudio_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowAudio = { "SnowAudio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_BirdsAudio_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_BirdsAudio = { "BirdsAudio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, BirdsAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_BirdsAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_BirdsAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindAudio_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindAudio = { "WindAudio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, WindAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_CicadaAudio_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_CicadaAudio = { "CicadaAudio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, CicadaAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_CicadaAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_CicadaAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bSnowIsComing_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x8b\xe9\x9b\xaa\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x8b\xe9\x9b\xaa\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bSnowIsComing_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->bSnowIsComing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bSnowIsComing = { "bSnowIsComing", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bSnowIsComing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bSnowIsComing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bSnowIsComing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bRainIsComing_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe8\xae\xb0\xe5\xbd\x95\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bRainIsComing_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->bRainIsComing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bRainIsComing = { "bRainIsComing", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bRainIsComing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bRainIsComing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bRainIsComing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bIsNight_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe8\xae\xb0\xe5\xbd\x95\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\xa4\x9c\xe6\x99\x9a\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe8\xae\xb0\xe5\xbd\x95\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe5\xa4\x9c\xe6\x99\x9a" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bIsNight_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->bIsNight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bIsNight = { "bIsNight", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bIsNight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bIsNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bIsNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WeatherRandomTime_MetaData[] = {
		{ "Category", "WeatherSystem | Core" },
		{ "Comment", "/*Randomly switch weather interval (seconds)\nThe first random weather is one second after the start of the game\n\xe9\x9a\x8f\xe6\x9c\xba\xe5\x88\x87\xe6\x8d\xa2\xe5\xa4\xa9\xe6\xb0\x94\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\n\xe7\xac\xac\xe4\xb8\x80\xe6\xac\xa1\xe9\x9a\x8f\xe6\x9c\xba\xe5\xa4\xa9\xe6\xb0\x94\xe6\x98\xaf\xe6\xb8\xb8\xe6\x88\x8f\xe5\xbc\x80\xe5\xa7\x8b\xe5\x90\x8e\xe4\xb8\x80\xe7\xa7\x92*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Randomly switch weather interval (seconds)\nThe first random weather is one second after the start of the game\n\xe9\x9a\x8f\xe6\x9c\xba\xe5\x88\x87\xe6\x8d\xa2\xe5\xa4\xa9\xe6\xb0\x94\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\n\xe7\xac\xac\xe4\xb8\x80\xe6\xac\xa1\xe9\x9a\x8f\xe6\x9c\xba\xe5\xa4\xa9\xe6\xb0\x94\xe6\x98\xaf\xe6\xb8\xb8\xe6\x88\x8f\xe5\xbc\x80\xe5\xa7\x8b\xe5\x90\x8e\xe4\xb8\x80\xe7\xa7\x92" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WeatherRandomTime = { "WeatherRandomTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, WeatherRandomTime), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WeatherRandomTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WeatherRandomTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysRain_MetaData[] = {
		{ "Category", "WeatherSystem | Core" },
		{ "Comment", "/*If enabled will keep raining\nWhen AlwaysRain and AlwaysSnow are turned on at the same time, it is sleet weather\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe4\xb8\x8b\xe9\x9b\xa8\n\xe5\xbd\x93""AlwaysRain\xe8\xb7\x9f""AlwaysSnow\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xe6\x98\xaf\xe9\x9b\xa8\xe5\xa4\xb9\xe9\x9b\xaa\xe7\x9a\x84\xe5\xa4\xa9\xe6\xb0\x94*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "If enabled will keep raining\nWhen AlwaysRain and AlwaysSnow are turned on at the same time, it is sleet weather\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe4\xb8\x8b\xe9\x9b\xa8\n\xe5\xbd\x93""AlwaysRain\xe8\xb7\x9f""AlwaysSnow\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xe6\x98\xaf\xe9\x9b\xa8\xe5\xa4\xb9\xe9\x9b\xaa\xe7\x9a\x84\xe5\xa4\xa9\xe6\xb0\x94" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysRain_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->AlwaysRain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysRain = { "AlwaysRain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysRain_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysRain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysRain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSnow_MetaData[] = {
		{ "Category", "WeatherSystem | Core" },
		{ "Comment", "/*If enabled will keep snowing\nWhen AlwaysRain and AlwaysSnow are turned on at the same time, it is sleet weather\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe4\xb8\x8b\xe9\x9b\xaa\n\xe5\xbd\x93""AlwaysRain\xe8\xb7\x9f""AlwaysSnow\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xe6\x98\xaf\xe9\x9b\xa8\xe5\xa4\xb9\xe9\x9b\xaa\xe7\x9a\x84\xe5\xa4\xa9\xe6\xb0\x94*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "If enabled will keep snowing\nWhen AlwaysRain and AlwaysSnow are turned on at the same time, it is sleet weather\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe4\xb8\x8b\xe9\x9b\xaa\n\xe5\xbd\x93""AlwaysRain\xe8\xb7\x9f""AlwaysSnow\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6\xe6\x98\xaf\xe9\x9b\xa8\xe5\xa4\xb9\xe9\x9b\xaa\xe7\x9a\x84\xe5\xa4\xa9\xe6\xb0\x94" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSnow_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->AlwaysSnow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSnow = { "AlwaysSnow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSnow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSnow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSnow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSunny_MetaData[] = {
		{ "Category", "WeatherSystem | Core" },
		{ "Comment", "/*If enabled will keep sunny\nWhen AlwaysRain, AlwaysSnow, and AlwaysSunny are turned on at the same time, AlwaysSunny does not take effect\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe6\x99\xb4\xe5\xa4\xa9\n\xe5\xbd\x93""AlwaysRain\xe8\xb7\x9f""AlwaysSnow\xe8\xb7\x9f""AlwaysSunny\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6""AlwaysSunny\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "If enabled will keep sunny\nWhen AlwaysRain, AlwaysSnow, and AlwaysSunny are turned on at the same time, AlwaysSunny does not take effect\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe6\x99\xb4\xe5\xa4\xa9\n\xe5\xbd\x93""AlwaysRain\xe8\xb7\x9f""AlwaysSnow\xe8\xb7\x9f""AlwaysSunny\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf\xe6\x97\xb6""AlwaysSunny\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSunny_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->AlwaysSunny = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSunny = { "AlwaysSunny", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSunny_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSunny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSunny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysDayTime_MetaData[] = {
		{ "Category", "WeatherSystem | Core" },
		{ "Comment", "/*If enabled will keep Daytime,No day-night cycle\nWhen AlwaysDayTime and AlwaysNight are turned on at the same time, AlwaysNight does not take effect\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe7\x99\xbd\xe5\xa4\xa9\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe6\x98\xbc\xe5\xa4\x9c\xe6\x9b\xb4\xe6\x9b\xbf\n\xe5\xbd\x93""AlwaysDayTime\xe8\xb7\x9f""AlwaysNight\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf""AlwaysNight\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "If enabled will keep Daytime,No day-night cycle\nWhen AlwaysDayTime and AlwaysNight are turned on at the same time, AlwaysNight does not take effect\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe7\x99\xbd\xe5\xa4\xa9\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe6\x98\xbc\xe5\xa4\x9c\xe6\x9b\xb4\xe6\x9b\xbf\n\xe5\xbd\x93""AlwaysDayTime\xe8\xb7\x9f""AlwaysNight\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf""AlwaysNight\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysDayTime_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->AlwaysDayTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysDayTime = { "AlwaysDayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysDayTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysDayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysDayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysNight_MetaData[] = {
		{ "Category", "WeatherSystem | Core" },
		{ "Comment", "/*If enabled will keep night, No day-night cycle\nWhen AlwaysDayTime and AlwaysNight are turned on at the same time, AlwaysNight does not take effect\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe9\xbb\x91\xe5\xa4\x9c\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe6\x98\xbc\xe5\xa4\x9c\xe6\x9b\xb4\xe6\x9b\xbf\n\xe5\xbd\x93""AlwaysDayTime\xe8\xb7\x9f""AlwaysNight\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf""AlwaysNight\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "If enabled will keep night, No day-night cycle\nWhen AlwaysDayTime and AlwaysNight are turned on at the same time, AlwaysNight does not take effect\n\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe5\xb0\x86\xe4\xb8\x80\xe7\x9b\xb4\xe9\xbb\x91\xe5\xa4\x9c\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe6\x98\xbc\xe5\xa4\x9c\xe6\x9b\xb4\xe6\x9b\xbf\n\xe5\xbd\x93""AlwaysDayTime\xe8\xb7\x9f""AlwaysNight\xe5\x90\x8c\xe6\x97\xb6\xe5\xbc\x80\xe5\x90\xaf""AlwaysNight\xe4\xb8\x8d\xe7\x94\x9f\xe6\x95\x88" },
	};
#endif
	void Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysNight_SetBit(void* Obj)
	{
		((AWeatherSystemMaster*)Obj)->AlwaysNight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysNight = { "AlwaysNight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeatherSystemMaster), &Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysNight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DarkClouds_MetaData[] = {
		{ "Category", "WeatherSystem | Core" },
		{ "Comment", "/*The color of dark clouds when it rains or snows\nIt will transition from the color of SnowColorOfDay to this color when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe5\xbd\x93\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe4\xb9\x8c\xe4\xba\x91\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSnowColorOfDay\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The color of dark clouds when it rains or snows\nIt will transition from the color of SnowColorOfDay to this color when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe5\xbd\x93\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe4\xb9\x8c\xe4\xba\x91\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSnowColorOfDay\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DarkClouds = { "DarkClouds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, DarkClouds), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DarkClouds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DarkClouds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxSnowFalling_MetaData[] = {
		{ "Category", "WeatherSystem | Snow" },
		{ "Comment", "/*Maximum number when it snows\nIt will transition from zero to this value when it enters the snowing state, and transition to 0 when the snow stops.\nThe time of this process is determined by the value of Time in SnowFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xaa\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xaa\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""0\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadSnowFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Maximum number when it snows\nIt will transition from zero to this value when it enters the snowing state, and transition to 0 when the snow stops.\nThe time of this process is determined by the value of Time in SnowFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xaa\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xaa\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""0\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadSnowFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxSnowFalling = { "MaxSnowFalling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, MaxSnowFalling), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxSnowFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxSnowFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowBlendMax_MetaData[] = {
		{ "Category", "WeatherSystem | Snow" },
		{ "Comment", "/*Maximum snow cover when it snows\nWhen it enters the snowing state, it will transition from 3 to this value, and transition to 3 when the snow stops.\nThe time of this process is determined by the value of Time in Frozen in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe7\xa7\xaf\xe9\x9b\xaa\xe8\xa6\x86\xe7\x9b\x96\xe7\x8e\x87\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xaa\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e""3\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xaa\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""3\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad""Frozen\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Maximum snow cover when it snows\nWhen it enters the snowing state, it will transition from 3 to this value, and transition to 3 when the snow stops.\nThe time of this process is determined by the value of Time in Frozen in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe7\xa7\xaf\xe9\x9b\xaa\xe8\xa6\x86\xe7\x9b\x96\xe7\x8e\x87\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xaa\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e""3\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xaa\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""3\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad""Frozen\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowBlendMax = { "SnowBlendMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowBlendMax), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowBlendMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowBlendMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfDay_MetaData[] = {
		{ "Category", "WeatherSystem | Snow" },
		{ "Comment", "/*The color of snow during the day\nWhen entering the daytime state, it will transition from the color of SnowColorOfNight to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve folder (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe9\x9b\xaa\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe7\x99\xbd\xe5\xa4\xa9\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eSnowColorOfNight\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The color of snow during the day\nWhen entering the daytime state, it will transition from the color of SnowColorOfNight to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve folder (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe9\x9b\xaa\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe7\x99\xbd\xe5\xa4\xa9\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eSnowColorOfNight\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfDay = { "SnowColorOfDay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowColorOfDay), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfNight_MetaData[] = {
		{ "Category", "WeatherSystem | Snow" },
		{ "Comment", "/*Snow color at night\nWhen entering the night state, it will transition from the color of SnowColorOfDay to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve folder (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe9\x9b\xaa\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe6\x99\x9a\xe4\xb8\x8a\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eSnowColorOfDay\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Snow color at night\nWhen entering the night state, it will transition from the color of SnowColorOfDay to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve folder (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe9\x9b\xaa\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe6\x99\x9a\xe4\xb8\x8a\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eSnowColorOfDay\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfNight = { "SnowColorOfNight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowColorOfNight), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfDay_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*The color of the rain during the day\nWhen entering the daytime state, it will transition from the color of RainColorOfNight to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve file (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe9\x9b\xa8\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe7\x99\xbd\xe5\xa4\xa9\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eRainColorOfNight\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The color of the rain during the day\nWhen entering the daytime state, it will transition from the color of RainColorOfNight to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve file (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe9\x9b\xa8\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe7\x99\xbd\xe5\xa4\xa9\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eRainColorOfNight\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfDay = { "RainColorOfDay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, RainColorOfDay), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfNight_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*Color of rain at night\nWhen entering the night state, it will transition from the color of RainColorOfDay to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve file (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe9\x9b\xa8\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe6\x99\x9a\xe4\xb8\x8a\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eRainColorOfDay\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Color of rain at night\nWhen entering the night state, it will transition from the color of RainColorOfDay to this color\nThe time of this process is determined by the value of Time in IsNightLerp in the Curve file (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe9\x9b\xa8\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe6\x99\x9a\xe4\xb8\x8a\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8eRainColorOfDay\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe9\xa2\x9c\xe8\x89\xb2\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadIsNightLerp\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfNight = { "RainColorOfNight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, RainColorOfNight), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFalling_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*Maximum number when it rains\nWhen it is raining, it will transition from zero to this value, and transition to zero when the rain stops.\nThe time of this process is determined by the value of Time in RainFalling in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe9\x9b\xb6\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Maximum number when it rains\nWhen it is raining, it will transition from zero to this value, and transition to zero when the rain stops.\nThe time of this process is determined by the value of Time in RainFalling in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe9\x9b\xb6\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFalling = { "MaxRainFalling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, MaxRainFalling), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFogFalling_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*Maximum amount of rain and fog when it rains\nWhen it is raining, it will transition from zero to this value, and transition to zero when the rain stops.\nThe time of this process is determined by the value of Time in RainFalling in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe9\x9b\xa8\xe9\x9b\xbe\xe6\x95\xb0\xe9\x87\x8f\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe9\x9b\xb6\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Maximum amount of rain and fog when it rains\nWhen it is raining, it will transition from zero to this value, and transition to zero when the rain stops.\nThe time of this process is determined by the value of Time in RainFalling in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe9\x9b\xa8\xe9\x9b\xbe\xe6\x95\xb0\xe9\x87\x8f\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe9\x9b\xb6\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFogFalling = { "MaxRainFogFalling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, MaxRainFogFalling), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFogFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFogFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainDropsBlendMax_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*The intensity of the mixing of the ripples on the water surface when it rains\nWhen it is raining, it will transition from zero to this value, and transition to zero when the rain stops.\nThe time of this process is determined by the value of Time in RainFalling in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe6\xb0\xb4\xe9\x9d\xa2\xe7\x9a\x84\xe6\xb6\x9f\xe6\xbc\xaa\xe6\xb7\xb7\xe5\x90\x88\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe9\x9b\xb6\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The intensity of the mixing of the ripples on the water surface when it rains\nWhen it is raining, it will transition from zero to this value, and transition to zero when the rain stops.\nThe time of this process is determined by the value of Time in RainFalling in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe6\xb0\xb4\xe9\x9d\xa2\xe7\x9a\x84\xe6\xb6\x9f\xe6\xbc\xaa\xe6\xb7\xb7\xe5\x90\x88\xe7\x9a\x84\xe5\xbc\xba\xe5\xba\xa6\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e\xe9\x9b\xb6\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\xef\xbc\x8c\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe9\x9b\xb6\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainDropsBlendMax = { "RainDropsBlendMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, RainDropsBlendMax), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainDropsBlendMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainDropsBlendMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetRoughness_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*The roughness when it rains (current object roughness * GetWetRoughness) reduces the roughness to simulate the effect of getting wet\nThe MF_WeatherBlend function needs to be added to the material, and it will transition from 1 to this value when it enters the raining state\nTransition to 1 after the rain stops. The time of this process is determined by the value of Time in GetWet in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe7\x9a\x84\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6\xef\xbc\x88\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe4\xbd\x93\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6 * GetWetRoughness\xef\xbc\x89\xe9\x99\x8d\xe4\xbd\x8e\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6\xe6\xa8\xa1\xe6\x8b\x9f\xe6\xb7\x8b\xe6\xb9\xbf\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe6\x9d\x90\xe8\xb4\xa8\xe4\xb8\xad\xe6\xb7\xbb\xe5\x8a\xa0MF_WeatherBlend\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e""1\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""1\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadGetWet\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The roughness when it rains (current object roughness * GetWetRoughness) reduces the roughness to simulate the effect of getting wet\nThe MF_WeatherBlend function needs to be added to the material, and it will transition from 1 to this value when it enters the raining state\nTransition to 1 after the rain stops. The time of this process is determined by the value of Time in GetWet in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe7\x9a\x84\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6\xef\xbc\x88\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe4\xbd\x93\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6 * GetWetRoughness\xef\xbc\x89\xe9\x99\x8d\xe4\xbd\x8e\xe7\xb2\x97\xe7\xb3\x99\xe5\xba\xa6\xe6\xa8\xa1\xe6\x8b\x9f\xe6\xb7\x8b\xe6\xb9\xbf\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe6\x9d\x90\xe8\xb4\xa8\xe4\xb8\xad\xe6\xb7\xbb\xe5\x8a\xa0MF_WeatherBlend\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e""1\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""1\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadGetWet\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetRoughness = { "GetWetRoughness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, GetWetRoughness), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetSpecular_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*The specular intensity when it rains (the current object specular intensity * GetWetSpecular) to enhance the effect of the specular simulating wet\nNeed to add the MF_WeatherBlend function to the material\nWhen it enters the rainy state, it will transition from 1 to this value\nTransition to 1 after the rain stops\nThe time of this process is determined by the value of Time in GetWet in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe7\x9a\x84\xe9\xab\x98\xe5\x85\x89\xe5\xbc\xba\xe5\xba\xa6\xef\xbc\x88\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe4\xbd\x93\xe9\xab\x98\xe5\x85\x89\xe5\xbc\xba\xe5\xba\xa6 * GetWetSpecular\xef\xbc\x89\xe5\x8a\xa0\xe5\xbc\xba\xe9\xab\x98\xe5\x85\x89\xe6\xa8\xa1\xe6\x8b\x9f\xe6\xb7\x8b\xe6\xb9\xbf\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe6\x9d\x90\xe8\xb4\xa8\xe4\xb8\xad\xe6\xb7\xbb\xe5\x8a\xa0MF_WeatherBlend\xe5\x87\xbd\xe6\x95\xb0\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e""1\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""1\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadGetWet\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The specular intensity when it rains (the current object specular intensity * GetWetSpecular) to enhance the effect of the specular simulating wet\nNeed to add the MF_WeatherBlend function to the material\nWhen it enters the rainy state, it will transition from 1 to this value\nTransition to 1 after the rain stops\nThe time of this process is determined by the value of Time in GetWet in the Curve file (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe7\x9a\x84\xe9\xab\x98\xe5\x85\x89\xe5\xbc\xba\xe5\xba\xa6\xef\xbc\x88\xe5\xbd\x93\xe5\x89\x8d\xe7\x89\xa9\xe4\xbd\x93\xe9\xab\x98\xe5\x85\x89\xe5\xbc\xba\xe5\xba\xa6 * GetWetSpecular\xef\xbc\x89\xe5\x8a\xa0\xe5\xbc\xba\xe9\xab\x98\xe5\x85\x89\xe6\xa8\xa1\xe6\x8b\x9f\xe6\xb7\x8b\xe6\xb9\xbf\xe7\x9a\x84\xe6\x95\x88\xe6\x9e\x9c\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8\xe6\x9d\x90\xe8\xb4\xa8\xe4\xb8\xad\xe6\xb7\xbb\xe5\x8a\xa0MF_WeatherBlend\xe5\x87\xbd\xe6\x95\xb0\n\xe5\xbd\x93\xe8\xbf\x9b\xe5\x85\xa5\xe4\xb8\x8b\xe9\x9b\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\x90\x8e\xe4\xbc\x9a\xe4\xbb\x8e""1\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe9\x9b\xa8\xe5\x81\x9c\xe5\x90\x8e\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0""1\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xadGetWet\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetSpecular = { "GetWetSpecular", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, GetWetSpecular), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetSpecular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetSpecular_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderWaitingTime_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*Interval of random thunder sound when it is raining (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x92\xad\xe6\x94\xbe\xe9\x9b\xb7\xe5\xa3\xb0\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Interval of random thunder sound when it is raining (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x92\xad\xe6\x94\xbe\xe9\x9b\xb7\xe5\xa3\xb0\xe7\x9a\x84\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderWaitingTime = { "ThunderWaitingTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, ThunderWaitingTime), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderWaitingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderWaitingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMinVolume_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*The minimum volume of thunder to play randomly when it is raining\nRandomly select and play at the middle value of ThunderMinVolume and ThunderMaxVolume\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x92\xad\xe6\x94\xbe\xe9\x9b\xb7\xe5\xa3\xb0\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x9f\xb3\xe9\x87\x8f\n\xe5\x9c\xa8ThunderMinVolume\xe8\xb7\x9fThunderMaxVolume\xe7\x9a\x84\xe4\xb8\xad\xe9\x97\xb4\xe5\x80\xbc\xe9\x9a\x8f\xe6\x9c\xba\xe5\x8f\x96\xe5\x80\xbc\xe6\x92\xad\xe6\x94\xbe*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The minimum volume of thunder to play randomly when it is raining\nRandomly select and play at the middle value of ThunderMinVolume and ThunderMaxVolume\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x92\xad\xe6\x94\xbe\xe9\x9b\xb7\xe5\xa3\xb0\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x9f\xb3\xe9\x87\x8f\n\xe5\x9c\xa8ThunderMinVolume\xe8\xb7\x9fThunderMaxVolume\xe7\x9a\x84\xe4\xb8\xad\xe9\x97\xb4\xe5\x80\xbc\xe9\x9a\x8f\xe6\x9c\xba\xe5\x8f\x96\xe5\x80\xbc\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMinVolume = { "ThunderMinVolume", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, ThunderMinVolume), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMinVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMaxVolume_MetaData[] = {
		{ "Category", "WeatherSystem | Rain" },
		{ "Comment", "/*The maximum volume of random thunder when it is raining\nRandomly select and play at the middle value of ThunderMinVolume and ThunderMaxVolume\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x92\xad\xe6\x94\xbe\xe9\x9b\xb7\xe5\xa3\xb0\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe9\x9f\xb3\xe9\x87\x8f\n\xe5\x9c\xa8ThunderMinVolume\xe8\xb7\x9fThunderMaxVolume\xe7\x9a\x84\xe4\xb8\xad\xe9\x97\xb4\xe5\x80\xbc\xe9\x9a\x8f\xe6\x9c\xba\xe5\x8f\x96\xe5\x80\xbc\xe6\x92\xad\xe6\x94\xbe*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The maximum volume of random thunder when it is raining\nRandomly select and play at the middle value of ThunderMinVolume and ThunderMaxVolume\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x92\xad\xe6\x94\xbe\xe9\x9b\xb7\xe5\xa3\xb0\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe9\x9f\xb3\xe9\x87\x8f\n\xe5\x9c\xa8ThunderMinVolume\xe8\xb7\x9fThunderMaxVolume\xe7\x9a\x84\xe4\xb8\xad\xe9\x97\xb4\xe5\x80\xbc\xe9\x9a\x8f\xe6\x9c\xba\xe5\x8f\x96\xe5\x80\xbc\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMaxVolume = { "ThunderMaxVolume", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, ThunderMaxVolume), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMaxVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMaxVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfSunny_MetaData[] = {
		{ "Category", "WeatherSystem | Sun" },
		{ "Comment", "/*The brightness of the sun on a sunny day\nIt will transition from the value of SunIntensityOfRainOrSnow to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe5\xa4\xaa\xe9\x98\xb3\xe5\x85\x89\xe4\xba\xae\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSunIntensityOfRainOrSnow\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The brightness of the sun on a sunny day\nIt will transition from the value of SunIntensityOfRainOrSnow to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe5\xa4\xaa\xe9\x98\xb3\xe5\x85\x89\xe4\xba\xae\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSunIntensityOfRainOrSnow\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfSunny = { "SunIntensityOfSunny", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SunIntensityOfSunny), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfSunny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfSunny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfRainOrSnow_MetaData[] = {
		{ "Category", "WeatherSystem | Sun" },
		{ "Comment", "/*The brightness of the sun when it rains or when it rains\nFrom sunny days to rain or snow, the value of SunIntensityOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe5\xa4\xaa\xe9\x98\xb3\xe5\x85\x89\xe7\x9a\x84\xe4\xba\xae\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eSunIntensityOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The brightness of the sun when it rains or when it rains\nFrom sunny days to rain or snow, the value of SunIntensityOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x97\xb6\xe5\xa4\xaa\xe9\x98\xb3\xe5\x85\x89\xe7\x9a\x84\xe4\xba\xae\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eSunIntensityOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfRainOrSnow = { "SunIntensityOfRainOrSnow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SunIntensityOfRainOrSnow), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfRainOrSnow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfRainOrSnow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfDaytime_MetaData[] = {
		{ "Category", "WeatherSystem | Sun" },
		{ "Comment", "/*Color temperature during daytime and sunny day\nIt will transition from the value of SunTemperatureOfNight to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe8\xb7\x9f\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe8\x89\xb2\xe6\xb8\xa9\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSunTemperatureOfNight\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Color temperature during daytime and sunny day\nIt will transition from the value of SunTemperatureOfNight to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe8\xb7\x9f\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe8\x89\xb2\xe6\xb8\xa9\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSunTemperatureOfNight\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfDaytime = { "SunTemperatureOfDaytime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SunTemperatureOfDaytime), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfDaytime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfDaytime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfNight_MetaData[] = {
		{ "Category", "WeatherSystem | Sun" },
		{ "Comment", "/*The color temperature at night and in rainy and snowy days\nFrom sunny days to rain or snow, the value of SunTemperatureOfDaytime will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe8\xb7\x9f\xe9\x9b\xa8\xe9\x9b\xaa\xe5\xa4\xa9\xe7\x9a\x84\xe8\x89\xb2\xe6\xb8\xa9\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eSunTemperatureOfDaytime\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "The color temperature at night and in rainy and snowy days\nFrom sunny days to rain or snow, the value of SunTemperatureOfDaytime will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe8\xb7\x9f\xe9\x9b\xa8\xe9\x9b\xaa\xe5\xa4\xa9\xe7\x9a\x84\xe8\x89\xb2\xe6\xb8\xa9\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eSunTemperatureOfDaytime\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfNight = { "SunTemperatureOfNight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SunTemperatureOfNight), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfSunny_MetaData[] = {
		{ "Category", "WeatherSystem | Fog" },
		{ "Comment", "/*Fog intensity on a sunny day\nIt will transition from the value of FogDensityOfRainOrSnow to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\x9b\xbe\xe5\xbc\xba\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8e""FogDensityOfRainOrSnow\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Fog intensity on a sunny day\nIt will transition from the value of FogDensityOfRainOrSnow to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\x9b\xbe\xe5\xbc\xba\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8e""FogDensityOfRainOrSnow\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfSunny = { "FogDensityOfSunny", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, FogDensityOfSunny), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfSunny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfSunny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfRainOrSnow_MetaData[] = {
		{ "Category", "WeatherSystem | Fog" },
		{ "Comment", "/*Fog intensity in rainy or snowy days\nFrom sunny days to rain or snow, the value of FogDensityOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe9\x9b\xa8\xe5\xa4\xa9\xe6\x88\x96\xe9\x9b\xaa\xe5\xa4\xa9\xe7\x9a\x84\xe9\x9b\xbe\xe5\xbc\xba\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8e""FogDensityOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Fog intensity in rainy or snowy days\nFrom sunny days to rain or snow, the value of FogDensityOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe9\x9b\xa8\xe5\xa4\xa9\xe6\x88\x96\xe9\x9b\xaa\xe5\xa4\xa9\xe7\x9a\x84\xe9\x9b\xbe\xe5\xbc\xba\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8e""FogDensityOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfRainOrSnow = { "FogDensityOfRainOrSnow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, FogDensityOfRainOrSnow), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfRainOrSnow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfRainOrSnow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfSunny_MetaData[] = {
		{ "Category", "WeatherSystem | Fog" },
		{ "Comment", "/*Attenuation intensity of fog on a sunny day\nIt will transition from the value of FogHeightFalloffOfRainOrSnow to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\x9b\xbe\xe8\xa1\xb0\xe5\x87\x8f\xe5\xbc\xba\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8e""FogHeightFalloffOfRainOrSnow\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Attenuation intensity of fog on a sunny day\nIt will transition from the value of FogHeightFalloffOfRainOrSnow to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\x9b\xbe\xe8\xa1\xb0\xe5\x87\x8f\xe5\xbc\xba\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8e""FogHeightFalloffOfRainOrSnow\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfSunny = { "FogHeightFalloffOfSunny", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, FogHeightFalloffOfSunny), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfSunny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfSunny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfRainOrSnow_MetaData[] = {
		{ "Category", "WeatherSystem | Fog" },
		{ "Comment", "/*Fog attenuation intensity when it rains or snows\nFrom sunny to rain or snow, the value of FogHeightFalloffOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe9\x9b\xbe\xe8\xa1\xb0\xe5\x87\x8f\xe5\xbc\xba\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8e""FogHeightFalloffOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Fog attenuation intensity when it rains or snows\nFrom sunny to rain or snow, the value of FogHeightFalloffOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe9\x9b\xbe\xe8\xa1\xb0\xe5\x87\x8f\xe5\xbc\xba\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8e""FogHeightFalloffOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfRainOrSnow = { "FogHeightFalloffOfRainOrSnow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, FogHeightFalloffOfRainOrSnow), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfRainOrSnow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfRainOrSnow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSnowOrRain_MetaData[] = {
		{ "Category", "WeatherSystem | Wind" },
		{ "Comment", "/*Wind speed when it rains or snows\nFrom a sunny day to rain or snow, it will transition from the value of WindSpeedOfSunny to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe7\x9a\x84\xe9\xa3\x8e\xe9\x80\x9f\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eWindSpeedOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Wind speed when it rains or snows\nFrom a sunny day to rain or snow, it will transition from the value of WindSpeedOfSunny to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe7\x9a\x84\xe9\xa3\x8e\xe9\x80\x9f\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eWindSpeedOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSnowOrRain = { "WindSpeedOfSnowOrRain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, WindSpeedOfSnowOrRain), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSnowOrRain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSnowOrRain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSunny_MetaData[] = {
		{ "Category", "WeatherSystem | Wind" },
		{ "Comment", "/*Wind speed on a sunny day\nIt will transition from the value of WindSpeedOfSnowOrRain to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\xa3\x8e\xe9\x80\x9f\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eWindSpeedOfSnowOrRain\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Wind speed on a sunny day\nIt will transition from the value of WindSpeedOfSnowOrRain to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\xa3\x8e\xe9\x80\x9f\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eWindSpeedOfSnowOrRain\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSunny = { "WindSpeedOfSunny", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, WindSpeedOfSunny), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSunny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSunny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSnowOrRain_MetaData[] = {
		{ "Category", "WeatherSystem | Wind" },
		{ "Comment", "/*Wind intensity when it rains or snows\nFrom a sunny day to rain or snow, the value of WindWeightOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe9\xa3\x8e\xe5\xbc\xba\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eWindWeightOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Wind intensity when it rains or snows\nFrom a sunny day to rain or snow, the value of WindWeightOfSunny will transition to this value\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe6\x97\xb6\xe9\xa3\x8e\xe5\xbc\xba\xe5\xba\xa6\n\xe6\x99\xb4\xe5\xa4\xa9\xe5\x88\xb0\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe4\xbc\x9a\xe4\xbb\x8eWindWeightOfSunny\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSnowOrRain = { "WindWeightOfSnowOrRain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, WindWeightOfSnowOrRain), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSnowOrRain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSnowOrRain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSunny_MetaData[] = {
		{ "Category", "WeatherSystem | Wind" },
		{ "Comment", "/*Wind intensity on a sunny day\nIt will transition from the value of WindWeightOfSnowOrRain to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\xa3\x8e\xe5\xbc\xba\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eWindWeightOfSnowOrRain\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Wind intensity on a sunny day\nIt will transition from the value of WindWeightOfSnowOrRain to this value when it rains or snows to a sunny day\nThe time of this process is determined by the value of Time in SnowOrRainFalling in the Curve folder (seconds)\n\xe6\x99\xb4\xe5\xa4\xa9\xe7\x9a\x84\xe9\xa3\x8e\xe5\xbc\xba\xe5\xba\xa6\n\xe4\xb8\x8b\xe9\x9b\xa8\xe6\x88\x96\xe4\xb8\x8b\xe9\x9b\xaa\xe5\x88\xb0\xe6\x99\xb4\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eWindWeightOfSnowOrRain\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSnowOrRainFalling\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSunny = { "WindWeightOfSunny", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, WindWeightOfSunny), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSunny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSunny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfDay_MetaData[] = {
		{ "Category", "WeatherSystem | SkyLight" },
		{ "Comment", "/*Sky brightness during the day\nFrom day to night, it will transition from the value of SkyLightIntensityOfNight to this value\nThe time of this process is determined by the value of Time in SunAngle in the Curve folder (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe5\xa4\xa9\xe7\xa9\xba\xe5\x85\x89\xe4\xba\xae\xe5\xba\xa6\n\xe7\x99\xbd\xe5\xa4\xa9\xe5\x88\xb0\xe6\x99\x9a\xe4\xb8\x8a\xe4\xbc\x9a\xe4\xbb\x8eSkyLightIntensityOfNight\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSunAngle\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Sky brightness during the day\nFrom day to night, it will transition from the value of SkyLightIntensityOfNight to this value\nThe time of this process is determined by the value of Time in SunAngle in the Curve folder (seconds)\n\xe7\x99\xbd\xe5\xa4\xa9\xe5\xa4\xa9\xe7\xa9\xba\xe5\x85\x89\xe4\xba\xae\xe5\xba\xa6\n\xe7\x99\xbd\xe5\xa4\xa9\xe5\x88\xb0\xe6\x99\x9a\xe4\xb8\x8a\xe4\xbc\x9a\xe4\xbb\x8eSkyLightIntensityOfNight\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSunAngle\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfDay = { "SkyLightIntensityOfDay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SkyLightIntensityOfDay), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfNight_MetaData[] = {
		{ "Category", "WeatherSystem | SkyLight" },
		{ "Comment", "/*Night sky brightness\nIt will transition from the value of SkyLightIntensityOfDay to this value from night to day\nThe time of this process is determined by the value of Time in SunAngle in the Curve folder (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe5\xa4\xa9\xe7\xa9\xba\xe5\x85\x89\xe4\xba\xae\xe5\xba\xa6\n\xe6\x99\x9a\xe4\xb8\x8a\xe5\x88\xb0\xe7\x99\xbd\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSkyLightIntensityOfDay\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSunAngle\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89*/" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "Night sky brightness\nIt will transition from the value of SkyLightIntensityOfDay to this value from night to day\nThe time of this process is determined by the value of Time in SunAngle in the Curve folder (seconds)\n\xe6\x99\x9a\xe4\xb8\x8a\xe5\xa4\xa9\xe7\xa9\xba\xe5\x85\x89\xe4\xba\xae\xe5\xba\xa6\n\xe6\x99\x9a\xe4\xb8\x8a\xe5\x88\xb0\xe7\x99\xbd\xe5\xa4\xa9\xe4\xbc\x9a\xe4\xbb\x8eSkyLightIntensityOfDay\xe7\x9a\x84\xe5\x80\xbc\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\xb0\xe8\xbf\x99\xe4\xb8\xaa\xe5\x80\xbc\n\xe8\xbf\x99\xe4\xb8\xaa\xe8\xbf\x87\xe7\xa8\x8b\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\xe7\x94\xb1""Curve\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe4\xb8\xadSunAngle\xe9\x87\x8cTime\xe7\x9a\x84\xe5\x80\xbc\xe5\x86\xb3\xe5\xae\x9a\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfNight = { "SkyLightIntensityOfNight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SkyLightIntensityOfNight), METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfNight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightTimeLine_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe6\x97\xb6\xe9\x97\xb4\xe8\xbd\xb4\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x97\xb4\xe8\xbd\xb4\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightTimeLine = { "IsNightTimeLine", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, IsNightTimeLine), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightTimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightTimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTimeLine_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTimeLine = { "SunTimeLine", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SunTimeLine), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingTimeLine_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingTimeLine = { "SnowOrRainFallingTimeLine", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowOrRainFallingTimeLine), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingTimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingTimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingTimeLine_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingTimeLine = { "RainFallingTimeLine", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, RainFallingTimeLine), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingTimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingTimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingTimeLine_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingTimeLine = { "SnowFallingTimeLine", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowFallingTimeLine), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingTimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingTimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetTimeLine_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetTimeLine = { "GetWetTimeLine", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, GetWetTimeLine), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetTimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetTimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenTimeLine_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenTimeLine = { "FrozenTimeLine", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, FrozenTimeLine), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenTimeLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenTimeLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightCurve_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "Comment", "//\xe6\x9b\xb2\xe7\xba\xbf\n" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
		{ "ToolTip", "\xe6\x9b\xb2\xe7\xba\xbf" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightCurve = { "IsNightCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, IsNightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunAngleCurve_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunAngleCurve = { "SunAngleCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SunAngleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunAngleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunAngleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingCurve_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingCurve = { "SnowOrRainFallingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowOrRainFallingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingCurve_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingCurve = { "RainFallingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, RainFallingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingCurve_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingCurve = { "SnowFallingCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, SnowFallingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetCurve_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetCurve = { "GetWetCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, GetWetCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenCurve_MetaData[] = {
		{ "Category", "WeatherSystemMaster" },
		{ "ModuleRelativePath", "Public/WeatherSystemMaster.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenCurve = { "FrozenCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeatherSystemMaster, FrozenCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeatherSystemMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DirectionalLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyAtmosphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_PostProcessComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_VolumetricCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ExponentialHeightFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkySphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_BirdsAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_CicadaAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bSnowIsComing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bRainIsComing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_bIsNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WeatherRandomTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysRain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSnow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysSunny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysDayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_AlwaysNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_DarkClouds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxSnowFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowBlendMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowColorOfNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainColorOfNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_MaxRainFogFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainDropsBlendMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetSpecular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderWaitingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMinVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_ThunderMaxVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfSunny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunIntensityOfRainOrSnow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfDaytime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTemperatureOfNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfSunny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogDensityOfRainOrSnow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfSunny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FogHeightFalloffOfRainOrSnow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSnowOrRain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindSpeedOfSunny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSnowOrRain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_WindWeightOfSunny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SkyLightIntensityOfNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightTimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunTimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingTimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingTimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingTimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetTimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenTimeLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_IsNightCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SunAngleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowOrRainFallingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_RainFallingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_SnowFallingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_GetWetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherSystemMaster_Statics::NewProp_FrozenCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeatherSystemMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeatherSystemMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeatherSystemMaster_Statics::ClassParams = {
		&AWeatherSystemMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeatherSystemMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeatherSystemMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherSystemMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeatherSystemMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeatherSystemMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeatherSystemMaster, 2547004138);
	template<> WEATHERSYSTEM_API UClass* StaticClass<AWeatherSystemMaster>()
	{
		return AWeatherSystemMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeatherSystemMaster(Z_Construct_UClass_AWeatherSystemMaster, &AWeatherSystemMaster::StaticClass, TEXT("/Script/WeatherSystem"), TEXT("AWeatherSystemMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeatherSystemMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
