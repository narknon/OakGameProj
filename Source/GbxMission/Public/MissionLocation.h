#pragma once
#include "CoreMinimal.h"
#include "MissionLocation.generated.h"

class UTravelStationData;
class UGbxCondition;

USTRUCT(BlueprintType)
struct FMissionLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTravelStationData> TravelStation;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* StationCondition;
    
    GBXMISSION_API FMissionLocation();
};

