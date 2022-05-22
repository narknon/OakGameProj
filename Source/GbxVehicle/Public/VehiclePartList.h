#pragma once
#include "CoreMinimal.h"
#include "VehiclePartList.generated.h"

class UVehiclePartData;

USTRUCT()
struct FVehiclePartList {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<UVehiclePartData*> Parts;
    
    GBXVEHICLE_API FVehiclePartList();
};

