#pragma once
#include "CoreMinimal.h"
#include "InventoryPartData.h"
#include "WeaponUseModeAttributeEffectData.h"
#include "WeaponPartData.generated.h"

UCLASS(Abstract)
class OAKGAME_API UWeaponPartData : public UInventoryPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    bool bIgnoredForWeaponNaming;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FWeaponUseModeAttributeEffectData> WeaponUseModeAttributeEffects;
    
public:
    UWeaponPartData();
};

