// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeatherSystem/Public/WaterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBase() {}
// Cross Module References
	WEATHERSYSTEM_API UClass* Z_Construct_UClass_AWaterBase_NoRegister();
	WEATHERSYSTEM_API UClass* Z_Construct_UClass_AWaterBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeatherSystem();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void AWaterBase::StaticRegisterNativesAWaterBase()
	{
	}
	UClass* Z_Construct_UClass_AWaterBase_NoRegister()
	{
		return AWaterBase::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaterMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaterBase.h" },
		{ "ModuleRelativePath", "Public/WaterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMaterial_MetaData[] = {
		{ "Category", "WaterBase" },
		{ "ModuleRelativePath", "Public/WaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMaterial = { "WaterMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterBase, WaterMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterComp_MetaData[] = {
		{ "Category", "WaterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterComp = { "WaterComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterBase, WaterComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMesh_MetaData[] = {
		{ "Category", "WaterBase" },
		{ "ModuleRelativePath", "Public/WaterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMesh = { "WaterMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaterBase, WaterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBase_Statics::NewProp_WaterMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWaterBase_Statics::ClassParams = {
		&AWaterBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWaterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWaterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaterBase, 4024656309);
	template<> WEATHERSYSTEM_API UClass* StaticClass<AWaterBase>()
	{
		return AWaterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaterBase(Z_Construct_UClass_AWaterBase, &AWaterBase::StaticClass, TEXT("/Script/WeatherSystem"), TEXT("AWaterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
