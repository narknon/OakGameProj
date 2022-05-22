#pragma once
#include "CoreMinimal.h"
#include "WheelRandomSwitchPack.generated.h"

class UWwiseSwitch;

USTRUCT(BlueprintType)
struct FWheelRandomSwitchPack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UWwiseSwitch*> WheelSwitches;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> WheelsToIgnoreForSwitches;
    
    OAKGAME_API FWheelRandomSwitchPack();
};

