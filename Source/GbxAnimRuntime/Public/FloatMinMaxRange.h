#pragma once
#include "CoreMinimal.h"
#include "FloatMinMaxRange.generated.h"

USTRUCT(BlueprintType)
struct FFloatMinMaxRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValue;
    
    GBXANIMRUNTIME_API FFloatMinMaxRange();
};

