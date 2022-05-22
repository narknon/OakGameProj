#pragma once
#include "CoreMinimal.h"
#include "ETransporterCraneState.generated.h"

UENUM(BlueprintType)
enum ETransporterCraneState {
    Deactivated,
    Stopped,
    MoveForward,
    MoveBackward,
};

