#pragma once
#include "CoreMinimal.h"
#include "ETravelStatus.h"
#include "TravelCountdownInfo.generated.h"

class UTravelStationData;

USTRUCT(BlueprintType)
struct FTravelCountdownInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTravelStationData* TravelStationDestination;
    
    UPROPERTY()
    int32 RemainingTime;
    
    UPROPERTY()
    ETravelStatus Status;
    
    UPROPERTY()
    bool bDisallowLocalTravel;
    
    GBXTRAVELSTATION_API FTravelCountdownInfo();
};

