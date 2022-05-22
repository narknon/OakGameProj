#pragma once
#include "CoreMinimal.h"
#include "VehicleLandingEventData.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FVehicleLandingEventData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* LandingEvent;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeInAir;
    
    OAKGAME_API FVehicleLandingEventData();
};

