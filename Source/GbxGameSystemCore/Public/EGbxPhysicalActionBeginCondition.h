#pragma once
#include "CoreMinimal.h"
#include "EGbxPhysicalActionBeginCondition.generated.h"

UENUM(BlueprintType)
enum class EGbxPhysicalActionBeginCondition : uint8 {
    BeginCondition_Immediate,
    BeginCondition_WaitUntilPoseMatch,
    BeginCondition_NotAllFlagsMatch,
    BeginCondition_NotAnyFlagsMatch,
    BeginCondition_MAX UMETA(Hidden),
};

