#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxButtonType.generated.h"

UENUM(BlueprintType)
enum class EGbxGFxButtonType : uint8 {
    Standard,
    Checkbox,
    Radio,
    UserCheckbox,
};

