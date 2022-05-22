#pragma once
#include "CoreMinimal.h"
#include "EAIDodgeType.generated.h"

UENUM(BlueprintType)
enum class EAIDodgeType : uint8 {
    None,
    Bullet,
    Grenade,
    Random,
    Zone,
};

