// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Building_Escape/DoorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorComponent() {}
// Cross Module References
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_UDoorComponent_NoRegister();
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_UDoorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Building_Escape();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UDoorComponent::StaticRegisterNativesUDoorComponent()
	{
	}
	UClass* Z_Construct_UClass_UDoorComponent_NoRegister()
	{
		return UDoorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDoorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Building_Escape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorComponent.h" },
		{ "ModuleRelativePath", "DoorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_TargetYaw_MetaData[] = {
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_TargetYaw = { "TargetYaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, TargetYaw), METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_TargetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_TargetYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_TriggerVolume_MetaData[] = {
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_TriggerVolume = { "TriggerVolume", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, TriggerVolume), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_TriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_TriggerVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorComponent_Statics::NewProp_ActorToTrigger_MetaData[] = {
		{ "Category", "DoorComponent" },
		{ "ModuleRelativePath", "DoorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorComponent_Statics::NewProp_ActorToTrigger = { "ActorToTrigger", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorComponent, ActorToTrigger), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::NewProp_ActorToTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::NewProp_ActorToTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_TargetYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_TriggerVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorComponent_Statics::NewProp_ActorToTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorComponent_Statics::ClassParams = {
		&UDoorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorComponent, 3493369948);
	template<> BUILDING_ESCAPE_API UClass* StaticClass<UDoorComponent>()
	{
		return UDoorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorComponent(Z_Construct_UClass_UDoorComponent, &UDoorComponent::StaticClass, TEXT("/Script/Building_Escape"), TEXT("UDoorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
