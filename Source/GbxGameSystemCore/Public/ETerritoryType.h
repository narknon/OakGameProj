#pragma once
#include "CoreMinimal.h"
#include "ETerritoryType.generated.h"

UENUM(BlueprintType)
enum class ETerritoryType : uint8 {
    Patrol,
    Threat,
    Combat,
};

