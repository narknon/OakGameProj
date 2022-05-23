#pragma once
#include "CoreMinimal.h"
#include "EFreezeState.generated.h"

UENUM(BlueprintType)
enum class EFreezeState : uint8 {
    None,
    Freezing,
    Frozen,
    Thawing,
};

