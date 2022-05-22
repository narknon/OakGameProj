#pragma once
#include "CoreMinimal.h"
#include "VehicleBoostValueReachedEventDelegateDelegate.h"
#include "BoostRegenerateEvent.generated.h"

USTRUCT(BlueprintType)
struct FBoostRegenerateEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float BoostTarget;
    
    UPROPERTY(BlueprintReadWrite)
    FVehicleBoostValueReachedEventDelegate VehicleBoostValueReachedEvent;
    
    GBXVEHICLE_API FBoostRegenerateEvent();
};

