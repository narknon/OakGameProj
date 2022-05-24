#pragma once
#include "CoreMinimal.h"
#include "ETradeRequestReceptionType.generated.h"

UENUM(BlueprintType)
enum class ETradeRequestReceptionType : uint8 {
    All,
    FriendsOnly,
    Off,
    MAX,
};

