#pragma once
#include "CoreMinimal.h"
#include "EMantleType.generated.h"

UENUM(BlueprintType)
enum class EMantleType : uint8 {
    MantleUp,
    WallHop,
    EMantleType_MAX = 0xFF,
};

