#pragma once
#include "CoreMinimal.h"
#include "EGbxSpinnerWidgetGoToMethod.generated.h"

UENUM(BlueprintType)
enum class EGbxSpinnerWidgetGoToMethod : uint8 {
    FromCurrent,
    Immediately,
};

