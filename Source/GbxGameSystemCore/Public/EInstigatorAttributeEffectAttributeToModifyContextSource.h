#pragma once
#include "CoreMinimal.h"
#include "EInstigatorAttributeEffectAttributeToModifyContextSource.generated.h"

UENUM(BlueprintType)
enum class EInstigatorAttributeEffectAttributeToModifyContextSource : uint8 {
    ThisInventoryActorWithInstigatorFallback,
    InstigatorOnly,
};

