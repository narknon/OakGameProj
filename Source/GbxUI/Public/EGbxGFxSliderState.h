#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxSliderState.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxSliderState :  {
    NotScrolling,
    ScrollingLeft,
    ScrollingRight,
};

