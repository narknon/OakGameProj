#pragma once
#include "CoreMinimal.h"
#include "EUIManagerState.generated.h"

UENUM(BlueprintType)
enum class EUIManagerState : uint8 {
    NONE,
    PLAYING_ANIMATION,
};

