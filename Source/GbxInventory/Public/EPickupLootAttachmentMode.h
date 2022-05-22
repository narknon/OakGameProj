#pragma once
#include "CoreMinimal.h"
#include "EPickupLootAttachmentMode.generated.h"

UENUM(BlueprintType)
enum class EPickupLootAttachmentMode : uint8 {
    Origin,
    Center,
    CenterAndScale,
    CenterAndScaleUpOrDown,
    ScaleDown,
};

