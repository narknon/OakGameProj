#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialBlurSelection -FallbackName=RadialBlurSelection
#include "IncomingDamagePresentationData.generated.h"

class UFeedbackData;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FIncomingDamagePresentationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageThreshold;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageScore;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageScoreThreshold;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* FeedbackData;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* HealthAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ShieldAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ArmorAudioEvent;
    
    UPROPERTY(EditAnywhere)
    float DamageSeverityParticleParamValue;
    
    UPROPERTY(EditAnywhere)
    float ArmsAnimationFlinchStrength;
    
    UPROPERTY(EditAnywhere)
    bool bUseRadialBlur;
    
    UPROPERTY(EditAnywhere)
    FRadialBlurSelection RadialBlur;
    
    OAKGAME_API FIncomingDamagePresentationData();
};

