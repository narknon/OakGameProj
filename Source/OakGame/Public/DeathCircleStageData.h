#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "DeathCircleStageData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FDeathCircleStageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Radius;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData StableSeconds;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TransitionSeconds;
    
    FDeathCircleStageData();
};

