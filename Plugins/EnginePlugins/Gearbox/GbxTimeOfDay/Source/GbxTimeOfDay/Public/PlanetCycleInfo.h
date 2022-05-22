#pragma once
#include "CoreMinimal.h"
#include "PlanetCycleInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlanetCycleInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName PlanetName;
    
    UPROPERTY()
    float CycleLength;
    
    UPROPERTY()
    float LastCachedTime;
    
    GBXTIMEOFDAY_API FPlanetCycleInfo();
};

