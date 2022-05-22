#pragma once
#include "CoreMinimal.h"
#include "ENavCorrectionSetting.generated.h"

UENUM(BlueprintType)
enum class ENavCorrectionSetting : uint8 {
    Default,
    Enabled,
    Disabled,
};

