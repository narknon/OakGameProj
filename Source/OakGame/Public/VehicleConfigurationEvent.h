#pragma once
#include "CoreMinimal.h"
#include "VehicleConfigurationEvent.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FVehicleConfigurationEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
    UPROPERTY(EditAnywhere)
    FName AudioComponentTag;
    
    OAKGAME_API FVehicleConfigurationEvent();
};

