#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "OakBackpackCapacityThreshold.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakBackpackCapacityThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Percentage;
    
    UPROPERTY(EditAnywhere)
    FSlateColor Color;
    
    FOakBackpackCapacityThreshold();
};

