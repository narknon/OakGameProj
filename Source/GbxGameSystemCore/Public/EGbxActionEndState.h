#pragma once
#include "CoreMinimal.h"
#include "EGbxActionEndState.generated.h"

UENUM(BlueprintType)
enum class EGbxActionEndState : uint8 {
    NotFinished,
    Success,
    Interrupted,
    Aborted,
    Denied,
    Error,
};

