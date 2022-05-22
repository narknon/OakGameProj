#pragma once
#include "CoreMinimal.h"
#include "EDialogParameterPrimaryType.generated.h"

UENUM(BlueprintType)
enum class EDialogParameterPrimaryType : uint8 {
    Event,
    Object,
    Enum,
    Number,
    Boolean,
};

