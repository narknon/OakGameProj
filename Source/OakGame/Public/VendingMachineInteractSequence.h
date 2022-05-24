#pragma once
#include "CoreMinimal.h"
#include "VendingMachineSequenceTimedEvent.h"
#include "Curves/CurveFloat.h"
#include "VendingMachineInteractSequence.generated.h"

USTRUCT(BlueprintType)
struct FVendingMachineInteractSequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve DigistructCurve;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    TArray<FVendingMachineSequenceTimedEvent> Events;
    
    OAKGAME_API FVendingMachineInteractSequence();
};

