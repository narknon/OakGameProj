#pragma once
#include "CoreMinimal.h"
#include "EForceSelection.generated.h"

UENUM(BlueprintType)
enum class EForceSelection : uint8 {
    Custom,
    Attribute,
    Preset,
};

