#pragma once
#include "CoreMinimal.h"
#include "ETransactionType.generated.h"

UENUM(BlueprintType)
enum class ETransactionType : uint8 {
    Buy,
    Sell,
    BuyBack,
    SellAllJunk,
    PurchaseCustomization,
};

