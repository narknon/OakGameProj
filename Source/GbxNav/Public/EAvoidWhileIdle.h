#pragma once
#include "CoreMinimal.h"
#include "EAvoidWhileIdle.generated.h"

UENUM(BlueprintType)
enum class EAvoidWhileIdle : uint8 {
    Default,
    AvoidWhileIdle,
    OnlyAvoidWhileMoving,
};

