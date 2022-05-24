#pragma once
#include "CoreMinimal.h"
#include "EGFxMapMenuProgressPanelState.generated.h"

UENUM(BlueprintType)
enum class EGFxMapMenuProgressPanelState : uint8 {
    None,
    Progress,
    List,
};

