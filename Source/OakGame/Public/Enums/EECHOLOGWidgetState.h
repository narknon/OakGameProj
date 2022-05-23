#pragma once
#include "CoreMinimal.h"
#include "EECHOLOGWidgetState.generated.h"

UENUM(BlueprintType)
enum class EECHOLOGWidgetState : uint8 {
    Inactive,
    Activating,
    Displayed,
    Deactivating,
};

