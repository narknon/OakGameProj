#pragma once
#include "CoreMinimal.h"
#include "EOakMinimapIconComponentType.generated.h"

UENUM(BlueprintType)
enum class EOakMinimapIconComponentType : uint8 {
    Manual,
    TargetingComponentDriven,
    WhileAlive,
};

