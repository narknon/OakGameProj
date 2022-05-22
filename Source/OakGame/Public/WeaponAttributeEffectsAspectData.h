#pragma once
#include "CoreMinimal.h"
#include "InventoryAttributeEffectsAspectData.h"
#include "WeaponUseModeAttributeEffectData.h"
#include "WeaponAttributeEffectsAspectData.generated.h"

UCLASS(EditInlineNew)
class UWeaponAttributeEffectsAspectData : public UInventoryAttributeEffectsAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<FWeaponUseModeAttributeEffectData> WeaponUseModeAttributeEffects;
    
public:
    UWeaponAttributeEffectsAspectData();
};

