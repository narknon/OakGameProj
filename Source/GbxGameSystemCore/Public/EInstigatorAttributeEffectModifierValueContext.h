#pragma once
#include "CoreMinimal.h"
#include "EInstigatorAttributeEffectModifierValueContext.generated.h"

UENUM(BlueprintType)
enum class EInstigatorAttributeEffectModifierValueContext : uint8 {
    Instigator,
    ThisInventoryActor,
};

