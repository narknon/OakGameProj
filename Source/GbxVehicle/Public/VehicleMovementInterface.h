#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "VehicleMovementInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UVehicleMovementInterface : public UInterface {
    GENERATED_BODY()
};

class IVehicleMovementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FVector2D GetDirectionBasedThrottleAndSteer(const FVector2D& StickInput) PURE_VIRTUAL(GetDirectionBasedThrottleAndSteer, return FVector2D{};);
    
};

