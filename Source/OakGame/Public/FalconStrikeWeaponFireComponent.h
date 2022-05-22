#pragma once
#include "CoreMinimal.h"
#include "WeaponFireProjectileComponent.h"
#include "FalconStrikeWeaponFireComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFalconStrikeWeaponFireComponent : public UWeaponFireProjectileComponent {
    GENERATED_BODY()
public:
    UFalconStrikeWeaponFireComponent();
};

