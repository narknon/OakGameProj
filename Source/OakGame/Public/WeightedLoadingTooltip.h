#pragma once
#include "CoreMinimal.h"
#include "WeightedLoadingTooltip.generated.h"

USTRUCT(BlueprintType)
struct FWeightedLoadingTooltip {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ToolTipText;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    OAKGAME_API FWeightedLoadingTooltip();
};

