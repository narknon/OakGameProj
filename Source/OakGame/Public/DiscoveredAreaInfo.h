#pragma once
#include "CoreMinimal.h"
#include "DiscoveredAreaInfo.generated.h"

USTRUCT(BlueprintType)
struct FDiscoveredAreaInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName DiscoveredAreaName;
    
    UPROPERTY()
    uint32 PlaythroughBits;
    
    OAKGAME_API FDiscoveredAreaInfo();
};

