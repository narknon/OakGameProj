#pragma once
#include "CoreMinimal.h"
#include "EnvQueryParams.h"
#include "AttributeInitializationData.h"
#include "GRMLNBeamConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FGRMLNBeamConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams TargetQuery;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData BeamDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData CooldownDuration;
    
    OAKGAME_API FGRMLNBeamConfiguration();
};

