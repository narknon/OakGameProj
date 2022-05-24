#pragma once
#include "CoreMinimal.h"
#include "EVendingMachineBuyType.generated.h"

UENUM(BlueprintType)
enum class EVendingMachineBuyType : uint8 {
    Regular,
    BuyBack,
    GearSoldByFriend,
    ItemOfTheDay,
};

