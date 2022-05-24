#pragma once
#include "CoreMinimal.h"
#include "EContextualMenuExpandDirection.generated.h"

UENUM(BlueprintType)
enum class EContextualMenuExpandDirection : uint8 {
    Unknown,
    Down,
    Up,
};

