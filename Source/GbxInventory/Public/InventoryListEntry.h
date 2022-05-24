#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "Engine/NetSerialization.h"
#include "EPlayerDroppability.h"
#include "InventoryListEntry.generated.h"

class UInventoryCategoryData;
class AActor;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryListEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FInventoryListEntryHandle Handle;
    
    UPROPERTY(BlueprintReadOnly)
    UInventoryCategoryData* BaseCategoryDefinition;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Quantity;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* StoredActor;
    
    UPROPERTY(BlueprintReadOnly)
    EPlayerDroppability PlayerDroppability;
    
    FInventoryListEntry();
};

