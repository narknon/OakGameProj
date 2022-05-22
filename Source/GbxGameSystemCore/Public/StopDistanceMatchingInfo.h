#pragma once
#include "CoreMinimal.h"
#include "DistanceMatchingInfo.h"
#include "CachedStoppingInfo.h"
#include "StopDistanceMatchingInfo.generated.h"

USTRUCT()
struct FStopDistanceMatchingInfo : public FDistanceMatchingInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FCachedStoppingInfo> StoppingInfoMap;
    
    GBXGAMESYSTEMCORE_API FStopDistanceMatchingInfo();
};

