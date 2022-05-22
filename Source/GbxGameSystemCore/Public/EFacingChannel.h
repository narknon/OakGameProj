#pragma once
#include "CoreMinimal.h"
#include "EFacingChannel.generated.h"

UENUM(BlueprintType)
enum class EFacingChannel : uint8 {
    Body,
    Aim,
    Look,
    Count,
};

