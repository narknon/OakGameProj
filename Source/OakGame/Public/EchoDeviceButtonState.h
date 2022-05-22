#pragma once
#include "CoreMinimal.h"
#include "EchoDeviceButtonState.generated.h"

USTRUCT(BlueprintType)
struct FEchoDeviceButtonState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bPressed;
    
    UPROPERTY()
    float AutoReleaseDelay;
    
    OAKGAME_API FEchoDeviceButtonState();
};

