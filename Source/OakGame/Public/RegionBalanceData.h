#pragma once
#include "CoreMinimal.h"
#include "RegionBalanceDataBase.h"
#include "RegionMissionBalanceData.h"
#include "RegionBalanceData.generated.h"

class URegionData;

USTRUCT(BlueprintType)
struct OAKGAME_API FRegionBalanceData : public FRegionBalanceDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    URegionData* REGION;
    
    UPROPERTY(EditAnywhere)
    TArray<FRegionMissionBalanceData> MissionOverrides;
    
    FRegionBalanceData();
};

