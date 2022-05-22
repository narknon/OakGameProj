#pragma once
#include "CoreMinimal.h"
#include "PlanetCycleInfo.h"
#include "TimeOfDaySaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FTimeOfDaySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPlanetCycleInfo> PlanetCycleInfo;
    
    UPROPERTY()
    FName PlanetCycle;
    
    GBXTIMEOFDAY_API FTimeOfDaySaveGameData();
};

