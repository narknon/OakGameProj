#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "InventoryItemAddedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryItemAdded, const FInventoryListEntryHandle&, UpdatedItemHandle);

