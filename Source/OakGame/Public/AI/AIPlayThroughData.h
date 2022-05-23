#pragma once
#include "CoreMinimal.h"
#include "ItemPoolCollection.h"
#include "AttributeBaseValueData.h"
#include "Engine/DataTable.h"
#include "HealthType.h"
#include "AIPlayThroughData.generated.h"

class UGbxUIName;

USTRUCT(BlueprintType)
struct FAIPlayThroughData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideUIDisplayName: 1;
    
    UPROPERTY()
    uint8 bOverrideDisplayName: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDropOnDeathItemPools: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideEquippedItems: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideHealthInformation: 1;
    
    UPROPERTY(EditAnywhere)
    UGbxUIName* DisplayUIName;
    
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FItemPoolCollection DropOnDeathItemPools;
    
    UPROPERTY()
    FItemPoolCollection EquippedItemPoolCollection;
    
    UPROPERTY(EditAnywhere)
    TArray<FItemPoolCollection> EquippedItemPoolCollections;
    
    UPROPERTY(EditAnywhere)
    bool bEquipSingleItemFromCollection;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeBaseValueData> AttributeStartingValues;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle BalanceTableRow;
    
    UPROPERTY(EditAnywhere)
    TArray<FHealthType> HealthInformation;
    
    OAKGAME_API FAIPlayThroughData();
};

