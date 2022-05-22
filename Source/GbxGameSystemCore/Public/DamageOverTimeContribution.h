#pragma once
#include "CoreMinimal.h"
#include "PipelineDamageInput.h"
#include "DamageOverTimeContribution.generated.h"

USTRUCT(BlueprintType)
struct FDamageOverTimeContribution {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPipelineDamageInput PipelineInput;
    
    GBXGAMESYSTEMCORE_API FDamageOverTimeContribution();
};

