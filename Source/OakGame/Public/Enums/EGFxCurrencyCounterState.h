#pragma once
#include "CoreMinimal.h"
#include "EGFxCurrencyCounterState.generated.h"

UENUM(BlueprintType)
enum class EGFxCurrencyCounterState : int32 {
    Off,
    AnimatingToValue,
    HoldingOnValue,
};

