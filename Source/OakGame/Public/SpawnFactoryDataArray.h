#pragma once
#include "CoreMinimal.h"
#include "SpawnFactoryData.h"
#include "SpawnFactoryDataArray.generated.h"

USTRUCT(BlueprintType)
struct FSpawnFactoryDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnFactoryData> SpawnFactoryDataArray;
    
    OAKGAME_API FSpawnFactoryDataArray();
};

