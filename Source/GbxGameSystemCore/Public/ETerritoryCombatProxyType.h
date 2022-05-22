#pragma once
#include "CoreMinimal.h"
#include "ETerritoryCombatProxyType.generated.h"

UENUM(BlueprintType)
enum class ETerritoryCombatProxyType : uint8 {
    Threat,
    Patrol,
};

