// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterCoreRuntime/Private/TDM_PlayerSpawningManagmentComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDM_PlayerSpawningManagmentComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ALyraPlayerStart_NoRegister();
LYRAGAME_API UClass* Z_Construct_UClass_ULyraPlayerSpawningManagerComponent();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// End Cross Module References

// Begin Class UTDM_PlayerSpawningManagmentComponent Function OnChoosePlayerStart
struct TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms
{
	AController* Player;
	TArray<ALyraPlayerStart*> PlayerStarts;
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart = FName(TEXT("OnChoosePlayerStart"));
AActor* UTDM_PlayerSpawningManagmentComponent::OnChoosePlayerStart(AController* Player, TArray<ALyraPlayerStart*> const& PlayerStarts)
{
	TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms Parms;
	Parms.Player=Player;
	Parms.PlayerStarts=PlayerStarts;
	ProcessEvent(FindFunctionChecked(NAME_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnChoosePlayerStart" },
		{ "ModuleRelativePath", "Private/TDM_PlayerSpawningManagmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStarts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerStarts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_PlayerStarts_Inner = { "PlayerStarts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALyraPlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_PlayerStarts = { "PlayerStarts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms, PlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStarts_MetaData), NewProp_PlayerStarts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_PlayerStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_PlayerStarts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent, nullptr, "OnChoosePlayerStart", nullptr, nullptr, Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::PropPointers), sizeof(TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(TDM_PlayerSpawningManagmentComponent_eventOnChoosePlayerStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTDM_PlayerSpawningManagmentComponent Function OnChoosePlayerStart

// Begin Class UTDM_PlayerSpawningManagmentComponent
void UTDM_PlayerSpawningManagmentComponent::StaticRegisterNativesUTDM_PlayerSpawningManagmentComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDM_PlayerSpawningManagmentComponent);
UClass* Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_NoRegister()
{
	return UTDM_PlayerSpawningManagmentComponent::StaticClass();
}
struct Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TDM_PlayerSpawningManagmentComponent.h" },
		{ "ModuleRelativePath", "Private/TDM_PlayerSpawningManagmentComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDM_PlayerSpawningManagmentComponent_OnChoosePlayerStart, "OnChoosePlayerStart" }, // 4237799634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDM_PlayerSpawningManagmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULyraPlayerSpawningManagerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_Statics::ClassParams = {
	&UTDM_PlayerSpawningManagmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent()
{
	if (!Z_Registration_Info_UClass_UTDM_PlayerSpawningManagmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDM_PlayerSpawningManagmentComponent.OuterSingleton, Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTDM_PlayerSpawningManagmentComponent.OuterSingleton;
}
template<> SHOOTERCORERUNTIME_API UClass* StaticClass<UTDM_PlayerSpawningManagmentComponent>()
{
	return UTDM_PlayerSpawningManagmentComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTDM_PlayerSpawningManagmentComponent);
UTDM_PlayerSpawningManagmentComponent::~UTDM_PlayerSpawningManagmentComponent() {}
// End Class UTDM_PlayerSpawningManagmentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_LyraDev_UE54_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Private_TDM_PlayerSpawningManagmentComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTDM_PlayerSpawningManagmentComponent, UTDM_PlayerSpawningManagmentComponent::StaticClass, TEXT("UTDM_PlayerSpawningManagmentComponent"), &Z_Registration_Info_UClass_UTDM_PlayerSpawningManagmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDM_PlayerSpawningManagmentComponent), 2797864373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraDev_UE54_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Private_TDM_PlayerSpawningManagmentComponent_h_69188406(TEXT("/Script/ShooterCoreRuntime"),
	Z_CompiledInDeferFile_FID_LyraDev_UE54_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Private_TDM_PlayerSpawningManagmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraDev_UE54_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Private_TDM_PlayerSpawningManagmentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
