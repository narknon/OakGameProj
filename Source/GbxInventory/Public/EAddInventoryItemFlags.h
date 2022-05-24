#pragma once
#include "CoreMinimal.h"
#include "EAddInventoryItemFlags.generated.h"

UENUM(BlueprintType)
enum class EAddInventoryItemFlags : uint8 {
    AutoEquip,
    AddedByPickup,
    AddedBySave,
    MissionReward,
};

