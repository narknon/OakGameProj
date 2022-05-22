#pragma once
#include "CoreMinimal.h"
#include "EUIStatValueStyle.generated.h"

UENUM(BlueprintType)
enum class EUIStatValueStyle : uint8 {
    AttributeValue,
    AbsoluteModification,
    ScaleModification,
};

