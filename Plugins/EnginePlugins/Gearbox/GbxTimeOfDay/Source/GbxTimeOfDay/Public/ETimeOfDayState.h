#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDayState.generated.h"

UENUM(BlueprintType)
enum class ETimeOfDayState : uint8 {
    None,
    Morning,
    Day,
    Evening,
    Night,
};

