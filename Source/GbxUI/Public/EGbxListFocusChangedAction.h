#pragma once
#include "CoreMinimal.h"
#include "EGbxListFocusChangedAction.generated.h"

UENUM(BlueprintType)
enum class EGbxListFocusChangedAction : uint8 {
    DoNotChangeSelection,
    SelectNoneOnLossSelectFirstOnGain,
    SelectNoneOnLossRestorePreviousOnGain,
};

