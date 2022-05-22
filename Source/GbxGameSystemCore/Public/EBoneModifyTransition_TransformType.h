#pragma once
#include "CoreMinimal.h"
#include "EBoneModifyTransition_TransformType.generated.h"

UENUM(BlueprintType)
enum class EBoneModifyTransition_TransformType : uint8 {
    Translation,
    Rotation,
    Scale,
    EBoneModifyTransition_MAX UMETA(Hidden),
};

