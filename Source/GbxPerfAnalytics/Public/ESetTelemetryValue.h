#pragma once
#include "CoreMinimal.h"
#include "ESetTelemetryValue.generated.h"

UENUM(BlueprintType)
enum class ESetTelemetryValue : uint8 {
    Overwrite,
    IfNew,
};

