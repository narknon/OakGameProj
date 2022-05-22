#pragma once
#include "CoreMinimal.h"
#include "EGlobalBoneModifyProfile_PoseMode.generated.h"

UENUM(BlueprintType)
enum class EGlobalBoneModifyProfile_PoseMode : uint8 {
    Override,
    Multiplicative,
    EGlobalBoneModifyProfile_MAX UMETA(Hidden),
};

