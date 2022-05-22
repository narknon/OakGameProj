#pragma once
#include "CoreMinimal.h"
#include "DiscoveredLevelInfo.h"
#include "DiscoverySaveData.generated.h"

USTRUCT(BlueprintType)
struct FDiscoverySaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FDiscoveredLevelInfo> DiscoveredLevelInfo;
    
    OAKGAME_API FDiscoverySaveData();
};

