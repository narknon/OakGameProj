#pragma once
#include "CoreMinimal.h"
#include "InventoryPartData.h"
#include "VehiclePartData.generated.h"

UCLASS(Abstract)
class GBXVEHICLE_API UVehiclePartData : public UInventoryPartData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName VehicleArchetype;
    
    UPROPERTY(EditInstanceOnly)
    bool bIsAShield;
    
    UVehiclePartData();
};

