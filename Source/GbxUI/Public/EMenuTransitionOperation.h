#pragma once
#include "CoreMinimal.h"
#include "EMenuTransitionOperation.generated.h"

UENUM(BlueprintType)
enum class EMenuTransitionOperation :  {
    Push,
    Pop,
    Invalid,
    None,
};

