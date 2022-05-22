#pragma once
#include "CoreMinimal.h"
#include "OakInventoryMenuTypePriorityInfo.generated.h"

class UInventoryCategoryData;
class UWeaponTypeAsset;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakInventoryMenuTypePriorityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* ItemType;
    
    UPROPERTY(EditAnywhere)
    UWeaponTypeAsset* WeaponTypeData;
    
    UPROPERTY(EditAnywhere)
    int32 PriorityValue;
    
    FOakInventoryMenuTypePriorityInfo();
};

