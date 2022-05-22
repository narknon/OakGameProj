#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceController.h"
#include "OakAbilityResourceController_WeaponShotModifier.generated.h"

USTRUCT(BlueprintType)
struct FOakAbilityResourceController_WeaponShotModifier : public FGbxAbilityResourceController {
    GENERATED_BODY()
public:
    OAKGAME_API FOakAbilityResourceController_WeaponShotModifier();
};

