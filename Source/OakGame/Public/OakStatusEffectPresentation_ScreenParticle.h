#pragma once
#include "CoreMinimal.h"
#include "OakStatusEffectPresentation_ScreenParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FOakStatusEffectPresentation_ScreenParticle {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUsesScreenParticle;
    
    UPROPERTY(EditAnywhere)
    float TransitionDuration;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* FirstPersonScreenEffect;
    
    UPROPERTY(EditAnywhere)
    float ScreenParticleDepth;
    
    OAKGAME_API FOakStatusEffectPresentation_ScreenParticle();
};

