#pragma once
#include "CoreMinimal.h"
#include "ECoverAdjustFailReason.generated.h"

UENUM(BlueprintType)
enum class ECoverAdjustFailReason : uint8 {
    None,
    NoRoom,
    NoView,
    Invalid,
};

