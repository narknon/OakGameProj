#pragma once
#include "CoreMinimal.h"
#include "EActionSelectionMethod.generated.h"

UENUM(BlueprintType)
enum class EActionSelectionMethod : uint8 {
    FIRST,
    RANDOM,
};

