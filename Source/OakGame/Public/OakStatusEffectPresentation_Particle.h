#pragma once
#include "CoreMinimal.h"
#include "OakStatusEffectPresentation_Particle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FOakStatusEffectPresentation_Particle {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUsesThirdPersonParticles;
    
    UPROPERTY(EditAnywhere)
    FName ParticlePresentationName;
    
    UPROPERTY(EditAnywhere)
    FName ThirdPersonParameterName;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ThirdPersonParticleSystem;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SupportedEmitters;
    
    OAKGAME_API FOakStatusEffectPresentation_Particle();
};

