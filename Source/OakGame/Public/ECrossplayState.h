#pragma once
#include "CoreMinimal.h"
#include "ECrossplayState.generated.h"

UENUM(BlueprintType)
enum class ECrossplayState : uint8 {
    Disabled,
    Enabled,
};

