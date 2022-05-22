#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttitudeDamageRules.h"
#include "GbxDataAsset.h"
#include "AttributeInitializationData.h"
#include "SplatData.generated.h"

class UMaterialInterface;
class UParticleSystem;
class UWwiseEvent;
class USplatDamageData;
class UElementalInteractionData;

UCLASS(Const)
class OAKGAME_API USplatData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseGroundingDecal: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseSplatDecalMaterialArray: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDamageData: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceDamageToPlayerControlled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDamageAmount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseGroundingDecalDeathDelay: 1;
    
    UPROPERTY(EditAnywhere)
    float BirthDuration;
    
    UPROPERTY(EditAnywhere)
    float BirthOpacity;
    
    UPROPERTY(EditAnywhere)
    float BirthRadius;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* BirthEffect;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* BirthAudio;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* GroundingDecalMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* SplatDecalMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> SplatDecalMaterialArray;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* Effect;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float Opacity;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float BonusDecalScalePercent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USplatDamageData> DamageDataOverride;
    
    UPROPERTY(EditAnywhere)
    float DamageScalar;
    
    UPROPERTY(EditAnywhere)
    FAttitudeDamageRules AttitudeDamageRules;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageOverride;
    
    UPROPERTY()
    UElementalInteractionData* ElementalInteraction;
    
    UPROPERTY(EditAnywhere)
    float DeathDuration;
    
    UPROPERTY(EditAnywhere)
    float DeathOpacity;
    
    UPROPERTY(EditAnywhere)
    float DeathRadius;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DeathAudio;
    
    UPROPERTY(EditAnywhere)
    float GroundingDecalDeathDelay;
    
    USplatData();
};

