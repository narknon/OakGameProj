#pragma once
#include "CoreMinimal.h"
#include "SpawnPointTracker.generated.h"

class UTravelStationSpawnPointInterface;
class ITravelStationSpawnPointInterface;
class AActor;

USTRUCT()
struct GBXTRAVELSTATION_API FSpawnPointTracker {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<ITravelStationSpawnPointInterface> SpawnPoint;
    
    UPROPERTY(Transient)
    int32 LastSpawnedAtCounter;
    
    UPROPERTY(Transient)
    AActor* AssignedToActor;
    
    FSpawnPointTracker();
};

