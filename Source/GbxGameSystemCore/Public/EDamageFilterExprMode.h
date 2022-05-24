#pragma once
#include "CoreMinimal.h"
#include "EDamageFilterExprMode.generated.h"

UENUM()
enum class EDamageFilterExprMode : int32 {
    MustMatch,
    MustNotMatch,
};

