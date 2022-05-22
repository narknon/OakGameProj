#pragma once
#include "CoreMinimal.h"
#include "ReplicatedEmitterTemplateOptions.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FReplicatedEmitterTemplateOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    UParticleSystem* DefaultTemplate;
    
    UPROPERTY()
    UParticleSystem* CensoredTemplate;
    
    UPROPERTY()
    bool bEligibleForCensoring;
    
    GBXGAMESYSTEMCORE_API FReplicatedEmitterTemplateOptions();
};

