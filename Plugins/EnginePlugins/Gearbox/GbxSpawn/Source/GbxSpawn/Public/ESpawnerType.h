#pragma once
#include "CoreMinimal.h"
#include "ESpawnerType.generated.h"

UENUM(BlueprintType)
enum class ESpawnerType : uint8 {
    None,
    Level,
    Static,
    Dynamic,
};

