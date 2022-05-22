#pragma once
#include "CoreMinimal.h"
#include "GbxCustomizationData.h"
#include "OakCustomizationData.generated.h"

class UInventoryAspectData;
class UPlayerClassIdentifier;
class UCustomizationInventoryData;
class UCustomizationInventoryAssetSetup;
class UInventoryRarityData;
class UCustomizationInventoryBalanceData;

UCLASS()
class UOakCustomizationData : public UGbxCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPlayerClassIdentifier* PlayerClass;
    
    UPROPERTY(EditDefaultsOnly)
    UCustomizationInventoryAssetSetup* InventorySetup;
    
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UInventoryAspectData*> InventoryAspectList;
    
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* RarityData;
    
    UPROPERTY(DuplicateTransient, TextExportTransient, VisibleInstanceOnly)
    UCustomizationInventoryBalanceData* BalanceData;
    
    UPROPERTY(DuplicateTransient, TextExportTransient, VisibleInstanceOnly)
    UCustomizationInventoryData* InventoryData;
    
    UOakCustomizationData();
};

