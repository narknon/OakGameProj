#pragma once
#include "CoreMinimal.h"
#include "EPlayerTradeManagerStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerTradeManagerStatus : uint8 {
    Uninitialized,
    Trading,
    Dueling,
    ResolvingTrade,
    ResolvingDuel,
};

