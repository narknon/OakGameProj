#pragma once
#include "CoreMinimal.h"
#include "ESpawnStretchType.generated.h"

UENUM(BlueprintType)
enum class ESpawnStretchType : uint8 {
    None,
    StartPoint,
    EndPoint,
    Dynamic,
};

