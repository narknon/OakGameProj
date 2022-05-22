#pragma once
#include "CoreMinimal.h"
#include "ETerrainType.generated.h"

UENUM(BlueprintType)
enum class ETerrainType : uint8 {
    Low,
    Medium,
    High,
    Ultra,
};

