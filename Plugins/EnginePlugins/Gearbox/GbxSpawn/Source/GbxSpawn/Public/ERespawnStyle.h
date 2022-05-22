#pragma once
#include "CoreMinimal.h"
#include "ERespawnStyle.generated.h"

UENUM(BlueprintType)
enum class ERespawnStyle : uint8 {
    Timed,
    Level,
    Never,
};

