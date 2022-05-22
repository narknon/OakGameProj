#pragma once
#include "CoreMinimal.h"
#include "ETimedUpdateBehavior.generated.h"

UENUM(BlueprintType)
enum class ETimedUpdateBehavior : uint8 {
    DontDoTimedUpdates,
    UpdateRegularlyEvenWhenNavigating,
    UpdateRegularlyExceptWhenNavigating,
};

