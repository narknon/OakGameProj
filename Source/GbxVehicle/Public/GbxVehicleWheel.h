#pragma once
#include "CoreMinimal.h"
#include "VehicleWheel.h"
#include "UObject/NoExportTypes.h"
#include "GbxVehicleWheel.generated.h"

UCLASS()
class GBXVEHICLE_API UGbxVehicleWheel : public UVehicleWheel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SuspensionForceXOffset;
    
    UPROPERTY(EditAnywhere)
    float SuspensionForceYOffset;
    
    UPROPERTY(EditAnywhere)
    FVector SuspensionTravelDirection;
    
    UPROPERTY(EditAnywhere)
    float MaxAllowedLongitudinalSlipPerRotation;
    
    UGbxVehicleWheel();
};

