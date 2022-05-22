#pragma once
#include "CoreMinimal.h"
#include "EAnimActionDefInput.generated.h"

UENUM(BlueprintType)
enum class EAnimActionDefInput : uint8 {
    AnimAsset = 0x1,
    AnimAssetName,
};

