#pragma once
#include "CoreMinimal.h"
#include "ECoverStyleAnimType.generated.h"

UENUM(BlueprintType)
enum class ECoverStyleAnimType : uint8 {
    TimedMoveOut,
    TimedStayIn,
    SingleAnim,
};

