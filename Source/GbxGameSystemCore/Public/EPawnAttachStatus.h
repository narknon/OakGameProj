#pragma once
#include "CoreMinimal.h"
#include "EPawnAttachStatus.generated.h"

UENUM(BlueprintType)
enum class EPawnAttachStatus : uint8 {
    Unoccupied,
    Attaching,
    Attached,
    Detaching,
};

