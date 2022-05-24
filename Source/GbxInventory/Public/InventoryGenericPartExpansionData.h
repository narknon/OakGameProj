#pragma once
#include "CoreMinimal.h"
#include "InventoryGenericPartExpansionListData.h"
#include "GbxDataAsset.h"
#include "InventoryGenericPartExpansionData.generated.h"

class UGbxCondition;
class UInventoryBalanceCollectionData;
class UActorPartData;

UCLASS()
class GBXINVENTORY_API UInventoryGenericPartExpansionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ExpansionCondition;
    
    UPROPERTY(EditAnywhere)
    UInventoryBalanceCollectionData* InventoryBalanceCollection;
    
    UPROPERTY(EditAnywhere)
    FInventoryGenericPartExpansionListData GenericParts;
    
public:
    UInventoryGenericPartExpansionData();
private:
    UFUNCTION()
    void EnumeratePartListForPartType(uint8 PartType, TArray<UActorPartData*>& OutPartList) const;
    
};

