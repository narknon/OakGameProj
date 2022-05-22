#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectLookAtRule.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectLookAtRule : uint8 {
    None,
    ActorCenter,
    ActorEyes,
    ActorSocket,
};

