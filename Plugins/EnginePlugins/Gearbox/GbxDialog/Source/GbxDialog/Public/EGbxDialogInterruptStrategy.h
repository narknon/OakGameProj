#pragma once
#include "CoreMinimal.h"
#include "EGbxDialogInterruptStrategy.generated.h"

UENUM(BlueprintType)
enum class EGbxDialogInterruptStrategy : uint8 {
    StopOthers,
    SpeakOverOthers,
};

