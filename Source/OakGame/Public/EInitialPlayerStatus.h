#pragma once
#include "CoreMinimal.h"
#include "EInitialPlayerStatus.generated.h"

UENUM(BlueprintType)
namespace EInitialPlayerStatus {
    enum Type {
        NotSelected,
        Selected,
    };
}

