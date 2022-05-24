#pragma once
#include "CoreMinimal.h"
#include "EAIOOrientedParticleTargetType.generated.h"

UENUM(BlueprintType)
enum class EAIOOrientedParticleTargetType : uint8 {
    None,
    DefaultPosition,
    UIObject,
};

