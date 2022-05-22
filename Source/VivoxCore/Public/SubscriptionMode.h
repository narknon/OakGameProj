#pragma once
#include "CoreMinimal.h"
#include "SubscriptionMode.generated.h"

UENUM(BlueprintType)
enum class SubscriptionMode :  {
    Accept,
    Block,
    Defer,
};

