#pragma once
#include "CoreMinimal.h"
#include "EECHOWidgetState.generated.h"

UENUM(BlueprintType)
enum class EECHOWidgetState : uint8 {
    Inactive,
    Activating,
    Displayed,
    Deactivating,
};

