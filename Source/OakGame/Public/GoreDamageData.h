#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "GoreSizeSelectionData.h"
#include "EGoreRegionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMaterialParameterCopyMethod -FallbackName=EMaterialParameterCopyMethod
#include "UObject/NoExportTypes.h"
#include "ForceSelection.h"
#include "GoreSelectionResults.h"
#include "GoreDamageData.generated.h"

class UWwiseEvent;
class UHitReactionTag;
class UParticleSystem;
class UStaticMesh;
class UMaterialInstanceConstant;
class AActor;
class UObject;
class UDialogEvent;

UCLASS(BlueprintType)
class UGoreDamageData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName RootDamageBone;
    
    UPROPERTY(EditAnywhere)
    bool bIncludeChildBones;
    
    UPROPERTY(EditAnywhere)
    bool bTriggerOnlyOnDeath;
    
    UPROPERTY(EditAnywhere)
    bool bTriggeredByAoEDamage;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideTriggerThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TriggerThreshold;
    
    UPROPERTY(EditAnywhere)
    EGoreRegionType GoreRegionType;
    
    UPROPERTY()
    bool bOverwriteStumpInstancedMaterialParameters;
    
    UPROPERTY()
    bool bOverwriteLimbInstancedMaterialParameters;
    
    UPROPERTY(EditAnywhere)
    bool bInheritStumpMaterialParameters;
    
    UPROPERTY(EditAnywhere)
    EMaterialParameterCopyMethod InheritStumpMaterialParametersMethod;
    
    UPROPERTY(EditAnywhere)
    bool bInheritLimbMaterialParameters;
    
    UPROPERTY(EditAnywhere)
    EMaterialParameterCopyMethod InheritLimbMaterialParametersMethod;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSourceMaterialIndex;
    
    UPROPERTY(EditAnywhere)
    int32 SourceMaterialIndex;
    
    UPROPERTY(EditAnywhere)
    FName StumpSocket;
    
    UPROPERTY(EditAnywhere)
    FVector StumpBoneScale;
    
    UPROPERTY(EditAnywhere)
    FVector StumpDecalSize;
    
    UPROPERTY(EditAnywhere)
    bool bStumpReceivesDecals;
    
    UPROPERTY(EditAnywhere)
    FName LimbSocket;
    
    UPROPERTY(EditAnywhere)
    TArray<FGoreSizeSelectionData> GoreSizeData;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* DeathHitReactionOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<UStaticMesh*> StumpMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> StumpParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInstanceConstant*> StumpDecals;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StumpSound;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstanceConstant* StumpMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> LimbActorClass;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> LimbMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> LimbParticles;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstanceConstant* LimbMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    FForceSelection LimbForce;
    
    UPROPERTY(EditAnywhere)
    bool bScaleLimbToStump;
    
    UPROPERTY(EditAnywhere)
    float LimbScale;
    
    UPROPERTY(EditAnywhere)
    float LimbMassScale;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDialog;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* GoreDialogEvent;
    
    UGoreDamageData();
    UFUNCTION(BlueprintPure)
    void GenerateGore(AActor* Actor, FGoreSelectionResults& Results, FName StumpSocketOverride, FName LimbSocketOverride) const;
    
};

