#pragma once
#include "CoreMinimal.h"
#include "EGbxAttributeModifierActionExecOutput.generated.h"

UENUM(BlueprintType)
enum class EGbxAttributeModifierActionExecOutput : uint8 {
    Success,
    Failure,
};

