#pragma once
#include "CoreMinimal.h"
#include "DiscoveredAreaInfo.h"
#include "DiscoveredLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FDiscoveredLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName DiscoveredLevelName;
    
    UPROPERTY()
    TArray<FDiscoveredAreaInfo> DiscoveredAreas;
    
    UPROPERTY()
    uint32 PlaythroughBits;
    
    OAKGAME_API FDiscoveredLevelInfo();
};

