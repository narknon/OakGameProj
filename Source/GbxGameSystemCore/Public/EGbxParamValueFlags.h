#pragma once
#include "CoreMinimal.h"
#include "EGbxParamValueFlags.generated.h"

UENUM(BlueprintType)
enum class EGbxParamValueFlags : uint8 {
    ClampPositive,
    AllBBKeyTypes,
};

