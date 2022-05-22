#pragma once
#include "CoreMinimal.h"
#include "EGFxMinimapWidgetIconTrackedType.generated.h"

UENUM(BlueprintType)
enum class EGFxMinimapWidgetIconTrackedType : uint8 {
    Unused,
    Mission,
    MinimapIconComponent,
    CustomWaypoint,
    PlayerIcon,
};

