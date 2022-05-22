#pragma once
#include "CoreMinimal.h"
#include "SpawnInventoryLootRequest.h"
#include "SpawnInventoryLootRequestEntry.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FSpawnInventoryLootRequestEntry : public FSpawnInventoryLootRequest {
    GENERATED_BODY()
public:
    FSpawnInventoryLootRequestEntry();
};

