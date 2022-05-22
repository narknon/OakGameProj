#pragma once
#include "CoreMinimal.h"
#include "ECameraLookSpaces.generated.h"

UENUM(BlueprintType)
enum class ECameraLookSpaces : uint8 {
    World,
    ViewTarget,
    ViewTargetBase,
};

