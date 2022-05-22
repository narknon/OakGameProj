#pragma once
#include "CoreMinimal.h"
#include "EGbxPhysicalActionDynamicBoneActivationMode.generated.h"

UENUM(BlueprintType)
enum class EGbxPhysicalActionDynamicBoneActivationMode : uint8 {
    DBAM_HitBone,
    DBAM_Recursive,
    DBAM_FullBody,
    DBAM_MAX UMETA(Hidden),
};

