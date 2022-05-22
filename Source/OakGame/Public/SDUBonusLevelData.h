#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttributeEffectData.h"
#include "SDUBonusLevelData.generated.h"

class UInventoryCategoryData;
class UInventoryRarityData;

USTRUCT()
struct FSDUBonusLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SDUPrice;
    
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* Currency;
    
    UPROPERTY(EditAnywhere)
    FAttributeEffectData AttributeModifyInfo;
    
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* SDURarity;
    
    OAKGAME_API FSDUBonusLevelData();
};

