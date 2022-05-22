#pragma once
#include "CoreMinimal.h"
#include "CachedUIStatCollectionData.h"
#include "LootableEventResultItem.generated.h"

class UInventoryNamePartData;
class UInventoryBalanceStateComponent;

USTRUCT(BlueprintType)
struct FLootableEventResultItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 OrderIndex;
    
    UPROPERTY()
    bool bDisplayNameIsInventoryDataName;
    
    UPROPERTY()
    TArray<UInventoryNamePartData*> DisplayNameParts;
    
    UPROPERTY()
    FString SerialNumber;
    
    UPROPERTY()
    int32 MonetaryValue;
    
    UPROPERTY()
    int32 InventoryScoreValue;
    
    UPROPERTY()
    bool bHasAFoilPart;
    
    UPROPERTY()
    FCachedUIStatCollectionData Stats;
    
    UPROPERTY()
    FString Base64EncodedThumbnail;
    
    UPROPERTY(Export)
    UInventoryBalanceStateComponent* BalanceStateComp;
    
    OAKGAME_API FLootableEventResultItem();
};

