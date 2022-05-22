#pragma once
#include "CoreMinimal.h"
#include "EAIGroupConditionType.generated.h"

UENUM(BlueprintType)
enum class EAIGroupConditionType :  {
    AllFalse,
    AllTrue,
    SomeFalse,
    SomeTrue,
};

