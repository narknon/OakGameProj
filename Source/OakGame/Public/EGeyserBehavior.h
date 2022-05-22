#pragma once
#include "CoreMinimal.h"
#include "EGeyserBehavior.generated.h"

UENUM(BlueprintType)
enum class EGeyserBehavior :  {
    None,
    Intermittent,
    AlwaysOn,
};

