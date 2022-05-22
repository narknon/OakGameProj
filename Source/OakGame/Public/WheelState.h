#pragma once
#include "CoreMinimal.h"
#include "WheelState.generated.h"

USTRUCT(BlueprintType)
struct FWheelState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RelativeSpeed;
    
    OAKGAME_API FWheelState();
};

