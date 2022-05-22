#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectNotify.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectNotify : uint8 {
    LerpToSlot,
    LerpToGround,
};

