#pragma once
#include "CoreMinimal.h"
#include "EOakMayhemModeConditionType.generated.h"

UENUM(BlueprintType)
enum class EOakMayhemModeConditionType : uint8 {
    IsMayhemModeActive,
    CompareMayhemLevel,
};

