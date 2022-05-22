#pragma once
#include "CoreMinimal.h"
#include "MayhemUILevelData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemUILevelData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText ModEnemies[3];
    
    UPROPERTY()
    FText ModCurrency;
    
    UPROPERTY()
    FText ModDropRate;
    
    UPROPERTY()
    FText ModXP;
    
    FMayhemUILevelData();
};

