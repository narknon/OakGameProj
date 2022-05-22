#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryAspectData.h"
#include "ShieldDamageTypeAspectData.generated.h"

class UGbxDamageType;

UCLASS(EditInlineNew)
class UShieldDamageTypeAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
public:
    UShieldDamageTypeAspectData();
};

