#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory_OakVehicle.h"
#include "SpawnFactoryDataArray.h"
#include "SpawnFactory_OakVehicleRandomSeats.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakVehicleRandomSeats : public USpawnFactory_OakVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnFactoryDataArray> SeatOptions;
    
public:
    USpawnFactory_OakVehicleRandomSeats();
};

