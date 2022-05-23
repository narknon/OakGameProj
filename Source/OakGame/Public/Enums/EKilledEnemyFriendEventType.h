#pragma once
#include "CoreMinimal.h"
#include "EKilledEnemyFriendEventType.generated.h"

UENUM(BlueprintType)
enum class EKilledEnemyFriendEventType : uint8 {
    None,
    Enemy,
    NamedEnemy,
    Boss,
};

