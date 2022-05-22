#pragma once
#include "CoreMinimal.h"
#include "ECohtmlMSAA.generated.h"

UENUM(BlueprintType)
enum class ECohtmlMSAA : uint8 {
    MSAA_1x,
    MSAA_2x,
    MSAA_4x,
    MSAA_MAX UMETA(Hidden),
};

