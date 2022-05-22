#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryAspectData.h"
#include "GrenadeDamageTypeAspectData.generated.h"

class UGbxDamageType;

UCLASS(EditInlineNew)
class UGrenadeDamageTypeAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
public:
    UGrenadeDamageTypeAspectData();
};

