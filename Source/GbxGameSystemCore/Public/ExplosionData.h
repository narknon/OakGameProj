#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxSignificanceEvent.h"
#include "GbxDataAsset.h"
#include "DamageTypeExplosionAssociation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialBlurSelection -FallbackName=RadialBlurSelection
#include "EExplosionTinnitusDuration.h"
#include "ExplosionSizeProperties.h"
#include "ExplosionData.generated.h"

class UParticleSystem;
class UDamageType;
class UExplosionSizeSelectionData;
class UFeedbackData;
class UWwiseEvent;
class UImpactData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UExplosionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UExplosionSizeSelectionData* DefaultExplosionSizeData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDamageTypeExplosionAssociation> DamageTypeSelections;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseRadialBlurOverride;
    
    UPROPERTY(EditDefaultsOnly)
    FRadialBlurSelection RadialBlurOverride;
    
    UPROPERTY(EditDefaultsOnly)
    EExplosionTinnitusDuration TinnitusDuration;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseBasicExplosion;
    
    UPROPERTY(EditDefaultsOnly)
    FGbxSignificanceEvent SignificanceEvent;
    
    UPROPERTY(EditAnywhere)
    bool bCensorThisExplosion;
    
    UPROPERTY(EditDefaultsOnly)
    UFeedbackData* FeedbackOverride;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ParticleSystemOverride;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* CensoredParticleSystemOverride;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* AudioEventOverride;
    
    UPROPERTY(EditDefaultsOnly)
    UImpactData* ImpactOverride;
    
    UPROPERTY(EditDefaultsOnly)
    float FeedbackFalloffMinDistanceScalar;
    
    UPROPERTY(EditDefaultsOnly)
    float FeedbackFalloffMaxDistanceScalar;
    
    UExplosionData();
    UFUNCTION(BlueprintCallable)
    FExplosionSizeProperties SelectExplosion(float Size, TSubclassOf<UDamageType> DamageType);
    
};

