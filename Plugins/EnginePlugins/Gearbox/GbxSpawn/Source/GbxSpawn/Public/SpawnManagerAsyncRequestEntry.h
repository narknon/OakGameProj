#pragma once
#include "CoreMinimal.h"
#include "SpawnManagerAsyncRequest.h"
#include "SpawnManagerAsyncRequestEntry.generated.h"

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnManagerAsyncRequestEntry : public FSpawnManagerAsyncRequest {
    GENERATED_BODY()
public:
    FSpawnManagerAsyncRequestEntry();
};

