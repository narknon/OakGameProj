#pragma once
#include "CoreMinimal.h"
#include "EChargeClipState.generated.h"

UENUM(BlueprintType)
enum class EChargeClipState : uint8 {
    NOCHARGE,
    SPREADCLIP,
    ACCURACYCLIP,
};

