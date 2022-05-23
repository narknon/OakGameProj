#pragma once
#include "CoreMinimal.h"
#include "EColorSelectionType.generated.h"

UENUM(BlueprintType)
enum class EColorSelectionType :  {
    TopColor,
    BottomColor,
    ResetBothToDefault,
};

