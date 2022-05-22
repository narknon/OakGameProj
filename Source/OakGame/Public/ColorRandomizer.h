#pragma once
#include "CoreMinimal.h"
#include "NumericRange.h"
#include "ColorRandomizer.generated.h"

USTRUCT(BlueprintType)
struct FColorRandomizer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Hue;
    
    UPROPERTY(EditAnywhere)
    float Saturation;
    
    UPROPERTY(EditAnywhere)
    FNumericRange Scale;
    
public:
    OAKGAME_API FColorRandomizer();
};

