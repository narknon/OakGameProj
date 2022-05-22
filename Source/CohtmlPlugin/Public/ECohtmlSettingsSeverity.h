#pragma once
#include "CoreMinimal.h"
#include "ECohtmlSettingsSeverity.generated.h"

UENUM(BlueprintType)
enum class ECohtmlSettingsSeverity : uint8 {
    Trace,
    Debug,
    Info,
    Warning,
    AssertFailure,
    Error,
};

