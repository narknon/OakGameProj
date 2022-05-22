#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxScrollListFocusChangedAction.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxScrollListFocusChangedAction : uint8 {
    DoNotChangeSelection,
    SelectNoneOnLossSelectFirstOnGain,
    SelectNoneOnLossRestorePreviousOnGain,
};

