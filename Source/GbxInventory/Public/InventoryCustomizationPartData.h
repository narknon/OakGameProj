#pragma once
#include "CoreMinimal.h"
#include "GbxCustomizationData.h"
#include "InventorySerialNumberAssetInterface.h"
#include "UObject/NoExportTypes.h"
#include "InventoryCustomizationPartData.generated.h"

UCLASS(Abstract)
class GBXINVENTORY_API UInventoryCustomizationPartData : public UGbxCustomizationData, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGuid AssetGuid;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldRemovePartWhenDropped;
    
public:
    UInventoryCustomizationPartData();
    
    // Fix for true pure virtual functions not being implemented
};

