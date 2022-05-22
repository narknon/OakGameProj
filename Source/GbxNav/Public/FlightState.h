#pragma once
#include "CoreMinimal.h"
#include "EFlightMovementState.h"
#include "UObject/NoExportTypes.h"
#include "FlightState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXNAV_API FFlightState {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EFlightMovementState> CurrentMovementState;
    
    UPROPERTY()
    AActor* VehicleSplineActor;
    
    UPROPERTY()
    AActor* DropOffSpawner;
    
    UPROPERTY()
    float AscentTargetLocationZ;
    
    UPROPERTY()
    FRotator AscentTargetRotation;
    
    FFlightState();
};

