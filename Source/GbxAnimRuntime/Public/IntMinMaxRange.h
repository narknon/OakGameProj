#pragma once
#include "CoreMinimal.h"
#include "IntMinMaxRange.generated.h"

USTRUCT(BlueprintType)
struct FIntMinMaxRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxValue;
    
    GBXANIMRUNTIME_API FIntMinMaxRange();
};

