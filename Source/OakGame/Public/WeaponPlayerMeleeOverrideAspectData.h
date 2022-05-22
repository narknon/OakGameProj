#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "WeaponPlayerMeleeOverrideAspectData.generated.h"

class UPlayerMeleeData;

UCLASS(EditInlineNew)
class UWeaponPlayerMeleeOverrideAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    UPlayerMeleeData* OverridePlayerMeleeData;
    
public:
    UWeaponPlayerMeleeOverrideAspectData();
};

