#pragma once
#include "CoreMinimal.h"
#include "EQSDynamicPointRange.generated.h"

USTRUCT(BlueprintType)
struct FEQSDynamicPointRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinPoints;
    
    UPROPERTY(EditAnywhere)
    int32 MaxPoints;
    
    UPROPERTY(EditAnywhere)
    float IdealSpacing;
    
    UPROPERTY(EditAnywhere)
    float MinSpacing;
    
    GBXAI_API FEQSDynamicPointRange();
};

