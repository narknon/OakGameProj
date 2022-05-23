#pragma once
#include "CoreMinimal.h"
#include "ERevolverOffsetMode.generated.h"

UENUM(BlueprintType)
enum class ERevolverOffsetMode : uint8 {
    None,
    Left,
    Right,
};

