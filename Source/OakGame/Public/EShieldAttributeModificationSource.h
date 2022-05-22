#pragma once
#include "CoreMinimal.h"
#include "EShieldAttributeModificationSource.generated.h"

UENUM(BlueprintType)
enum class EShieldAttributeModificationSource : uint8 {
    Other,
    Equipped,
    Filled,
    Depleted,
    NotDepleted,
};

