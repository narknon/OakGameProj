#pragma once
#include "CoreMinimal.h"
#include "EMenuTransitionOperation.generated.h"

UENUM(BlueprintType)
enum class EMenuTransitionOperation : uint8 {
    Push,
    Pop,
    Invalid,
    None,
};

