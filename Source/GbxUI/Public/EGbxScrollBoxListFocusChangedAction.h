#pragma once
#include "CoreMinimal.h"
#include "EGbxScrollBoxListFocusChangedAction.generated.h"

UENUM(BlueprintType)
enum class EGbxScrollBoxListFocusChangedAction : uint8 {
    DoNotChangeSelection,
    SelectNoneOnLossSelectFirstOnGain,
    SelectNoneOnLossRestorePreviousOnGain,
};

