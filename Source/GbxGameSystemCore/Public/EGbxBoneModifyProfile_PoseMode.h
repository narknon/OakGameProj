#pragma once
#include "CoreMinimal.h"
#include "EGbxBoneModifyProfile_PoseMode.generated.h"

UENUM(BlueprintType)
enum class EGbxBoneModifyProfile_PoseMode : uint8 {
    Override,
    Additive,
    EGbxBoneModifyProfile_MAX UMETA(Hidden),
};

