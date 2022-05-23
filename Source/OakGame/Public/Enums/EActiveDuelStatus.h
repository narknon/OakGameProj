#pragma once
#include "CoreMinimal.h"
#include "EActiveDuelStatus.generated.h"

UENUM(BlueprintType)
enum class EActiveDuelStatus : uint8 {
    WaitingToStart,
    InProgress,
    Finished,
};

