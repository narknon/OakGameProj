#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TravelStationActorSpawnedDelegate.h"
#include "TravelStationSpawnPointInterface.h"
#include "TravelStationVehicleSpawnPointComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXTRAVELSTATION_API UTravelStationVehicleSpawnPointComponent : public UBoxComponent, public ITravelStationSpawnPointInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTravelStationActorSpawned OnStationActorSpawned;
    
    UTravelStationVehicleSpawnPointComponent();
    
    // Fix for true pure virtual functions not being implemented
};

