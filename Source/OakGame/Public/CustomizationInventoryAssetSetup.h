#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "CustomizationInventoryAssetSetup.generated.h"

class UManufacturerData;
class UInventoryCategoryData;
class AActor;

UCLASS()
class UCustomizationInventoryAssetSetup : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UManufacturerData* ManufacturerData;
    
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* InventoryCategory;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> InventoryActorClass;
    
    UCustomizationInventoryAssetSetup();
};

