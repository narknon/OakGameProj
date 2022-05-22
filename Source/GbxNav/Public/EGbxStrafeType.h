#pragma once
#include "CoreMinimal.h"
#include "EGbxStrafeType.generated.h"

UENUM(BlueprintType)
enum class EGbxStrafeType : uint8 {
    Default,
    Strafe,
    Forward,
};

