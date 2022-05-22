#pragma once
#include "CoreMinimal.h"
#include "EGbxOffsetType.generated.h"

UENUM(BlueprintType)
enum class EGbxOffsetType : uint8 {
    Local,
    World,
};

