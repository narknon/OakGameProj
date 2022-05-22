#pragma once
#include "CoreMinimal.h"
#include "EAvoidWhileIdle.generated.h"

UENUM(BlueprintType)
enum class EAvoidWhileIdle :  {
    Default,
    AvoidWhileIdle,
    OnlyAvoidWhileMoving,
};

