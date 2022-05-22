#pragma once
#include "CoreMinimal.h"
#include "SpawnOptionDataSoftPath.generated.h"

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnOptionDataSoftPath {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SpawnOptionDataPathName;
    
    UPROPERTY()
    FString SpawnOptionDataSubPathString;
    
    FSpawnOptionDataSoftPath();
};

