#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RegionBalanceDataBase.h"
#include "RegionMissionBalanceData.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct OAKGAME_API FRegionMissionBalanceData : public FRegionBalanceDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UMission> Mission;
    
    FRegionMissionBalanceData();
};

