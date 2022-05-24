#pragma once
#include "CoreMinimal.h"
#include "EPlayerAlertType.generated.h"

UENUM(BlueprintType)
enum class EPlayerAlertType : uint8 {
    Location,
    Neutral,
    Friendly,
    Hostile,
    Loot,
    Chest,
    Max,
};

