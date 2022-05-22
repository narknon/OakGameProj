#pragma once
#include "CoreMinimal.h"
#include "EDropLifeSpanType.generated.h"

UENUM(BlueprintType)
enum class EDropLifeSpanType : uint8 {
    DROP_VeryShortLived,
    DROP_ShortLived,
    DROP_LongLived,
    DROP_LiveForever,
    DROP_LiveAsLongAsLevel,
    DROP_MAX UMETA(Hidden),
};

