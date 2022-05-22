#pragma once
#include "CoreMinimal.h"
#include "EGbxPhysicalActionEndCondition.generated.h"

UENUM(BlueprintType)
enum class EGbxPhysicalActionEndCondition : uint8 {
    EndCondition_AnimationMatch,
    EndCondition_NoFatigue,
    EndCondition_FullFatigue,
    EndCondition_AnimationEnd,
    EndCondition_NotAllFlagsMatch,
    EndCondition_NotAnyFlagsMatch,
    EndCondition_Undetermined,
    EndCondition_MAX UMETA(Hidden),
};

