#pragma once
#include "CoreMinimal.h"
#include "EGbxNavGoalCheats.generated.h"

UENUM(BlueprintType)
enum class EGbxNavGoalCheats : uint8 {
    None,
    MoveEvenIfUnreachable,
    ValidEvenIfNoNav,
};

