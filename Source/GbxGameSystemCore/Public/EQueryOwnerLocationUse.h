#pragma once
#include "CoreMinimal.h"
#include "EQueryOwnerLocationUse.generated.h"

UENUM(BlueprintType)
enum class EQueryOwnerLocationUse : uint8 {
    Never,
    Always,
    Only,
};

