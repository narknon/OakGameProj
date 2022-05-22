#pragma once
#include "CoreMinimal.h"
#include "EIntroType.generated.h"

UENUM(BlueprintType)
enum class EIntroType : uint8 {
    EnterFromGround,
    EnterFromSwapSeat,
    HijackFromGround,
    HijackFromSwapSeat,
};

