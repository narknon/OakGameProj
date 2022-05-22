#pragma once
#include "CoreMinimal.h"
#include "HitRegionInfo.generated.h"

class UHitRegionData;

USTRUCT(BlueprintType)
struct FHitRegionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UHitRegionData* Data;
    
    UPROPERTY(BlueprintReadOnly)
    int32 StateIndex;
    
    GBXGAMESYSTEMCORE_API FHitRegionInfo();
};

