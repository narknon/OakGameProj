#pragma once
#include "CoreMinimal.h"
#include "VendingMachineRefillAmmoData.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct FVendingMachineRefillAmmoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AmmoMax;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AmmoCurrent;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AmmoStackCount;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AmmoStackCost;
    
    OAKGAME_API FVendingMachineRefillAmmoData();
};

