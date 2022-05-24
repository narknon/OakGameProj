#pragma once
#include "CoreMinimal.h"
#include "EHostileAttachState.generated.h"

UENUM(BlueprintType)
enum class EHostileAttachState : uint8 {
    Loop,
    Attack,
    GripFeedback,
    GetDown,
    Ejected,
    Completed,
};

