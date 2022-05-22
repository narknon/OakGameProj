#pragma once
#include "CoreMinimal.h"
#include "EUsableTypeCostContext.generated.h"

UENUM(BlueprintType)
enum class EUsableTypeCostContext : uint8 {
    UsableObject,
    Player,
};

