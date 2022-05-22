#pragma once
#include "CoreMinimal.h"
#include "EGbxCustomizationComponentInitSourceType.generated.h"

UENUM(BlueprintType)
enum class EGbxCustomizationComponentInitSourceType : uint8 {
    None,
    CopyFromInstigatorOnSpawn,
    LinkToInstigatorOnSpawn,
};

