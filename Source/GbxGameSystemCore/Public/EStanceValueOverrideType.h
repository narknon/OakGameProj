#pragma once
#include "CoreMinimal.h"
#include "EStanceValueOverrideType.generated.h"

UENUM(BlueprintType)
enum class EStanceValueOverrideType : uint8 {
    None,
    Relative,
    Absolute,
};

