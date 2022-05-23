#pragma once
#include "CoreMinimal.h"
#include "EHostileAttachState.generated.h"

UENUM(BlueprintType)
enum class EHostileAttachState :  {
    Loop,
    Attack,
    GripFeedback,
    GetDown,
    Ejected,
    Completed,
};

