#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "AmmoAspectData.generated.h"

class UGbxAmmoTypeData;

UCLASS(EditInlineNew)
class OAKGAME_API UAmmoAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGbxAmmoTypeData* AmmoType;
    
public:
    UAmmoAspectData();
};

