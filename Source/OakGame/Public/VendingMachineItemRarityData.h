#pragma once
#include "CoreMinimal.h"
#include "VendingMachineItemRarityData.generated.h"

class UInventoryRarityData;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FVendingMachineItemRarityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* Rarity;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ShelfMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ItemOfTheDayShelfMaterial;
    
    UPROPERTY(EditAnywhere)
    float SelectionParticleRarityParameter;
    
    OAKGAME_API FVendingMachineItemRarityData();
};

