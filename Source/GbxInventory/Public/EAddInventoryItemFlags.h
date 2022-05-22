#pragma once
#include "CoreMinimal.h"
#include "EAddInventoryItemFlags.generated.h"

UENUM(BlueprintType)
enum class EAddInventoryItemFlags :  {
    AutoEquip,
    AddedByPickup,
    AddedBySave,
    MissionReward,
};

