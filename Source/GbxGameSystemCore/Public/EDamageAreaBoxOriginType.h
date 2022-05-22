#pragma once
#include "CoreMinimal.h"
#include "EDamageAreaBoxOriginType.generated.h"

UENUM(BlueprintType)
enum class EDamageAreaBoxOriginType : uint8 {
    Centered,
    OffsetByDepth,
};

