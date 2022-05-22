#pragma once
#include "CoreMinimal.h"
#include "GFxVirtualKeyboardType.generated.h"

UENUM(BlueprintType)
enum class GFxVirtualKeyboardType : uint8 {
    Default,
    Number,
    Web,
    Email,
    Password,
    AlphaNumeric,
};

