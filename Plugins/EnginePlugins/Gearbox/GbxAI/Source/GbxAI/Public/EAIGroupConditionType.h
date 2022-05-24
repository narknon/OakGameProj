#pragma once
#include "CoreMinimal.h"
#include "EAIGroupConditionType.generated.h"

UENUM(BlueprintType)
enum class EAIGroupConditionType : uint8 {
    AllFalse,
    AllTrue,
    SomeFalse,
    SomeTrue,
};

