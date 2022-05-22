#pragma once
#include "CoreMinimal.h"
#include "ItemPoolListInterface.h"
#include "InventorySerialNumberAssetInterface.h"
#include "UObject/NoExportTypes.h"
#include "BalancedInventoryInfo.h"
#include "AttributeInitializationData.h"
#include "ItemPoolData.generated.h"

class UGbxAttributeData;
class UItemPoolExpansionData;

UCLASS()
class GBXINVENTORY_API UItemPoolData : public UItemPoolListInterface, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FBalancedInventoryInfo> BalancedItems;
    
    UPROPERTY(EditAnywhere)
    bool bSupportsGameStageVariance;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Quantity;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* MinGameStageRequirement;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* MaxGameStageRequirement;
    
    UPROPERTY(Transient)
    TArray<UItemPoolExpansionData*> Expansions;
    
private:
    UPROPERTY(DuplicateTransient)
    FGuid AssetGuid;
    
public:
    UItemPoolData();
    
    // Fix for true pure virtual functions not being implemented
};

