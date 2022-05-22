#pragma once
#include "CoreMinimal.h"
#include "EInventoryConditionalDamageApplicationTarget.generated.h"

UENUM(BlueprintType)
enum class EInventoryConditionalDamageApplicationTarget : uint8 {
    Inventory,
    InstigatorDamageCaused,
    InstigatorDamageReceived,
};

