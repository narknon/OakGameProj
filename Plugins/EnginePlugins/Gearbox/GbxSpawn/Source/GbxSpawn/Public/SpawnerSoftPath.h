#pragma once
#include "CoreMinimal.h"
#include "SpawnerSoftPath.generated.h"

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnerSoftPath {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SpawnerPathName;
    
    UPROPERTY()
    FString SpawnerSubPathString;
    
    FSpawnerSoftPath();
};

