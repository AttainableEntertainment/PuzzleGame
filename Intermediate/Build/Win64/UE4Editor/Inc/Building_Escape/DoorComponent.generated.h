// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDING_ESCAPE_DoorComponent_generated_h
#error "DoorComponent.generated.h already included, missing '#pragma once' in DoorComponent.h"
#endif
#define BUILDING_ESCAPE_DoorComponent_generated_h

#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_SPARSE_DATA
#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_RPC_WRAPPERS
#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorComponent(); \
	friend struct Z_Construct_UClass_UDoorComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Building_Escape"), NO_API) \
	DECLARE_SERIALIZER(UDoorComponent)


#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDoorComponent(); \
	friend struct Z_Construct_UClass_UDoorComponent_Statics; \
public: \
	DECLARE_CLASS(UDoorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Building_Escape"), NO_API) \
	DECLARE_SERIALIZER(UDoorComponent)


#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorComponent(UDoorComponent&&); \
	NO_API UDoorComponent(const UDoorComponent&); \
public:


#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorComponent(UDoorComponent&&); \
	NO_API UDoorComponent(const UDoorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorComponent)


#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetYaw() { return STRUCT_OFFSET(UDoorComponent, TargetYaw); } \
	FORCEINLINE static uint32 __PPO__TriggerVolume() { return STRUCT_OFFSET(UDoorComponent, TriggerVolume); } \
	FORCEINLINE static uint32 __PPO__ActorToTrigger() { return STRUCT_OFFSET(UDoorComponent, ActorToTrigger); }


#define Building_Escape_Source_Building_Escape_DoorComponent_h_11_PROLOG
#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_SPARSE_DATA \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_RPC_WRAPPERS \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_INCLASS \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Building_Escape_Source_Building_Escape_DoorComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_SPARSE_DATA \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_INCLASS_NO_PURE_DECLS \
	Building_Escape_Source_Building_Escape_DoorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDING_ESCAPE_API UClass* StaticClass<class UDoorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Building_Escape_Source_Building_Escape_DoorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
