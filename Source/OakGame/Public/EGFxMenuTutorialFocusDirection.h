#pragma once
#include "CoreMinimal.h"
#include "EGFxMenuTutorialFocusDirection.generated.h"

UENUM(BlueprintType)
enum class EGFxMenuTutorialFocusDirection : int32 {
    Center,
    Left,
    Right,
    SameAsStardard,
};

