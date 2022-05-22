#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PawnAttachCameraModeOptions.h"
#include "VehicleInputParams.generated.h"

class UInputComponent;

USTRUCT(BlueprintType)
struct FVehicleInputParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInputComponent> InputComponentClass;
    
    UPROPERTY(EditAnywhere)
    bool bUseCameraOverride;
    
    UPROPERTY(EditAnywhere)
    FPawnAttachCameraModeOptions DriverSeatCameraModeOptionsOverride;
    
    OAKGAME_API FVehicleInputParams();
};

