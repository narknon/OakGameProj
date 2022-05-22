#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "WeightedFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FWeightedFloatRange {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Weight;
    
public:
    OAKGAME_API FWeightedFloatRange();
};

