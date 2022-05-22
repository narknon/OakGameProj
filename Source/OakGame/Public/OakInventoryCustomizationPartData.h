#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryCustomizationPartData.h"
#include "OakInventoryCustomizationPartData.generated.h"

class UInventoryAspectData;
class UInventoryRarityData;
class UManufacturerData;
class UInventoryCategoryData;
class UCustomizationInventoryData;
class AActor;
class UCustomizationInventoryBalanceData;

UCLASS(Abstract)
class UOakInventoryCustomizationPartData : public UInventoryCustomizationPartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UManufacturerData* ManufacturerData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInventoryCategoryData* InventoryCategory;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> InventoryActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnforceRarityRestriction;
    
    UPROPERTY(EditInstanceOnly, Export)
    TArray<UInventoryAspectData*> InventoryAspectList;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    UInventoryRarityData* RarityData;
    
    UPROPERTY(DuplicateTransient, TextExportTransient, VisibleInstanceOnly)
    UCustomizationInventoryBalanceData* BalanceData;
    
    UPROPERTY(DuplicateTransient, TextExportTransient, VisibleInstanceOnly)
    UCustomizationInventoryData* InventoryData;
    
    UOakInventoryCustomizationPartData();
};

