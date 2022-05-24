#pragma once
#include "CoreMinimal.h"
#include "GbxSignificanceEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialBlurSelection -FallbackName=RadialBlurSelection
#include "EExplosionTinnitusDuration.h"
#include "ExplosionSizeProperties.generated.h"

class UFeedbackData;
class UParticleSystem;
class UWwiseEvent;
class UImpactData;

USTRUCT(BlueprintType)
struct FExplosionSizeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ExplosionSize;
    
    UPROPERTY(EditDefaultsOnly)
    UFeedbackData* ExplosionFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ExplosionParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* CensoredExplosionParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ExplosionAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UImpactData* ExplosionImpact;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCensorThisExplosion: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseExplosionRadialBlur: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bOverrideTinnitusDuration: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRadialBlurSelection ExplosionRadialBlur;
    
    UPROPERTY(EditDefaultsOnly)
    EExplosionTinnitusDuration TinnitusDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FGbxSignificanceEvent SignificanceEvent;
    
    GBXGAMESYSTEMCORE_API FExplosionSizeProperties();
};

