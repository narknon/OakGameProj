#pragma once
#include "CoreMinimal.h"
#include "ECMMoveLRControlType.generated.h"

UENUM(BlueprintType)
enum class ECMMoveLRControlType : uint8 {
    None,
    Yaw,
    Speed,
};

