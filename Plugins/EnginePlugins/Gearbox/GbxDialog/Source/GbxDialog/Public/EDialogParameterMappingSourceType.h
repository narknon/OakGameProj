#pragma once
#include "CoreMinimal.h"
#include "EDialogParameterMappingSourceType.generated.h"

UENUM(BlueprintType)
enum class EDialogParameterMappingSourceType : uint8 {
    Parameter,
    Constant,
    Counter,
    Flag,
};

