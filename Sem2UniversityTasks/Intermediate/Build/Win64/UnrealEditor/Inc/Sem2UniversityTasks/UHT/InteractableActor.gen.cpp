// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sem2UniversityTasks/InteractableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractableActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_AInteractableActor();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_AInteractableActor_NoRegister();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sem2UniversityTasks();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractableActor *******************************************************
void AInteractableActor::StaticRegisterNativesAInteractableActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractableActor;
UClass* AInteractableActor::GetPrivateStaticClass()
{
	using TClass = AInteractableActor;
	if (!Z_Registration_Info_UClass_AInteractableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractableActor"),
			Z_Registration_Info_UClass_AInteractableActor.InnerSingleton,
			StaticRegisterNativesAInteractableActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AInteractableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractableActor_NoRegister()
{
	return AInteractableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableActor.h" },
		{ "ModuleRelativePath", "InteractableActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Sem2UniversityTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractableActor, IInteractionInterface), false },  // 1657810501
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableActor_Statics::ClassParams = {
	&AInteractableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableActor()
{
	if (!Z_Registration_Info_UClass_AInteractableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableActor.OuterSingleton, Z_Construct_UClass_AInteractableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableActor);
AInteractableActor::~AInteractableActor() {}
// ********** End Class AInteractableActor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_6_Sem2UniversityTasks_Source_Sem2UniversityTasks_InteractableActor_h__Script_Sem2UniversityTasks_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableActor, AInteractableActor::StaticClass, TEXT("AInteractableActor"), &Z_Registration_Info_UClass_AInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableActor), 1783648817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_6_Sem2UniversityTasks_Source_Sem2UniversityTasks_InteractableActor_h__Script_Sem2UniversityTasks_3977014939(TEXT("/Script/Sem2UniversityTasks"),
	Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_6_Sem2UniversityTasks_Source_Sem2UniversityTasks_InteractableActor_h__Script_Sem2UniversityTasks_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_6_Sem2UniversityTasks_Source_Sem2UniversityTasks_InteractableActor_h__Script_Sem2UniversityTasks_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
