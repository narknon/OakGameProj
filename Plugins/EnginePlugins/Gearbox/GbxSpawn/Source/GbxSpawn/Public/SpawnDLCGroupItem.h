#pragma once
#include "CoreMinimal.h"
#include "SpawnerSoftPath.h"
#include "SpawnDLCGroupItem.generated.h"

class USpawnOptionData;

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnDLCGroupItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSpawnerSoftPath> SpawnerSoftPaths;
    
    UPROPERTY(EditAnywhere)
    USpawnOptionData* SpawnOptions;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysEnabledDuringEvent;
    
    FSpawnDLCGroupItem();
};

