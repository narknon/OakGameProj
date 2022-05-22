#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceController.h"
#include "GbxAbilityResourceController_ConditionalDamageModifier.generated.h"

USTRUCT(BlueprintType)
struct GBXABILITIES_API FGbxAbilityResourceController_ConditionalDamageModifier : public FGbxAbilityResourceController {
    GENERATED_BODY()
public:
    FGbxAbilityResourceController_ConditionalDamageModifier();
};

