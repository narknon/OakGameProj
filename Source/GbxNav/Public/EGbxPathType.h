#pragma once
#include "CoreMinimal.h"
#include "EGbxPathType.generated.h"

UENUM(BlueprintType)
enum class EGbxPathType : uint8 {
    None,
    Walk,
    Fly,
};

