#pragma once
#include "CoreMinimal.h"
#include "PlayerDifficultyBalanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerDifficultyBalanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PlayerDamageTakenMultiplier;
    
    OAKGAME_API FPlayerDifficultyBalanceInfo();
};

