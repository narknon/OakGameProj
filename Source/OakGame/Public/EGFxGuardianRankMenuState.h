#pragma once
#include "CoreMinimal.h"
#include "EGFxGuardianRankMenuState.generated.h"

UENUM(BlueprintType)
enum class EGFxGuardianRankMenuState : uint8 {
    None,
    MenuLocked,
    GuardianRankDisabled,
    Information_RedeemButtonSelected,
    Information_PerkSelected,
    TokenRedemption,
    TokenRedemption_WaitingForPurchase,
};

