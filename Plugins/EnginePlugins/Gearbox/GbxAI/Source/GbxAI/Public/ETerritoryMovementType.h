#pragma once
#include "CoreMinimal.h"
#include "ETerritoryMovementType.generated.h"

UENUM(BlueprintType)
enum class ETerritoryMovementType : uint8 {
    Ground,
    Flight,
    Dynamic,
};

