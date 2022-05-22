#pragma once
#include "CoreMinimal.h"
#include "ESmartActionResult.generated.h"

UENUM(BlueprintType)
enum class ESmartActionResult : uint8 {
    Success,
    Interrupt,
    Unreserve,
};

