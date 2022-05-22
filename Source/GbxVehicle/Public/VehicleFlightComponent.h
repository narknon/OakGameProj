#pragma once
#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "VehicleFlightComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleFlightComponent : public UFloatingPawnMovement {
    GENERATED_BODY()
public:
    UVehicleFlightComponent();
};

