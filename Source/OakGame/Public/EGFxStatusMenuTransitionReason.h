#pragma once
#include "CoreMinimal.h"
#include "EGFxStatusMenuTransitionReason.generated.h"

UENUM(BlueprintType)
enum class EGFxStatusMenuTransitionReason : uint8 {
    None,
    Pushed,
    NextPage,
    PrevPage,
    Switched,
    Popped,
};

