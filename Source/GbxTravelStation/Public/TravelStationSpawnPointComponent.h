#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "TravelStationSpawnPointInterface.h"
#include "TravelStationActorSpawnedDelegate.h"
#include "TravelStationSpawnPointComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXTRAVELSTATION_API UTravelStationSpawnPointComponent : public UCapsuleComponent, public ITravelStationSpawnPointInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTravelStationActorSpawned OnStationActorSpawned;
    
    UTravelStationSpawnPointComponent();
    
    // Fix for true pure virtual functions not being implemented
};

