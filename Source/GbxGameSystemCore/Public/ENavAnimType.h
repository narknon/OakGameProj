#pragma once
#include "CoreMinimal.h"
#include "ENavAnimType.generated.h"

UENUM(BlueprintType)
enum class ENavAnimType :  {
    None,
    Direction,
    Destination,
    Rotation,
};

