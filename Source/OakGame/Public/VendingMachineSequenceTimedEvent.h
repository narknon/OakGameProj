#pragma once
#include "CoreMinimal.h"
#include "VendingMachineSequenceTimedEvent.generated.h"

USTRUCT(BlueprintType)
struct FVendingMachineSequenceTimedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Delay;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    OAKGAME_API FVendingMachineSequenceTimedEvent();
};

