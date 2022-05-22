#pragma once
#include "CoreMinimal.h"
#include "ESirenGhostArmConfigurationType.generated.h"

UENUM(BlueprintType)
enum class ESirenGhostArmConfigurationType : uint8 {
    None,
    FirstPerson,
    ThirdPerson,
    FirstAndThirdPerson,
    GhostArmsLocked,
};

