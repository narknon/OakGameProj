#pragma once
#include "CoreMinimal.h"
#include "ActiveFastTravelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FActiveFastTravelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString FastTravelStationName;
    
    UPROPERTY()
    bool bBlacklisted;
    
    GBXTRAVELSTATION_API FActiveFastTravelSaveData();
};

