#pragma once
#include "CoreMinimal.h"
#include "EVerticalTextAutoSizeType.generated.h"

UENUM(BlueprintType)
enum class EVerticalTextAutoSizeType : uint8 {
    none,
    top,
    center,
    bottom,
};

