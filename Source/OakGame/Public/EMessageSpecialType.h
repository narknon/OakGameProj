#pragma once
#include "CoreMinimal.h"
#include "EMessageSpecialType.generated.h"

UENUM(BlueprintType)
enum class EMessageSpecialType : uint8 {
    MST_None,
    MST_TradeOffer,
    MST_SeatSwapOffer,
    MST_MAX UMETA(Hidden),
};

