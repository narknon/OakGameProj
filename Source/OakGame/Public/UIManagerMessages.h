#pragma once
#include "CoreMinimal.h"
#include "UIManagerMessages.generated.h"

UENUM(BlueprintType)
namespace UIManagerMessages {
    enum Type {
        Critical,
        High,
        Normal,
        Low,
        Lowest,
    };
}

