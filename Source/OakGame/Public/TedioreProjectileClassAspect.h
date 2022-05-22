#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryAspectData.h"
#include "TedioreProjectileClassAspect.generated.h"

class ATedioreProjectile;

UCLASS(EditInlineNew)
class UTedioreProjectileClassAspect : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATedioreProjectile> TedioreProjectileClass;
    
public:
    UTedioreProjectileClassAspect();
};

