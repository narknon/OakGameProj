#pragma once
#include "CoreMinimal.h"
#include "OakMissionSpawner.h"
#include "MissionVehicleSpawnedEventDelegate.h"
#include "SpawnerActorData.h"
#include "OakMissionVehicleSpawner.generated.h"

class ACatchARide;
class ASpawner;

UCLASS()
class AOakMissionVehicleSpawner : public AOakMissionSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<ACatchARide>> ConsoleAllowToRespawn;
    
    UPROPERTY(BlueprintAssignable)
    FMissionVehicleSpawnedEvent OnMissionVehicleSpawned;
    
    AOakMissionVehicleSpawner();
private:
    UFUNCTION()
    void OnActorDiedEvent(ASpawner* Spawner, const FSpawnerActorData& ActorData);
    
};

