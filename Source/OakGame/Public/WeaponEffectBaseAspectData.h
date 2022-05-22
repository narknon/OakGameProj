#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "GameplayTagContainer.h"
#include "WeaponEffectBaseAspectData.generated.h"

UCLASS(Abstract, EditInlineNew)
class UWeaponEffectBaseAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FGameplayTagContainer ComparisonTags;
    
public:
    UWeaponEffectBaseAspectData();
};

