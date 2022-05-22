#pragma once
#include "CoreMinimal.h"
#include "EFilterResultOperation.generated.h"

UENUM(BlueprintType)
enum class EFilterResultOperation : int32 {
    AcceptAsNewResult,
    Add,
    Subtract,
};

