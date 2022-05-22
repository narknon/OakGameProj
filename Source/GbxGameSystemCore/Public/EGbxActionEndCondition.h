#pragma once
#include "CoreMinimal.h"
#include "EGbxActionEndCondition.generated.h"

UENUM(BlueprintType)
enum class EGbxActionEndCondition : uint8 {
    EndCondition_BlendOut,
    EndCondition_LastFrame,
    EndCondition_Loop,
    EndCondition_MAX UMETA(Hidden),
};

