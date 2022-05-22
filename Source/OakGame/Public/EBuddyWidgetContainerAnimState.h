#pragma once
#include "CoreMinimal.h"
#include "EBuddyWidgetContainerAnimState.generated.h"

UENUM(BlueprintType)
enum class EBuddyWidgetContainerAnimState : uint8 {
    Inactive,
    SlideIn,
    SlideOut,
    SlideDown,
};

