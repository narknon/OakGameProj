#pragma once
#include "CoreMinimal.h"
#include "EBehaviorOutput.generated.h"

UENUM(BlueprintType)
enum class EBehaviorOutput : uint8 {
    Found,
    NotFound,
};

