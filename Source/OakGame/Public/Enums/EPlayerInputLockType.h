#pragma once
#include "CoreMinimal.h"
#include "EPlayerInputLockType.generated.h"

UENUM(BlueprintType)
enum class EPlayerInputLockType : uint8 {
    None,
    All,
    Movement,
    Looking,
    Jumping,
    Weapon,
};

