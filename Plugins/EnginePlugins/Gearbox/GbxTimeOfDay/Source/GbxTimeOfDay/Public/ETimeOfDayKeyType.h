#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDayKeyType.generated.h"

UENUM(BlueprintType)
enum class ETimeOfDayKeyType : uint8 {
    None,
    PropertyKey,
    EventKey,
    StateKey,
};

