#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectUseResult.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectUseResult :  {
    Failure,
    Running,
    Blocking,
    Success,
};

