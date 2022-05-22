#pragma once
#include "CoreMinimal.h"
#include "EHealthTypeState.generated.h"

UENUM(BlueprintType)
enum class EHealthTypeState : uint8 {
    Normal,
    Low,
    VeryLow,
    Depleted,
};

