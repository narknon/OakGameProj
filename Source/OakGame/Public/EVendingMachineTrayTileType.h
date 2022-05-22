#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineTrayTileType.generated.h"

UENUM(BlueprintType)
enum class EVendingMachineTrayTileType : uint8 {
    Regular,
    Featured,
    GearSoldByFriend,
    VisibleDummy,
    EndOfListDummy,
};

