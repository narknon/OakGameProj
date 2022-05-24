#pragma once
#include "CoreMinimal.h"
#include "EGeyserBehavior.generated.h"

UENUM(BlueprintType)
enum class EGeyserBehavior : uint8 {
    None,
    Intermittent,
    AlwaysOn,
};

