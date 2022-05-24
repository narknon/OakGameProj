#pragma once
#include "CoreMinimal.h"
#include "EInventoryListType.generated.h"

UENUM(BlueprintType)
enum class EInventoryListType : uint8 {
    IL_Primary,
    IL_Bank,
    IL_LostLoot,
    IL_GearUp,
    IL_MAX UMETA(Hidden),
};

