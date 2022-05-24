#pragma once
#include "CoreMinimal.h"
#include "EColorSelectionType.generated.h"

UENUM(BlueprintType)
enum class EColorSelectionType : uint8 {
    TopColor,
    BottomColor,
    ResetBothToDefault,
};

