#pragma once
#include "CoreMinimal.h"
#include "EGbxPhysicalActionMovementLockMode.generated.h"

UENUM(BlueprintType)
enum class EGbxPhysicalActionMovementLockMode : uint8 {
    MLM_None,
    MLM_AquireOnBegin,
    MLM_ReleaseOnEnd,
    MLM_AquireRelease,
    MLM_MAX UMETA(Hidden),
};

