#pragma once
#include "CoreMinimal.h"
#include "EColorPickerMode.generated.h"

UENUM(BlueprintType)
enum class EColorPickerMode : uint8 {
    All,
    PrimarySecondary,
    PrimaryOnly,
};

