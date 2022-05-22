#pragma once
#include "CoreMinimal.h"
#include "SpawnDroppedPickupLootRequest.h"
#include "SelectedInventorySpawningState.h"
#include "SpawnDroppedPickupLootRequestEntry.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FSpawnDroppedPickupLootRequestEntry : public FSpawnDroppedPickupLootRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSelectedInventorySpawningState> SpawningStates;
    
    FSpawnDroppedPickupLootRequestEntry();
};

