#pragma once
#include "CoreMinimal.h"
#include "NumericRange.generated.h"

USTRUCT(BlueprintType)
struct GBXRUNTIME_API FNumericRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    float Variance;
    
    FNumericRange();
};

