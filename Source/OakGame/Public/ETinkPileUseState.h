#pragma once
#include "CoreMinimal.h"
#include "ETinkPileUseState.generated.h"

UENUM(BlueprintType)
enum class ETinkPileUseState : uint8 {
    None,
    NotUsed,
    InUse,
    WasUsed,
    Resetting,
};

