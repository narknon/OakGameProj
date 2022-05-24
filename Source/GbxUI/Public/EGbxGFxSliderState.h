#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxSliderState.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxSliderState : uint8 {
    NotScrolling,
    ScrollingLeft,
    ScrollingRight,
};

