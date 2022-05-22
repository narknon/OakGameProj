#pragma once
#include "CoreMinimal.h"
#include "OakPresentationParticleSystemWrapper.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FOakPresentationParticleSystemWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* Component;
    
public:
    OAKGAME_API FOakPresentationParticleSystemWrapper();
};

