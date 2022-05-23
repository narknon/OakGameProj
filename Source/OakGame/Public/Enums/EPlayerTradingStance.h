#pragma once
#include "CoreMinimal.h"
#include "EPlayerTradingStance.generated.h"

UENUM(BlueprintType)
enum class EPlayerTradingStance : uint8 {
    Deciding,
    TradeReady,
    DuelReady,
    Disconnected,
};

