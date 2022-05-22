#pragma once
#include "CoreMinimal.h"
#include "ECMMoveFBControlType.generated.h"

UENUM(BlueprintType)
enum class ECMMoveFBControlType : uint8 {
    None,
    Pitch,
    Speed,
};

