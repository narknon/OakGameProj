#pragma once
#include "CoreMinimal.h"
#include "EActionRegisterType.generated.h"

UENUM(BlueprintType)
enum class EActionRegisterType : uint8 {
    NoType,
    Float,
    Int,
    Object,
    Name,
    Vector,
};

