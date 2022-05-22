#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxScrollListFocusOrderPriority.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxScrollListFocusOrderPriority : uint8 {
    BringToFront,
    LeaveUnchanged,
    BringToFrontWithEverythingElseInOrder,
    BringToFrontWithEverythingElseInReverseOrder,
};

