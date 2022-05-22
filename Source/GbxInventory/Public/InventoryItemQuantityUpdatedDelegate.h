#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "InventoryItemQuantityUpdatedDelegate.generated.h"

class UInventoryCategoryData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FInventoryItemQuantityUpdated, const FInventoryListEntryHandle&, UpdatedItemHandle, const UInventoryCategoryData*, ItemCategory, int32, Quantity, int32, MaxQuantity);

