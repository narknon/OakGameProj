#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChunkIdAssetClassesData.generated.h"

USTRUCT()
struct FChunkIdAssetClassesData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ChunkId;
    
    UPROPERTY()
    TArray<FSoftClassPath> AssetClasses;
    
    OAKGAME_API FChunkIdAssetClassesData();
};

