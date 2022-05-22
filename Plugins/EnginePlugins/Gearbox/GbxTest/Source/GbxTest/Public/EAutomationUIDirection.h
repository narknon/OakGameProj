#pragma once
#include "CoreMinimal.h"
#include "EAutomationUIDirection.generated.h"

UENUM(BlueprintType)
enum class EAutomationUIDirection : uint8 {
    Up,
    Down,
    Left,
    Right,
};

