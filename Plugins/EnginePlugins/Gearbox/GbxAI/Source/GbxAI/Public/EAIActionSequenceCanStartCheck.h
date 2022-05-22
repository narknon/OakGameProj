#pragma once
#include "CoreMinimal.h"
#include "EAIActionSequenceCanStartCheck.generated.h"

UENUM(BlueprintType)
enum class EAIActionSequenceCanStartCheck : uint8 {
    FirstChild,
    EachChild,
};

