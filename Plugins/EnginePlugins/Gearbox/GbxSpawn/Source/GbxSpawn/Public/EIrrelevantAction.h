#pragma once
#include "CoreMinimal.h"
#include "EIrrelevantAction.generated.h"

UENUM(BlueprintType)
enum class EIrrelevantAction : uint8 {
    Suspend,
    Remove,
    Nothing,
};

