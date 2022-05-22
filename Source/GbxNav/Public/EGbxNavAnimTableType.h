#pragma once
#include "CoreMinimal.h"
#include "EGbxNavAnimTableType.generated.h"

UENUM(BlueprintType)
enum class EGbxNavAnimTableType : uint8 {
    Start,
    Stop,
    TurnIdle,
    TurnMove,
};

