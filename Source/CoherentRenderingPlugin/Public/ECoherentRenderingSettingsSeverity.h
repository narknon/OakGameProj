#pragma once
#include "CoreMinimal.h"
#include "ECoherentRenderingSettingsSeverity.generated.h"

UENUM(BlueprintType)
enum class ECoherentRenderingSettingsSeverity : uint8 {
    Trace,
    Debug,
    Info,
    Warning,
    AssertFailure,
    Error,
};

