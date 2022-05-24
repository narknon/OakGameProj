#pragma once
#include "CoreMinimal.h"
#include "ECanSprintResult.generated.h"

UENUM(BlueprintType)
enum class ECanSprintResult : uint8 {
    Yes,
    No,
    Cancel,
};

