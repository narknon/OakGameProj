#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoordinatedLightParameterData.h"
#include "CoordinatedConditionalMaterialData.h"
#include "GbxAction.h"
#include "CoordinatedVectorParameter.h"
#include "CoordinatedScalarParameter.h"
#include "CoordinatedParticleSystemData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMaterialParameterCopyMethod -FallbackName=EMaterialParameterCopyMethod
#include "CoordinatedParticleSystemParameterData.h"
#include "ECoordinatedOwnedParticleAction.h"
#include "CoordinatedAudioData.h"
#include "UObject/NoExportTypes.h"
#include "GbxAction_CoordinatedEffect.generated.h"

class UGbxAction_CoordinatedEffect;
class UMaterialInterface;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_CoordinatedEffect : public UGbxAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 bInfiniteDuration: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bLoop: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCensored: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bDestroyActorOnEnd: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUnhideActorOnBegin: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bHideActorOnEnd: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float Duration;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> NextEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName PermanentGroupTag;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* MaskMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* GlowMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedConditionalMaterialData> ConditionalOverrideMaterials;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedScalarParameter> MaterialScalarParameters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedVectorParameter> MaterialVectorParameters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> InheritedMaterialParameters;
    
    UPROPERTY(EditDefaultsOnly)
    EMaterialParameterCopyMethod InheritMaterialParametersMethod;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bInheritAllMaterialParameters: 1;
    
    UPROPERTY()
    uint8 bOverwriteInstancedMaterialParameters: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bApplyToTranslucentMaterials: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bPermanentMaterialOverride: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAlwaysRestoreMaterialParametersAtEnd: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bApplyMaterialParametersToBothOverrideAndMaskGlow: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ExcludedMaterialStaticParameters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedParticleSystemData> ParticleEffects;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedParticleSystemParameterData> ParticleParameters;
    
    UPROPERTY(EditDefaultsOnly)
    float ParticleSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    ECoordinatedOwnedParticleAction OwnedParticleAction;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bAlwaysRestoreParticleParametersAtEnd: 1;
    
    UPROPERTY()
    bool bHideOwnedParticles;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedAudioData> AudioEffects;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCoordinatedLightParameterData> LightParameters;
    
public:
    UGbxAction_CoordinatedEffect();
    UFUNCTION(BlueprintCallable)
    void SetConstantMaterialVectorParamValue(FName ParamName, const FLinearColor& Color);
    
};

