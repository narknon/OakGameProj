#pragma once
#include "CoreMinimal.h"
#include "RegionBalanceDataBase.generated.h"

USTRUCT()
struct OAKGAME_API FRegionBalanceDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MinGameStage;
    
    UPROPERTY(EditAnywhere)
    int32 MaxGameStage;
    
    UPROPERTY(EditAnywhere)
    int32 GameStageIncreaseAbovePlayer;
    
    UPROPERTY(EditAnywhere)
    bool bSpecifyBoostAbovePlayer;
    
    FRegionBalanceDataBase();
};

