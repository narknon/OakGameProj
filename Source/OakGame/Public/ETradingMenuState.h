#pragma once
#include "CoreMinimal.h"
#include "ETradingMenuState.generated.h"

UENUM(BlueprintType)
enum class ETradingMenuState : uint8 {
    Offering,
    Backpack,
    Done,
};

