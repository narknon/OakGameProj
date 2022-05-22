#pragma once
#include "CoreMinimal.h"
#include "EAttributeInitializerUsageMode.generated.h"

UENUM(BlueprintType)
enum class EAttributeInitializerUsageMode : uint8 {
    Set,
    Add,
    Scale,
    Offset,
};

