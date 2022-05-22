#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VehicleScanData.generated.h"

class AOakVehicle;

UCLASS(BlueprintType)
class UVehicleScanData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AOakVehicle* VehicleScan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NewPartUnlocks;
    
    UVehicleScanData();
};

