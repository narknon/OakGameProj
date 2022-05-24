#pragma once
#include "CoreMinimal.h"
#include "EFilterResultOperation.generated.h"

UENUM()
enum class EFilterResultOperation : int32 {
    AcceptAsNewResult,
    Add,
    Subtract,
};

