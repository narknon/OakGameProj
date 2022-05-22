#pragma once
#include "CoreMinimal.h"
#include "EGbxPhysicalActionDynamicBodyState.generated.h"

UENUM(BlueprintType)
enum class EGbxPhysicalActionDynamicBodyState : uint8 {
    DBS_Upright,
    DBS_FaceDown,
    DBS_FaceUp,
    DBS_Unknown,
    DBS_MAX UMETA(Hidden),
};

