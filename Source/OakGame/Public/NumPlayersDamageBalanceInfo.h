#pragma once
#include "CoreMinimal.h"
#include "NumPlayersDamageBalanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FNumPlayersDamageBalanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 NumPlayers;
    
    UPROPERTY(EditAnywhere)
    float RadiationMultiplier;
    
    OAKGAME_API FNumPlayersDamageBalanceInfo();
};

