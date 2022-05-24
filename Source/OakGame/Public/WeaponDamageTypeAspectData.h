#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryAspectData.h"
#include "WeaponDamageTypeAspectData.generated.h"

class UImpactData;
class UGbxDamageType;

UCLASS(EditInlineNew)
class UWeaponDamageTypeAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    int32 UseModeBitmask;
    
    UPROPERTY(EditInstanceOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditInstanceOnly)
    UImpactData* ImpactData;
    
    UPROPERTY(EditInstanceOnly)
    bool bUseForBeamsOnly;
    
public:
    UWeaponDamageTypeAspectData();
};

