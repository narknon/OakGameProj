#pragma once
#include "CoreMinimal.h"
#include "RarityMaterialData.generated.h"

class UInventoryRarityData;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FRarityMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* Rarity;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    FRarityMaterialData();
};

