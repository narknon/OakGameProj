#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectTaskState.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectTaskState : uint8 {
    Uninitialized,
    Movement,
    Alignment,
    Usage,
    Complete,
};

